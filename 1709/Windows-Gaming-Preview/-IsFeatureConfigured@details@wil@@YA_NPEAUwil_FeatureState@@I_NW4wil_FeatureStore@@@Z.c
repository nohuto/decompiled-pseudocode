/*
 * XREFs of ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x180006630
 * Callers:
 *     ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x1800066E0 (-WilApiImpl_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_T.c)
 * Callees:
 *     ?wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCache@@W4wil_details_CachedFeatureEnabledState@@W4wil_details_CachedHasNotificationState@@@Z @ 0x180003C30 (-wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCach.c)
 *     ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z @ 0x180004390 (-wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x180006BEC (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 */

bool __fastcall wil::details::IsFeatureConfigured(
        __int64 a1,
        int a2,
        unsigned __int8 a3,
        unsigned int a4,
        volatile signed __int32 *a5)
{
  volatile signed __int32 *v5; // rbx
  bool v6; // di
  bool v7; // si
  int v9; // [rsp+50h] [rbp+18h] BYREF

  v5 = a5;
  v6 = !g_wil_details_testStates && (*(_BYTE *)a5 & 3) == 0;
  v9 = 1;
  v7 = (unsigned int)wil_QueryFeatureState(a1, a2, a3, a4, (_DWORD *)((unsigned __int64)&v9 & -(__int64)v6)) != 0;
  if ( v6 )
  {
    wil_details_SetEnabledAndHasNotificationStateProperties(v5, (v9 != 0) + 1, 0);
    if ( !v9 )
      wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
        &wil::details::g_enabledStateManager,
        v5,
        0LL);
  }
  return v7;
}
