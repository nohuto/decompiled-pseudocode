/*
 * XREFs of ?EvaluateCurve@?$XamlExponentialInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@MEAANN@Z @ 0x18001FD90
 * Callers:
 *     ?Compute@?$XamlInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180028B50 (-Compute@-$XamlInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Compon.c)
 * Callees:
 *     ?IsWithinEpsilon@Math@Animations@Components@@SA_NN@Z @ 0x18001FDF8 (-IsWithinEpsilon@Math@Animations@Components@@SA_NN@Z.c)
 *     exp_0 @ 0x1800D5360 (exp_0.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall Components::Animations::XamlExponentialInterpolation<Components::Animations::SphericalCoordinateSpace>::EvaluateCurve(
        __int64 a1,
        double a2)
{
  __int128 v2; // xmm7
  __m128d v3; // xmm8

  v2 = *(_OWORD *)&a2;
  v3 = _mm_cvtps_pd((__m128)*(unsigned int *)(a1 + 24));
  if ( !Components::Animations::Math::IsWithinEpsilon(v3.m128d_f64[0]) )
  {
    *((_QWORD *)&v2 + 1) = *(_QWORD *)&v3.m128d_f64[1];
    *(double *)&v2 = exp_0(v3.m128d_f64[0] * a2) - 1.0;
    *(double *)&v2 = *(double *)&v2 / (exp_0(v3.m128d_f64[0]) - 1.0);
  }
  return (__m128)v2;
}
