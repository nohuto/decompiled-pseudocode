/*
 * XREFs of ?SetLocalOnly@TaskFlowImmersiveShellBroker@@UEAAJE@Z @ 0x1800F77C0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800F7FFC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSu.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::SetLocalOnly(TaskFlowImmersiveShellBroker *this)
{
  __int16 v2; // [rsp+44h] [rbp+Ch]
  int v3; // [rsp+50h] [rbp+18h] BYREF
  __int16 v4; // [rsp+54h] [rbp+1Ch]

  HIBYTE(v2) = BYTE5(this);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetCachedFeatureEnabledState();
  LOBYTE(v2) = 0;
  v3 = 3;
  v4 = v2;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data,
    0x867C75u,
    (const struct FEATURE_LOGGED_TRAITS *)&v3,
    0,
    3);
  return 0LL;
}
