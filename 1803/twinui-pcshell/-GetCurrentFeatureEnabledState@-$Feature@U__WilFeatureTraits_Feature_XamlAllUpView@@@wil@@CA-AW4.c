/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18018BB70
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18018B780 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CA-AW4w.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x180086F18 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18018C5E8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@CAX_NW4Repor.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _DWORD *a2,
        unsigned int *a3)
{
  enum FEATURE_ENABLED_STATE FeatureEnabledState; // eax
  __int64 v6; // rcx

  FeatureEnabledState = wil::details::WilApi_GetFeatureEnabledState(0x78E913uLL, 1LL, (__int64)a3);
  v6 = (unsigned int)((FeatureEnabledState & 0x80u) != 0) + 1;
  *a3 = ((unsigned int)FeatureEnabledState >> 6) & 1;
  *a2 = v6;
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 && (FeatureEnabledState & 0xFFFFFF3F) != 2 )
    return 1LL;
  wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::ReportUsageToService(v6, 0LL);
  return 2LL;
}
