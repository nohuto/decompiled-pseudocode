/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_EyeTracking@@@wil@@SA_NXZ @ 0x18018BD00
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_EyeTracking@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18018C364 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_EyeTracking@@@wil@@CAX_NW4ReportingK.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_EyeTracking>::IsEnabled()
{
  wil::Feature<__WilFeatureTraits_Feature_EyeTracking>::ReportUsageToService();
  return 1;
}
