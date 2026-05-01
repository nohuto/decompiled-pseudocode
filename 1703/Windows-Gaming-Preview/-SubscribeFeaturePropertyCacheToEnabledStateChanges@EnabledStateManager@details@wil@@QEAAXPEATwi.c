/*
 * XREFs of ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x180022C48
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x180022564 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DisableTDLCachingNonMobile@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180027228 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DisableTDLCachingNonMobile@@.c)
 * Callees:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180020D68 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x180022D70 (-OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     memcpy_s_0 @ 0x180029C5E (memcpy_s_0.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
        RTL_SRWLOCK *a1,
        __int64 a2,
        int a3)
{
  RTL_SRWLOCK *v6; // rbp
  _BYTE *Ptr; // rcx
  _BYTE *v8; // rdx
  rsize_t v9; // rdx
  void (*v10)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax
  int Source; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  if ( LOBYTE(a1->Ptr) )
  {
    if ( a2 )
    {
      v6 = a1 + 1;
      AcquireSRWLockExclusive(a1 + 1);
      Source = a3;
      v12 = a2;
      if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)&a1[9], 0x10uLL) )
      {
        Ptr = a1[10].Ptr;
        v8 = a1[11].Ptr;
        if ( Ptr < v8 )
          v9 = v8 - Ptr;
        else
          v9 = 0LL;
        memcpy_s_0(Ptr, v9, &Source, 0x10uLL);
        a1[10].Ptr = (char *)a1[10].Ptr + 16;
      }
      if ( !a1[4].Ptr )
      {
        a1[4].Ptr = 0LL;
        v10 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
        if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
          || (v10 = g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
        {
          ((void (__fastcall *)(RTL_SRWLOCK *, __int64 (__fastcall *)(), RTL_SRWLOCK *))v10)(
            &a1[4],
            lambda_42ed7cb8e6cd03c5242b9a63c40e80d6_::_lambda_invoker_cdecl_,
            a1);
        }
      }
      if ( v6 )
        ReleaseSRWLockExclusive(v6);
    }
    else
    {
      wil::details::EnabledStateManager::OnStateChange((wil::details::EnabledStateManager *)a1);
    }
  }
}
