/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_XAMLKeyboardDesktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18023DF78
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_XAMLKeyboardDesktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18023DC00 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_XAMLKeyboardDesktop@@@wil@@C.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x180086F18 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TouchKeyboardExperienceManager@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18018C4D0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TouchKeyboardExperienceManager@@@wil.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_XAMLKeyboardDesktop>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _DWORD *a2,
        _DWORD *a3)
{
  enum FEATURE_ENABLED_STATE FeatureEnabledState; // eax
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned int v8; // eax
  bool v9; // al

  FeatureEnabledState = wil::details::WilApi_GetFeatureEnabledState(0xA4DD16uLL, 0LL, (__int64)a3);
  v7 = ((unsigned int)FeatureEnabledState >> 6) & 1;
  *a3 = v7;
  *a2 = ((FeatureEnabledState & 0x80u) != 0) + 1;
  v8 = FeatureEnabledState & 0xFFFFFF3F;
  if ( v8 )
    v9 = v8 == 2;
  else
    v9 = 1;
  if ( !v9 )
    return 1LL;
  wil::Feature<__WilFeatureTraits_Feature_TouchKeyboardExperienceManager>::ReportUsageToService(v7, 0, v6);
  return 2LL;
}
