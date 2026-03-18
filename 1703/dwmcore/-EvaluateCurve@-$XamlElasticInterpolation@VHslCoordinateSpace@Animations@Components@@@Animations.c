/*
 * XREFs of ?EvaluateCurve@?$XamlElasticInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@MEAANN@Z @ 0x1801B95B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWithinEpsilon@Math@Animations@Components@@SA_NN@Z @ 0x18001FDF8 (-IsWithinEpsilon@Math@Animations@Components@@SA_NN@Z.c)
 *     exp_0 @ 0x1800D5360 (exp_0.c)
 *     sin_0 @ 0x1800D53AE (sin_0.c)
 */

double __fastcall Components::Animations::XamlElasticInterpolation<Components::Animations::HslCoordinateSpace>::EvaluateCurve(
        __int64 a1,
        double a2)
{
  double v2; // xmm10_8
  double v3; // xmm7_8
  double v4; // xmm8_8
  double v5; // xmm8_8

  v2 = *(float *)(a1 + 28);
  v3 = (double)*(int *)(a1 + 24);
  if ( Components::Animations::Math::IsWithinEpsilon(v2) )
  {
    v4 = a2;
  }
  else
  {
    v5 = exp_0(v2 * a2) - 1.0;
    v4 = v5 / (exp_0(v2) - 1.0);
  }
  return sin_0((v3 * 6.283185482025146 + 1.570796370506287) * a2) * v4;
}
