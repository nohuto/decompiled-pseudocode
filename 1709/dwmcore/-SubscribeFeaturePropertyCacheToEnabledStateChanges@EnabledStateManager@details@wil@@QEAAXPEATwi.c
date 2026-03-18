/*
 * XREFs of ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x1800799E8
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ForceNRE@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18007AF90 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ForceNRE@@@wil@@CA-AW4wil_de.c)
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x18007B0CC (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18013AB30 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CA-AW4wil.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801913FC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA-AW4.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18007AD20 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x180133FCC (-OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ?WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180134D14 (-WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBS.c)
 *     ?WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x180134D3C (-WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSC.c)
 */

void __fastcall wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
        __int64 a1,
        __int64 a2,
        int a3)
{
  RTL_SRWLOCK *v6; // rsi
  unsigned __int64 v7; // r8
  void *v8; // r9
  int v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  if ( *(_BYTE *)a1 )
  {
    if ( a2 )
    {
      v6 = (RTL_SRWLOCK *)(a1 + 8);
      AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
      v9 = a3;
      v10 = a2;
      wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)(a1 + 80), &v9, v7);
      if ( !*(_QWORD *)(a1 + 32) )
      {
        *(_QWORD *)(a1 + 32) = 0LL;
        wil::details::WilApi_SubscribeFeatureStateChangeNotification(
          (wil::details *)(a1 + 32),
          (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)lambda_42ed7cb8e6cd03c5242b9a63c40e80d6_::_lambda_invoker_cdecl_,
          (void (*)(void *))a1,
          v8);
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
