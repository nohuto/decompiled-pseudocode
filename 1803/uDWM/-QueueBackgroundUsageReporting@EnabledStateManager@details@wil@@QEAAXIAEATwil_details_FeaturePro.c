/*
 * XREFs of ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x180042B00
 * Callers:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180035390 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180039434 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@AEA_N_J@Z @ 0x180039624 (-EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV-$unique_any_t@V-$unique_storage@U-$resource_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180039660 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180048798 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 */

void __fastcall wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        char *pv,
        int a2,
        union wil_details_FeaturePropertyCache *a3)
{
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v7; // [rsp+20h] [rbp-18h] BYREF
  union wil_details_FeaturePropertyCache *v8; // [rsp+28h] [rbp-10h]

  if ( *pv && !wil::ProcessShutdownInProgress((wil *)pv) )
  {
    AcquireSRWLockExclusive((PSRWLOCK)pv + 1);
    v7 = a2;
    v8 = a3;
    wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)(pv + 48), &v7, 0x10uLL);
    if ( !pv[24] )
    {
      if ( !*((_QWORD *)pv + 2) )
      {
        ThreadpoolTimer = CreateThreadpoolTimer(
                            (PTP_TIMER_CALLBACK)lambda_d920a0a3d4a387d1d77e21b11a8b43bc_::_lambda_invoker_cdecl_,
                            pv,
                            0LL);
        wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
          (struct _TP_TIMER **)pv + 2,
          ThreadpoolTimer);
      }
      wil::details::EnsureCoalescedTimer_SetTimer((struct _TP_TIMER **)pv + 2, pv + 24, 300000LL);
    }
    if ( pv != (char *)-8LL )
      ReleaseSRWLockExclusive((PSRWLOCK)pv + 1);
  }
}
