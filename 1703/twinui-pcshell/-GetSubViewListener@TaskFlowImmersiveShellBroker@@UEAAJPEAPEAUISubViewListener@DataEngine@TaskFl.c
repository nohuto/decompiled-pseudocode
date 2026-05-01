/*
 * XREFs of ?GetSubViewListener@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAUISubViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x1800D4140
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800D4CAC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSu.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::GetSubViewListener(
        TaskFlowImmersiveShellBroker *this,
        struct Windows::Internal::Shell::TaskFlow::DataEngine::ISubViewListener **a2)
{
  __int16 v3; // [rsp+34h] [rbp-14h]
  TaskFlowImmersiveShellBroker *v4; // [rsp+50h] [rbp+8h] BYREF

  v4 = this;
  *a2 = 0LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetCachedFeatureEnabledState();
  LOBYTE(v3) = 0;
  WORD2(v4) = v3;
  LODWORD(v4) = 0;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data,
    0x867C75u,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    0,
    3);
  return 0LL;
}
