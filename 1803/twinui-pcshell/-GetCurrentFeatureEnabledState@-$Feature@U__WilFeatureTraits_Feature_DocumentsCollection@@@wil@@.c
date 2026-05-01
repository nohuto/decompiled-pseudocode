/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DocumentsCollection@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1801A8A2C
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DocumentsCollection@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801A8954 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DocumentsCollection@@@wil@@C.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x180086F18 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801A651C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_DocumentsCollection>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _DWORD *a2,
        unsigned int *a3)
{
  enum FEATURE_ENABLED_STATE FeatureEnabledState; // eax
  __int64 v6; // r8
  __int64 v7; // rcx

  FeatureEnabledState = wil::details::WilApi_GetFeatureEnabledState(0xD48BA0uLL, 0LL, (__int64)a3);
  v7 = (unsigned int)((FeatureEnabledState & 0x80u) != 0) + 1;
  *a3 = ((unsigned int)FeatureEnabledState >> 6) & 1;
  *a2 = v7;
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 2 )
    return 1LL;
  wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::ReportUsageToService(v7, 0, v6);
  return 2LL;
}
