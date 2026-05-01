/*
 * XREFs of ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineCortanaConvergence@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800D5350
 * Callers:
 *     _lambda_9519b51f5876991f6a0f1ef563cf8f11_::operator() @ 0x1800D3B60 (_lambda_9519b51f5876991f6a0f1ef563cf8f11_--operator().c)
 * Callees:
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x18001D5BC (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 *     ?wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCache@@W4wil_details_CachedFeatureEnabledState@@W4wil_details_CachedHasNotificationState@@@Z @ 0x18001D818 (-wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCach.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18001D958 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineMaster@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800D4E0C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineMaster@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineCortanaConvergence>::GetCachedFeatureEnabledState()
{
  int v0; // esi
  unsigned int v1; // ebx
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  unsigned int v5; // ecx
  int v6; // r9d
  __int16 v8; // [rsp+24h] [rbp-Ch]
  int v9; // [rsp+68h] [rbp+38h] BYREF
  int v10; // [rsp+70h] [rbp+40h]
  __int16 v11; // [rsp+74h] [rbp+44h]

  v0 = `wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineCortanaConvergence>::GetFeaturePropertyCache'::`2'::data & 3;
  v1 = v0;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineCortanaConvergence>::GetFeaturePropertyCache'::`2'::data & 3) != 0
    && (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineCortanaConvergence>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
  {
    return v1;
  }
  if ( g_wil_details_internalGetFeatureEnabledState )
  {
    v2 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_internalGetFeatureEnabledState)(8984211LL, 0LL);
LABEL_5:
    v3 = v2;
    goto LABEL_11;
  }
  if ( g_wil_details_apiGetFeatureEnabledState )
  {
    if ( !(unsigned int)wil_HasFeatureTestState(8984211, (enum wil_FeatureEnabledState *)&v9) )
    {
      v2 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_apiGetFeatureEnabledState)(8984211LL, 0LL);
      goto LABEL_5;
    }
    v3 = v9;
  }
  else
  {
    v3 = 0;
  }
LABEL_11:
  v4 = ((v3 & 0x80u) != 0) + 1;
  v5 = v3 & 0xFFFFFF7F;
  if ( v5 && (v1 = 2, v5 == 2) )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineMaster>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineMaster>::GetCachedFeatureEnabledState();
    LOBYTE(v8) = 3;
    v10 = 0;
    v11 = v8;
  }
  else
  {
    v1 = 1;
  }
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    &wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineCortanaConvergence>::GetFeaturePropertyCache'::`2'::data,
    0);
  if ( !g_wil_details_testStates || !(unsigned int)wil_HasFeatureTestState(8984211, 0LL) )
  {
    if ( v0 )
    {
      do
        v6 = `wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineCortanaConvergence>::GetFeaturePropertyCache'::`2'::data;
      while ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineCortanaConvergence>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) != (unsigned __int8)v4
           && v6 != _InterlockedCompareExchange(
                      &`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineCortanaConvergence>::GetFeaturePropertyCache'::`2'::data,
                      ((unsigned __int8)`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineCortanaConvergence>::GetFeaturePropertyCache'::`2'::data ^ (unsigned __int8)(16 * v4)) & 0x30 ^ `wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineCortanaConvergence>::GetFeaturePropertyCache'::`2'::data,
                      `wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineCortanaConvergence>::GetFeaturePropertyCache'::`2'::data) );
    }
    else
    {
      wil_details_SetEnabledAndHasNotificationStateProperties(
        &`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineCortanaConvergence>::GetFeaturePropertyCache'::`2'::data,
        v1,
        v4);
    }
  }
  return v1;
}
