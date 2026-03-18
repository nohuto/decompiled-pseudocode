/*
 * XREFs of ?Compute@?$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801B8010
 * Callers:
 *     <none>
 * Callees:
 *     ?EvaluateCurve@?$CubicBezierInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@IEAANNNN@Z @ 0x1801B92E0 (-EvaluateCurve@-$CubicBezierInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Anim.c)
 *     ?EvaluateCurveDerivative@?$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@IEAANNNN@Z @ 0x1801B96A0 (-EvaluateCurveDerivative@-$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@.c)
 *     ?IsWithinDelta@Math@Animations@Components@@SA_NNN@Z @ 0x1801B9794 (-IsWithinDelta@Math@Animations@Components@@SA_NNN@Z.c)
 */

__m128d *__fastcall Components::Animations::CubicBezierInterpolation<Components::Animations::HslCoordinateSpace>::Compute(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double *a5,
        __m128d *a6)
{
  float v6; // xmm1_4
  __int64 v7; // r8
  __int128 v8; // xmm7
  __int128 v9; // xmm6
  double v10; // xmm0_8
  __int128 v11; // xmm1
  double v12; // xmm0_8
  int v13; // r8d
  double v14; // xmm0_8
  __int64 v15; // rdx
  double *v16; // r10

  v7 = 0LL;
  v8 = 0LL;
  *(double *)&v8 = v6;
  v9 = v8;
  do
  {
    v10 = Components::Animations::CubicBezierInterpolation<Components::Animations::HslCoordinateSpace>::EvaluateCurveDerivative(
            a1,
            a2,
            v7);
    if ( Components::Animations::Math::IsWithinDelta(v10, 0.000001) )
      break;
    *((_QWORD *)&v11 + 1) = *((_QWORD *)&v9 + 1);
    *(double *)&v11 = *(double *)&v9
                    - (Components::Animations::CubicBezierInterpolation<Components::Animations::SphericalCoordinateSpace>::EvaluateCurve()
                     - *(double *)&v8)
                    / v10;
    v12 = *(double *)&v9 - *(double *)&v11;
    v9 = v11;
    if ( Components::Animations::Math::IsWithinDelta(v12, 0.000001) )
      break;
    v7 = (unsigned int)(v13 + 1);
  }
  while ( (int)v7 < 30 );
  v14 = Components::Animations::CubicBezierInterpolation<Components::Animations::SphericalCoordinateSpace>::EvaluateCurve();
  return Components::Animations::HslCoordinateSpace::Interpolate(v14, v15, v16, a5, a6);
}
