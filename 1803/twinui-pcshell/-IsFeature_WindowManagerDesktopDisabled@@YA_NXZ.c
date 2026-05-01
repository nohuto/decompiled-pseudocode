/*
 * XREFs of ?IsFeature_WindowManagerDesktopDisabled@@YA_NXZ @ 0x18018BDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18018C52C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@CAX_NW4R.c)
 */

char IsFeature_WindowManagerDesktopDisabled(void)
{
  wil::Feature<__WilFeatureTraits_Feature_WindowManagerDesktop>::ReportUsageToService();
  return 1;
}
