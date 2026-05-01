/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@SA_NXZ @ 0x18018BDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18018C5E8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@CAX_NW4Repor.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::IsEnabled(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 3;
  wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::ReportUsageToService(a1, a2);
  return 1;
}
