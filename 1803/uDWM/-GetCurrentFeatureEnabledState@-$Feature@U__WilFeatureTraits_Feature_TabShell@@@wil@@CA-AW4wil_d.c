/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x180084934
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800845A4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA-AW4wil_de.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x180042878 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _DWORD *a2,
        int *a3)
{
  unsigned int FeatureEnabledState; // eax
  unsigned int v6; // edx
  __int64 result; // rax

  FeatureEnabledState = wil::details::WilApi_GetFeatureEnabledState((wil::details *)0xA3B12D, 3LL, (__int64)a3);
  *a3 = (FeatureEnabledState >> 6) & 1;
  *a2 = ((FeatureEnabledState & 0x80u) != 0) + 1;
  v6 = FeatureEnabledState & 0xFFFFFF3F;
  if ( (FeatureEnabledState & 0xFFFFFF3F) == 0 )
    return 1LL;
  result = 2LL;
  if ( v6 != 2 )
    return 1LL;
  return result;
}
