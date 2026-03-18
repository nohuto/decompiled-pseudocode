/*
 * XREFs of pow @ 0x1800DB796
 * Callers:
 *     ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800AF900 (-Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@1.c)
 *     ?EvaluateCurve@XamlPowerInterpolation@@MEAANN@Z @ 0x1800C33E0 (-EvaluateCurve@XamlPowerInterpolation@@MEAANN@Z.c)
 *     ?EvaluateCurve@XamlBackInterpolation@@MEAANN@Z @ 0x1801C0410 (-EvaluateCurve@XamlBackInterpolation@@MEAANN@Z.c)
 *     ?EvaluateCurve@XamlBounceInterpolation@@MEAANN@Z @ 0x1801C0480 (-EvaluateCurve@XamlBounceInterpolation@@MEAANN@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl pow(double X, double Y)
{
  return _o_pow(X, Y);
}
