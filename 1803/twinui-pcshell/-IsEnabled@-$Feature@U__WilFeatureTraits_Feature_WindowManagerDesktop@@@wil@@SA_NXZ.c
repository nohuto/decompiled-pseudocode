/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@SA_NXZ @ 0x18018BD80
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18018C52C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@CAX_NW4R.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_WindowManagerDesktop>::IsEnabled()
{
  wil::Feature<__WilFeatureTraits_Feature_WindowManagerDesktop>::ReportUsageToService();
  return 0;
}
