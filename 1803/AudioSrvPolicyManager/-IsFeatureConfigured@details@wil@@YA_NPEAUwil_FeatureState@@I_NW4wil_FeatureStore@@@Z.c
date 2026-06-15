/*
 * XREFs of ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x180006230
 * Callers:
 *     ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x180006300 (-WilApiImpl_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_T.c)
 * Callees:
 *     ?wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x180003A00 (-wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@.c)
 *     ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z @ 0x180004170 (-wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x1800067BC (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 */

bool __fastcall wil::details::IsFeatureConfigured(
        __int64 a1,
        int a2,
        unsigned __int8 a3,
        unsigned int a4,
        volatile signed __int32 *a5)
{
  volatile signed __int32 *v5; // rdi
  bool v6; // bl
  bool v7; // bp
  _BOOL8 v8; // rbx
  signed __int32 v9; // esi
  int v11; // [rsp+30h] [rbp-18h] BYREF
  volatile signed __int32 v12; // [rsp+60h] [rbp+18h] BYREF

  v5 = a5;
  v6 = !g_wil_details_testStates && (*(_BYTE *)a5 & 3) == 0;
  v11 = 1;
  v7 = (unsigned int)wil_QueryFeatureState(a1, a2, a3, a4, (_DWORD *)((unsigned __int64)&v11 & -(__int64)v6)) != 0;
  if ( v6 )
  {
    v8 = v11 != 0;
    do
    {
      v12 = *v5;
      v12 = *v5;
      v9 = v12;
    }
    while ( (unsigned int)wil_details_SetEnabledAndHasNotificationStateCallback(
                            (union wil_details_FeaturePropertyCache *)&v12,
                            (void *)(v8 + 1))
         && v9 != _InterlockedCompareExchange(v5, v12, v9) );
    if ( !v11 )
      wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
        &wil::details::g_enabledStateManager,
        v5,
        0LL);
  }
  return v7;
}
