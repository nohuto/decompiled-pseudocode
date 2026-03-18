/*
 * XREFs of ?Compute@?$CubicBezierInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801B8130
 * Callers:
 *     <none>
 * Callees:
 *     ?EvaluateCurve@?$CubicBezierInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@IEAANNNN@Z @ 0x1801B92E0 (-EvaluateCurve@-$CubicBezierInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Anim.c)
 *     ?EvaluateCurveDerivative@?$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@IEAANNNN@Z @ 0x1801B96A0 (-EvaluateCurveDerivative@-$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@.c)
 *     ?IsWithinDelta@Math@Animations@Components@@SA_NNN@Z @ 0x1801B9794 (-IsWithinDelta@Math@Animations@Components@@SA_NNN@Z.c)
 */

__int64 __fastcall Components::Animations::CubicBezierInterpolation<Components::Animations::SphericalCoordinateSpace>::Compute(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  float v6; // xmm1_4
  unsigned int v7; // ebx
  __int128 v8; // xmm7
  __int128 v9; // xmm6
  double v10; // xmm0_8
  __int128 v11; // xmm1
  double v12; // xmm0_8
  int v13; // r10d
  __int64 v14; // rcx
  __int64 v15; // r11

  v7 = a3;
  v8 = 0LL;
  *(double *)&v8 = v6;
  v9 = v8;
  do
  {
    v10 = Components::Animations::CubicBezierInterpolation<Components::Animations::HslCoordinateSpace>::EvaluateCurveDerivative(
            a1,
            a2,
            a3);
    if ( Components::Animations::Math::IsWithinDelta(v10, 0.000001) )
      break;
    *((_QWORD *)&v11 + 1) = *((_QWORD *)&v9 + 1);
    *(double *)&v11 = *(double *)&v9
                    - (((double (*)(void))Components::Animations::CubicBezierInterpolation<Components::Animations::SphericalCoordinateSpace>::EvaluateCurve)()
                     - *(double *)&v8)
                    / v10;
    v12 = *(double *)&v9 - *(double *)&v11;
    v9 = v11;
    if ( Components::Animations::Math::IsWithinDelta(v12, 0.000001) )
      break;
  }
  while ( v13 + 1 < 30 );
  Components::Animations::CubicBezierInterpolation<Components::Animations::SphericalCoordinateSpace>::EvaluateCurve();
  return Components::Animations::SphericalCoordinateSpace::Interpolate(v14, v7, v15, a5, a6);
}
