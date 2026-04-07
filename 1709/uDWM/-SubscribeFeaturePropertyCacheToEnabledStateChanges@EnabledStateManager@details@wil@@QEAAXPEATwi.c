/*
 * XREFs of ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18003FDDC
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18003F6B0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA-AW4.c)
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x18003FBBC (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 * Callees:
 *     ?EnsureSubscribedToStateChangesUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18003FD70 (-EnsureSubscribedToStateChangesUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180044C5C (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x1800682D8 (-OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
        RTL_SRWLOCK *a1,
        __int64 a2,
        int a3)
{
  RTL_SRWLOCK *v6; // rdi
  unsigned __int64 v7; // r8
  int v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  if ( LOBYTE(a1->Ptr) )
  {
    if ( a2 )
    {
      v6 = a1 + 1;
      AcquireSRWLockExclusive(a1 + 1);
      v8 = a3;
      v9 = a2;
      wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)&a1[10], &v8, v7);
      wil::details::EnabledStateManager::EnsureSubscribedToStateChangesUnderLock((wil::details::EnabledStateManager *)a1);
      if ( v6 )
        ReleaseSRWLockExclusive(v6);
    }
    else
    {
      wil::details::EnabledStateManager::OnStateChange((wil::details::EnabledStateManager *)a1);
    }
  }
}
