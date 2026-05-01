/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_TouchKeyboardExperienceManager@@@wil@@SA_NXZ @ 0x18018BD60
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TouchKeyboardExperienceManager@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18018C4D0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TouchKeyboardExperienceManager@@@wil.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_TouchKeyboardExperienceManager>::IsEnabled(
        __int64 a1,
        __int64 a2)
{
  LOBYTE(a2) = 3;
  wil::Feature<__WilFeatureTraits_Feature_TouchKeyboardExperienceManager>::ReportUsageToService(a1, a2);
  return 1;
}
