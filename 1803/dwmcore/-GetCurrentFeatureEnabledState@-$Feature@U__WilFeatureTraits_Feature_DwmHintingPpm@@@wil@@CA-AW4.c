/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1800BB1CC
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800BA370 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CA-AW4w.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x1800BB294 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _DWORD *a2,
        unsigned int *a3)
{
  enum FEATURE_ENABLED_STATE FeatureEnabledState; // eax
  unsigned int v6; // eax
  bool v7; // al

  FeatureEnabledState = wil::details::WilApi_GetFeatureEnabledState(
                          (wil::details *)0xC36614,
                          (unsigned int)a2,
                          (enum FEATURE_CHANGE_TIME)a3);
  *a3 = ((unsigned int)FeatureEnabledState >> 6) & 1;
  *a2 = ((FeatureEnabledState & 0x80u) != 0) + 1;
  v6 = FeatureEnabledState & 0xFFFFFF3F;
  if ( v6 )
    v7 = v6 == 2;
  else
    v7 = 1;
  return (unsigned int)v7 + 1;
}
