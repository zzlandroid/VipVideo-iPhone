//
//  AXGradientProgressView.h
//  AXPracticalHUD
//
//  Created by ai on 9/7/15.
//  Copyright © 2015 ai. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.

#import <UIKit/UIKit.h>
/// Gradient style progress view.
NS_SWIFT_NAME(GradientProgressView) @interface AXGradientProgressView : UIView
/// Progress value between [0, 1].
@property(assign, nonatomic) CGFloat progress;
/// Height of the progress indicator aera. Default is 1.0.
@property(assign, nonatomic) CGFloat progressHeight;
/// Colors of the gradient.
@property(copy, nonatomic) NSMutableArray *colors;
/// Animation duration. Default is 0.08.
@property(assign, nonatomic) CGFloat duration;
/// Begin animation of the gradient progress view.
- (void)beginAnimating;
/// End animating.
- (void)endAnimating;
@end
