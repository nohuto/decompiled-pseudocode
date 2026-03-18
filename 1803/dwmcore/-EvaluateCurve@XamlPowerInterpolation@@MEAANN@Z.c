/*
 * XREFs of ?EvaluateCurve@XamlPowerInterpolation@@MEAANN@Z @ 0x1800C33E0
 * Callers:
 *     ?Compute@XamlInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800C3330 (-Compute@XamlInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 * Callees:
 *     <none>
 */

double __fastcall XamlPowerInterpolation::EvaluateCurve(XamlPowerInterpolation *this, double a2)
{
  return pow(a2, *((float *)this + 8));
}
