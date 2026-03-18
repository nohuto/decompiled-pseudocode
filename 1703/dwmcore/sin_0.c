/*
 * XREFs of sin_0 @ 0x1800D53AE
 * Callers:
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x1801B006C (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 *     ?EvaluateCurve@?$XamlBackInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@MEAANN@Z @ 0x1801B93A0 (-EvaluateCurve@-$XamlBackInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animati.c)
 *     ?EvaluateCurve@?$XamlElasticInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@MEAANN@Z @ 0x1801B95B0 (-EvaluateCurve@-$XamlElasticInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations.c)
 *     ?EvaluateCurve@?$XamlSineInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@MEAANN@Z @ 0x1801B9660 (-EvaluateCurve@-$XamlSineInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animati.c)
 *     ?Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801B9C80 (-Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVVal.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl sin_0(double X)
{
  return sin(X);
}
