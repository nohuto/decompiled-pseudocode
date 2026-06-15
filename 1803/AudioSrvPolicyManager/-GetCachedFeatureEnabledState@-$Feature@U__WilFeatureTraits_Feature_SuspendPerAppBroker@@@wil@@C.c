/*
 * XREFs of ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SuspendPerAppBroker@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18001FA44
 * Callers:
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x18002000C (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 * Callees:
 *     ?wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x180003A00 (-wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x1800067BC (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SuspendPerAppBroker@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18001F954 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SuspendPerAppBroker@@@wil@@.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_SuspendPerAppBroker>::GetCachedFeatureEnabledState(
        __int64 a1)
{
  int v1; // ebx
  unsigned int v2; // esi
  unsigned int CurrentFeatureEnabledState; // eax
  unsigned int v4; // edi
  int v5; // r14d
  struct wil_details_FeatureTestState *i; // rax
  void *v7; // rbx
  signed __int32 v8; // edi
  int v9; // r9d
  signed __int32 v11; // [rsp+58h] [rbp+38h] BYREF
  int v12; // [rsp+60h] [rbp+40h] BYREF
  unsigned int v13; // [rsp+68h] [rbp+48h] BYREF

  v1 = `wil::Feature<__WilFeatureTraits_Feature_SuspendPerAppBroker>::GetFeaturePropertyCache'::`2'::data & 3;
  v2 = v1;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_SuspendPerAppBroker>::GetFeaturePropertyCache'::`2'::data & 3) == 0
    || (`wil::Feature<__WilFeatureTraits_Feature_SuspendPerAppBroker>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
  {
    v12 = 0;
    CurrentFeatureEnabledState = wil::Feature<__WilFeatureTraits_Feature_SuspendPerAppBroker>::GetCurrentFeatureEnabledState(
                                   a1,
                                   &v12,
                                   (int *)&v13);
    v4 = ((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_SuspendPerAppBroker>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
    if ( !v1 )
    {
      v4 = v13;
      v2 = CurrentFeatureEnabledState;
    }
    wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_SuspendPerAppBroker>::GetFeaturePropertyCache'::`2'::data,
      3);
    if ( !g_wil_details_testStates )
      goto LABEL_13;
    v5 = 0;
    AcquireSRWLockShared(&g_wil_details_testFeatureStateLock);
    for ( i = g_wil_details_testStates; i; i = (struct wil_details_FeatureTestState *)*((_QWORD *)i + 3) )
    {
      if ( *((_DWORD *)i + 1) == 10164710 && !*(_DWORD *)i )
      {
        v5 = 1;
        break;
      }
    }
    ReleaseSRWLockShared(&g_wil_details_testFeatureStateLock);
    if ( !v5 )
    {
LABEL_13:
      if ( v1 )
      {
        do
          v9 = `wil::Feature<__WilFeatureTraits_Feature_SuspendPerAppBroker>::GetFeaturePropertyCache'::`2'::data;
        while ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_SuspendPerAppBroker>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) != (unsigned __int8)v12
             && v9 != _InterlockedCompareExchange(
                        &`wil::Feature<__WilFeatureTraits_Feature_SuspendPerAppBroker>::GetFeaturePropertyCache'::`2'::data,
                        ((unsigned __int8)`wil::Feature<__WilFeatureTraits_Feature_SuspendPerAppBroker>::GetFeaturePropertyCache'::`2'::data ^ (unsigned __int8)(16 * v12)) & 0x30 ^ `wil::Feature<__WilFeatureTraits_Feature_SuspendPerAppBroker>::GetFeaturePropertyCache'::`2'::data,
                        `wil::Feature<__WilFeatureTraits_Feature_SuspendPerAppBroker>::GetFeaturePropertyCache'::`2'::data) );
      }
      else
      {
        v7 = (void *)(v2 | (v4 << 16) | (unsigned __int64)(unsigned int)(v12 << 8));
        do
        {
          v11 = `wil::Feature<__WilFeatureTraits_Feature_SuspendPerAppBroker>::GetFeaturePropertyCache'::`2'::data;
          v8 = `wil::Feature<__WilFeatureTraits_Feature_SuspendPerAppBroker>::GetFeaturePropertyCache'::`2'::data;
        }
        while ( (unsigned int)wil_details_SetEnabledAndHasNotificationStateCallback(
                                (union wil_details_FeaturePropertyCache *)&v11,
                                v7)
             && v8 != _InterlockedCompareExchange(
                        &`wil::Feature<__WilFeatureTraits_Feature_SuspendPerAppBroker>::GetFeaturePropertyCache'::`2'::data,
                        v11,
                        v8) );
      }
    }
  }
  return v2;
}
