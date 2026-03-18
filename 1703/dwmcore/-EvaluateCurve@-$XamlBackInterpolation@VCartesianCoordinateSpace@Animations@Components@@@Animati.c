/*
 * XREFs of ?EvaluateCurve@?$XamlBackInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@MEAANN@Z @ 0x1801B93A0
 * Callers:
 *     <none>
 * Callees:
 *     sin_0 @ 0x1800D53AE (sin_0.c)
 */

__m128 __fastcall Components::Animations::XamlBackInterpolation<Components::Animations::CartesianCoordinateSpace>::EvaluateCurve(
        __int64 a1,
        double a2)
{
  double v2; // xmm0_8
  __int128 v3; // xmm6
  unsigned int v4; // eax
  double v5; // xmm8_8

  v2 = a2;
  v3 = *(unsigned __int64 *)&DOUBLE_1_0;
  v4 = 3;
  while ( 1 )
  {
    if ( (v4 & 1) != 0 )
      *(double *)&v3 = *(double *)&v3 * v2;
    v4 >>= 1;
    if ( !v4 )
      break;
    v2 = v2 * v2;
  }
  v5 = *(float *)(a1 + 24);
  *(double *)&v3 = *(double *)&v3 - sin_0(a2 * 3.141592741012573) * (v5 * a2);
  return (__m128)v3;
}
