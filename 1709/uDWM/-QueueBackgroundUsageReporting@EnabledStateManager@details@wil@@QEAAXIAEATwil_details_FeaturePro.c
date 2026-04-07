/*
 * XREFs of ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x18003FE5C
 * Callers:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180033F10 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x1800318F0 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@AEA_N@Z @ 0x180036770 (-EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV-$unique_any_t@V-$unique_storage@U-$resource_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800367B0 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180044C5C (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 */

void __fastcall wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        char *pv,
        int a2,
        union wil_details_FeaturePropertyCache *a3)
{
  unsigned __int64 v6; // r8
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v8; // [rsp+20h] [rbp-18h] BYREF
  union wil_details_FeaturePropertyCache *v9; // [rsp+28h] [rbp-10h]

  if ( *pv && !wil::ProcessShutdownInProgress((wil *)pv) )
  {
    AcquireSRWLockExclusive((PSRWLOCK)pv + 1);
    v8 = a2;
    v9 = a3;
    wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)(pv + 48), &v8, v6);
    if ( !pv[24] )
    {
      if ( !*((_QWORD *)pv + 2) )
      {
        ThreadpoolTimer = CreateThreadpoolTimer(
                            (PTP_TIMER_CALLBACK)lambda_3a8e20f2e77891984b45453b80f2a737_::_lambda_invoker_cdecl_,
                            pv,
                            0LL);
        wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
          (struct _TP_TIMER **)pv + 2,
          ThreadpoolTimer);
      }
      wil::details::EnsureCoalescedTimer_SetTimer((struct _TP_TIMER **)pv + 2, pv + 24);
    }
    if ( pv != (char *)-8LL )
      ReleaseSRWLockExclusive((PSRWLOCK)pv + 1);
  }
}
