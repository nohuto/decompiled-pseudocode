/*
 * XREFs of ?EvaluateCurve@XamlExponentialInterpolation@@MEAANN@Z @ 0x18001C890
 * Callers:
 *     <none>
 * Callees:
 *     exp @ 0x1800DB77E (exp.c)
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
    v5 = exp(v3 * a2) - 1.0;
    return v5 / (exp(v3) - 1.0);
  }
  return a2;
}
