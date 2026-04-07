/*
 * XREFs of ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x18004291C
 * Callers:
 *     ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x1800428B0 (-WilApiImpl_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_T.c)
 *     ?WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH@Z @ 0x18006EBD0 (-WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH@Z.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1800354C0 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 *     ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z @ 0x180042544 (-wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x180042A58 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 */

bool __fastcall wil::details::IsFeatureConfigured(__int64 a1, unsigned int a2, unsigned __int8 a3, unsigned int a4)
{
  union wil_details_FeaturePropertyCache *v4; // rdi
  int v5; // eax
  bool v6; // bl
  bool v7; // si
  int v8; // ebx
  int v10; // [rsp+58h] [rbp+20h] BYREF

  v4 = (union wil_details_FeaturePropertyCache *)&`wil::details::IsFeatureConfigured'::`2'::machineStoreProbe;
  if ( a4 )
    v4 = (union wil_details_FeaturePropertyCache *)&`wil::details::IsFeatureConfigured'::`2'::userStoreProbe;
  v5 = *(_DWORD *)v4 & 3;
  if ( v5 == 1 )
    return 0;
  v6 = !g_wil_details_testStates && !v5;
  v10 = 1;
  v7 = (unsigned int)wil_QueryFeatureState(a1, a2, a3, a4, (_DWORD *)((unsigned __int64)&v10 & -(__int64)v6)) != 0;
  if ( v6 )
  {
    v8 = v10;
    wil_details_ModifyFeatureData(
      v4,
      (unsigned int (__fastcall *)(signed __int32 *, void *))wil_details_SetEnabledAndHasNotificationStateCallback,
      (void *)((v10 != 0) + 1LL));
    if ( !v8 )
      wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
        &wil::details::g_enabledStateManager,
        v4,
        0LL);
  }
  return v7;
}
