/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801A651C
 * Callers:
 *     ?GetFileActivityListener@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAUIFileActivityListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x1801A4EA0 (-GetFileActivityListener@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAUIFileActivityListener@DataEng.c)
 *     ?IsActivityFeedEnabled@TaskFlowImmersiveShellBroker@@AEAA_NXZ @ 0x1801A57AC (-IsActivityFeedEnabled@TaskFlowImmersiveShellBroker@@AEAA_NXZ.c)
 *     ?IsActivityTrackingEnabled@TaskFlowImmersiveShellBroker@@AEAA_NXZ @ 0x1801A5868 (-IsActivityTrackingEnabled@TaskFlowImmersiveShellBroker@@AEAA_NXZ.c)
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A5F64 (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@TaskFlowImmersiveShellBroker@@QEAAJXZ @ 0x1801A6634 (-RuntimeClassInitialize@TaskFlowImmersiveShellBroker@@QEAAJXZ.c)
 *     ?SetLocalOnly@TaskFlowImmersiveShellBroker@@UEAAJE@Z @ 0x1801A6AA0 (-SetLocalOnly@TaskFlowImmersiveShellBroker@@UEAAJE@Z.c)
 *     ?StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A6D14 (-StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartFileListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A70F8 (-StartFileListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801A7350 (-SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DocumentsCollection@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1801A8A2C (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DocumentsCollection@@@wil@@.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180060A94 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801A4B80 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSu.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::ReportUsageToService(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3)
{
  __int64 v4; // [rsp+20h] [rbp-18h]
  __int16 v5; // [rsp+54h] [rbp+1Ch]
  int v6; // [rsp+58h] [rbp+20h] BYREF
  __int16 v7; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v5) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetCachedFeatureEnabledState(a1);
  v6 = 4;
  LOBYTE(v5) = 3;
  v7 = v5;
  LODWORD(v4) = a2;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data,
    0x867C75u,
    (const struct FEATURE_LOGGED_TRAITS *)&v6,
    (struct wil_details_RecordUsageResult *)1,
    v4);
}
