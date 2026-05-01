/*
 * XREFs of ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x180006BEC
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x180006630 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntries@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18000C640 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntri.c)
 * Callees:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800045A4 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x180006D44 (-OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     _invalid_parameter_noinfo @ 0x18004204C (_invalid_parameter_noinfo.c)
 *     memset @ 0x18004207E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
        RTL_SRWLOCK *a1,
        __int64 a2,
        int a3)
{
  RTL_SRWLOCK *v6; // rbp
  _OWORD *Ptr; // rcx
  size_t v8; // r8
  __int64 v9; // rcx
  void (*v10)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax
  __int128 v11; // [rsp+20h] [rbp-18h]

  if ( !LOBYTE(a1->Ptr) )
    return;
  if ( !a2 )
  {
    wil::details::EnabledStateManager::OnStateChange((wil::details::EnabledStateManager *)a1);
    return;
  }
  v6 = a1 + 1;
  AcquireSRWLockExclusive(a1 + 1);
  LODWORD(v11) = a3;
  *((_QWORD *)&v11 + 1) = a2;
  if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)&a1[10], 0x10uLL) )
  {
    Ptr = a1[11].Ptr;
    v8 = ((char *)a1[12].Ptr - (char *)Ptr) & -(__int64)(Ptr < a1[12].Ptr);
    if ( Ptr )
    {
      if ( v8 >= 0x10 )
      {
        *Ptr = v11;
LABEL_10:
        a1[11].Ptr = (char *)a1[11].Ptr + 16;
        goto LABEL_11;
      }
      memset(Ptr, 0, v8);
      *(_DWORD *)_o__errno(v9) = 34;
    }
    else
    {
      *(_DWORD *)_o__errno(0LL) = 22;
    }
    invalid_parameter_noinfo();
    goto LABEL_10;
  }
LABEL_11:
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
