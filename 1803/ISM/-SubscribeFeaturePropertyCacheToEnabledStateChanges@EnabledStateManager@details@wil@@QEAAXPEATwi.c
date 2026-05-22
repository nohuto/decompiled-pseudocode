/*
 * XREFs of ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x180012CC8
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x1800125C0 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ContextualInputProcessing@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180016448 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ContextualInputProcessing@@@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18002F810 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamep.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Input_HeatMultiDevice@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180039850 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Input_HeatMultiDevice@@@wil@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Input_HeatSystemContext@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18003A288 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Input_HeatSystemContext@@@wi.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SixDoF@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180041298 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SixDoF@@@wil@@CA-AW4wil_deta.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180099DA0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@w.c)
 * Callees:
 *     memcpy_s_0 @ 0x18000F238 (memcpy_s_0.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18001074C (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x180012DA8 (-OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
        RTL_SRWLOCK *a1,
        __int64 a2,
        int a3)
{
  RTL_SRWLOCK *v6; // rdi
  RTL_SRWLOCK *v7; // rcx
  void (*v8)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax
  int Source; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  if ( LOBYTE(a1->Ptr) )
  {
    if ( a2 )
    {
      v6 = a1 + 1;
      AcquireSRWLockExclusive(a1 + 1);
      Source = a3;
      v10 = a2;
      if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)&a1[10], 0x10uLL) )
      {
        memcpy_s_0(
          a1[11].Ptr,
          ((char *)a1[12].Ptr - (char *)a1[11].Ptr) & -(__int64)(a1[11].Ptr < a1[12].Ptr),
          &Source,
          0x10uLL);
        a1[11].Ptr = (char *)a1[11].Ptr + 16;
      }
      v7 = a1 + 4;
      if ( !a1[4].Ptr )
      {
        v7->Ptr = 0LL;
        v8 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
        if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
          || (v8 = g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
        {
          ((void (__fastcall *)(RTL_SRWLOCK *, __int64 (__fastcall *)(), RTL_SRWLOCK *))v8)(
            v7,
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
