/*
 * XREFs of ?IsWithinEpsilon@Math@Animations@Components@@SA_NN@Z @ 0x18001FDF8
 * Callers:
 *     ?EvaluateCurve@?$XamlExponentialInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@MEAANN@Z @ 0x18001FD90 (-EvaluateCurve@-$XamlExponentialInterpolation@VSphericalCoordinateSpace@Animations@Components@@@.c)
 *     ?EvaluateCurve@?$XamlElasticInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@MEAANN@Z @ 0x1801B95B0 (-EvaluateCurve@-$XamlElasticInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall Components::Animations::Math::IsWithinEpsilon(double a1)
{
  return a1 >= -0.000009999999747378752 && a1 <= 0.000009999999747378752;
}
