/*
 * XREFs of ?EvaluateCurve@XamlBackInterpolation@@MEAANN@Z @ 0x18018AC60
 * Callers:
 *     <none>
 * Callees:
 *     sin_0 @ 0x1800C5D98 (sin_0.c)
 */

double __fastcall XamlBackInterpolation::EvaluateCurve(XamlBackInterpolation *this, double a2)
{
  double v2; // xmm0_8
  double v3; // xmm6_8
  unsigned int v4; // eax
  double v5; // xmm8_8

  v2 = a2;
  v3 = DOUBLE_1_0;
  v4 = 3;
  while ( 1 )
  {
    if ( (v4 & 1) != 0 )
      v3 = v3 * v2;
    v4 >>= 1;
    if ( !v4 )
      break;
    v2 = v2 * v2;
  }
  v5 = *((float *)this + 8);
  return v3 - sin_0(a2 * 3.141592741012573) * (v5 * a2);
}
