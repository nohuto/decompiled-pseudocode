/*
 * XREFs of ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x18006E2CC
 * Callers:
 *     ?QueueBackgroundSRUMUsageReporting@details@wil@@YAXIII@Z @ 0x18006E3B0 (-QueueBackgroundSRUMUsageReporting@details@wil@@YAXIII@Z.c)
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180039434 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@AEA_N_J@Z @ 0x180039624 (-EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV-$unique_any_t@V-$unique_storage@U-$resource_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180039660 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180048798 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 */

void __fastcall wil::details::FeatureStateManager::QueueBackgroundSRUMUsageReporting(
        PVOID pv,
        int a2,
        unsigned __int16 a3,
        int a4)
{
  struct _TP_TIMER *ThreadpoolTimer; // rax
  _DWORD v9[4]; // [rsp+20h] [rbp-48h] BYREF

  if ( *(_BYTE *)pv && !wil::ProcessShutdownInProgress((wil *)pv) )
  {
    AcquireSRWLockExclusive((PSRWLOCK)pv + 5);
    v9[2] = a4;
    v9[0] = a2;
    v9[1] = a3;
    wil::details_abi::heap_buffer::push_back((void **)pv + 30, v9, 0xCuLL);
    if ( !*((_BYTE *)pv + 64) )
    {
      if ( !*((_QWORD *)pv + 7) )
      {
        ThreadpoolTimer = CreateThreadpoolTimer(
                            (PTP_TIMER_CALLBACK)lambda_02deec49ef48fa12c9095208f5992a62_::_lambda_invoker_cdecl_,
                            pv,
                            0LL);
        wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
          (struct _TP_TIMER **)pv + 7,
          ThreadpoolTimer);
      }
      wil::details::EnsureCoalescedTimer_SetTimer((struct _TP_TIMER **)pv + 7, (_BYTE *)pv + 64, 5000LL);
    }
    if ( pv != (PVOID)-40LL )
      ReleaseSRWLockExclusive((PSRWLOCK)pv + 5);
  }
}
