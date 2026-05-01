/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabShellWindowGrouping@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1801F6380
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabShellWindowGrouping@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801F62A4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabShellWindowGrouping@@@wil.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x180086F18 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180093198 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_TabShellWindowGrouping>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _DWORD *a2,
        _DWORD *a3)
{
  enum FEATURE_ENABLED_STATE FeatureEnabledState; // edx
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // rcx

  FeatureEnabledState = wil::details::WilApi_GetFeatureEnabledState(0xDA0C7FuLL, 3LL, (__int64)a3);
  result = 1LL;
  *a2 = ((FeatureEnabledState & 0x80u) != 0) + 1;
  v8 = ((unsigned int)FeatureEnabledState >> 6) & 1;
  *a3 = v8;
  if ( (FeatureEnabledState & 0xFFFFFF3F) == 2 )
  {
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v8, 0, v6);
    return 3LL;
  }
  return result;
}
