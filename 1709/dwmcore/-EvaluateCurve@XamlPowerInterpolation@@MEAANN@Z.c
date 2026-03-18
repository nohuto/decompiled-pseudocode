/*
 * XREFs of ?EvaluateCurve@XamlPowerInterpolation@@MEAANN@Z @ 0x1800B9720
 * Callers:
 *     ?Compute@XamlInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800B9680 (-Compute@XamlInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 * Callees:
 *     <none>
 */

double __fastcall XamlPowerInterpolation::EvaluateCurve(XamlPowerInterpolation *this, double a2)
{
  return pow_0(a2, *((float *)this + 8));
}
