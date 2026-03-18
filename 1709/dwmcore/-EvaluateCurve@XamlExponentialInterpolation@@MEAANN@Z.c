/*
 * XREFs of ?EvaluateCurve@XamlExponentialInterpolation@@MEAANN@Z @ 0x1800B9730
 * Callers:
 *     <none>
 * Callees:
 *     exp_0 @ 0x1800C5D50 (exp_0.c)
 */

double __fastcall XamlExponentialInterpolation::EvaluateCurve(XamlExponentialInterpolation *this, double a2)
{
  double v3; // xmm8_8
  float v4; // xmm1_4
  double v5; // xmm7_8

  v3 = *((float *)this + 8);
  v4 = COERCE_DOUBLE(*(_QWORD *)&v3 & _xmm);
  if ( v4 >= 0.0000011920929 )
  {
    v5 = exp_0(v3 * a2) - 1.0;
    return v5 / (exp_0(v3) - 1.0);
  }
  return a2;
}
