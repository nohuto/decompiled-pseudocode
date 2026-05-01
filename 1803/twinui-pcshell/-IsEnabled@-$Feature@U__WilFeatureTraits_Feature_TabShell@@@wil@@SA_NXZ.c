/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@SA_NXZ @ 0x180108800
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180093198 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_TabShell>::IsEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(a1, 3u, a3);
  return 0;
}
