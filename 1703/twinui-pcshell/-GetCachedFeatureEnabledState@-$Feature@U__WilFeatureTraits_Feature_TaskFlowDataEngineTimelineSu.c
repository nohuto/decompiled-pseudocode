/*
 * XREFs of ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800D4CAC
 * Callers:
 *     _lambda_3b055fef70a16d7474f5e228489e7e4c_::operator() @ 0x1800D3900 (_lambda_3b055fef70a16d7474f5e228489e7e4c_--operator().c)
 *     _lambda_9519b51f5876991f6a0f1ef563cf8f11_::operator() @ 0x1800D3B60 (_lambda_9519b51f5876991f6a0f1ef563cf8f11_--operator().c)
 *     ?GetSubViewListener@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAUISubViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x1800D4140 (-GetSubViewListener@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAUISubViewListener@DataEngine@TaskFl.c)
 * Callees:
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x18001D5BC (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 *     ?wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCache@@W4wil_details_CachedFeatureEnabledState@@W4wil_details_CachedHasNotificationState@@@Z @ 0x18001D818 (-wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCach.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18001D958 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineMaster@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800D4E0C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineMaster@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetCachedFeatureEnabledState(
        __int64 a1,
        __int64 a2)
{
  int v2; // esi
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  __int64 v7; // rcx
  int v8; // r9d
  __int16 v10; // [rsp+24h] [rbp-Ch]
  int v11; // [rsp+68h] [rbp+38h] BYREF
  int v12; // [rsp+70h] [rbp+40h]
  __int16 v13; // [rsp+74h] [rbp+44h]

  v2 = `wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data & 3;
  v3 = v2;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data & 3) != 0
    && (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
  {
    return v3;
  }
  if ( g_wil_details_internalGetFeatureEnabledState )
  {
    v4 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_internalGetFeatureEnabledState)(8813685LL, 0LL);
LABEL_5:
    v5 = v4;
    goto LABEL_11;
  }
  if ( g_wil_details_apiGetFeatureEnabledState )
  {
    if ( !(unsigned int)wil_HasFeatureTestState(8813685, (enum wil_FeatureEnabledState *)&v11) )
    {
      v4 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_apiGetFeatureEnabledState)(8813685LL, 0LL);
      goto LABEL_5;
    }
    v5 = v11;
  }
  else
  {
    v5 = 0;
  }
LABEL_11:
  v6 = ((v5 & 0x80u) != 0) + 1;
  v7 = v5 & 0xFFFFFF7F;
  if ( (_DWORD)v7 && (v3 = 2, (_DWORD)v7 == 2) )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineMaster>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineMaster>::GetCachedFeatureEnabledState(v7, a2);
    LOBYTE(v10) = 3;
    v12 = 0;
    v13 = v10;
  }
  else
  {
    v3 = 1;
  }
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    &wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data,
    0);
  if ( !g_wil_details_testStates || !(unsigned int)wil_HasFeatureTestState(8813685, 0LL) )
  {
    if ( v2 )
    {
      do
        v8 = `wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data;
      while ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) != (unsigned __int8)v6
           && v8 != _InterlockedCompareExchange(
                      &`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data,
                      ((unsigned __int8)`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data ^ (unsigned __int8)(16 * v6)) & 0x30 ^ `wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data,
                      `wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data) );
    }
    else
    {
      wil_details_SetEnabledAndHasNotificationStateProperties(
        &`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data,
        v3,
        v6);
    }
  }
  return v3;
}
