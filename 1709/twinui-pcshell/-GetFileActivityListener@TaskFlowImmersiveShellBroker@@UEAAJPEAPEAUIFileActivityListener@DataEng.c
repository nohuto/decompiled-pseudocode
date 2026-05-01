/*
 * XREFs of ?GetFileActivityListener@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAUIFileActivityListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x1800F7680
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800F7FFC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSu.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::GetFileActivityListener(
        TaskFlowImmersiveShellBroker *this,
        struct Windows::Internal::Shell::TaskFlow::DataEngine::IFileActivityListener **a2)
{
  __int16 v3; // [rsp+44h] [rbp+Ch]
  int v4; // [rsp+48h] [rbp+10h] BYREF
  __int16 v5; // [rsp+4Ch] [rbp+14h]

  HIBYTE(v3) = BYTE5(this);
  *a2 = 0LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetCachedFeatureEnabledState();
  LOBYTE(v3) = 0;
  v4 = 3;
  v5 = v3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data,
    0x867C75u,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    0,
    3);
  return 0LL;
}
