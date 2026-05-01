/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1800860AC
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180085FF4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicHShellTaskmanOver.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180086118 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@wil@@CA.c)
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x180086F18 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _DWORD *a2,
        _DWORD *a3)
{
  enum FEATURE_ENABLED_STATE FeatureEnabledState; // eax
  __int64 v6; // rcx
  unsigned int v7; // eax
  bool v8; // al

  FeatureEnabledState = wil::details::WilApi_GetFeatureEnabledState(
                          (wil::details *)0x8E30F6,
                          0,
                          (enum FEATURE_CHANGE_TIME)a3);
  v6 = ((unsigned int)FeatureEnabledState >> 6) & 1;
  *a3 = v6;
  *a2 = ((FeatureEnabledState & 0x80u) != 0) + 1;
  v7 = FeatureEnabledState & 0xFFFFFF3F;
  if ( v7 )
    v8 = v7 == 2;
  else
    v8 = 1;
  if ( !v8 )
    return 1LL;
  wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::ReportUsageToService(v6, 0LL);
  return 2LL;
}
