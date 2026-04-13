/*
 * XREFs of ?QueueBackgroundSRUMUsageReporting@details@wil@@YAXIII@Z @ 0x18000B040
 * Callers:
 *     <none>
 * Callees:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18000890C (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800170C8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::QueueBackgroundSRUMUsageReporting(wil::details *this, unsigned __int16 a2, int a3)
{
  int v5; // ebx
  int v6; // eax
  struct _TP_TIMER *v7; // rcx
  PTP_TIMER ThreadpoolTimer; // rax
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-38h] BYREF
  _DWORD Source[4]; // [rsp+28h] [rbp-30h] BYREF

  v5 = (int)this;
  if ( wil::details::g_featureStateManager && !wil::details::g_processShutdownInProgress )
  {
    v6 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
    if ( wil::details::g_pfnRtlDllShutdownInProgress )
      v6 = wil::details::g_pfnRtlDllShutdownInProgress();
    if ( !v6 )
    {
      AcquireSRWLockExclusive(&SRWLock);
      Source[2] = a3;
      Source[0] = v5;
      Source[1] = a2;
      if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)&xmmword_18017A250, 0xCuLL) )
      {
        memcpy_s(
          *(&xmmword_18017A250 + 1),
          (xmmword_18017A260 - *(&xmmword_18017A250 + 1)) & -(__int64)(*(&xmmword_18017A250 + 1) < (unsigned __int64)xmmword_18017A260),
          Source,
          0xCuLL);
        *(&xmmword_18017A250 + 1) += 12LL;
      }
      if ( !(_BYTE)word_18017A1A0 )
      {
        v7 = *(&pti + 1);
        if ( *(&pti + 1)
          || (ThreadpoolTimer = CreateThreadpoolTimer(
                                  lambda_02deec49ef48fa12c9095208f5992a62_::_lambda_invoker_cdecl_,
                                  &wil::details::g_featureStateManager,
                                  0LL),
              wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
                &pti + 1,
                ThreadpoolTimer),
              (v7 = *(&pti + 1)) != 0LL) )
        {
          pftDueTime = (struct _FILETIME)-50000000LL;
          SetThreadpoolTimer(v7, &pftDueTime, 0, 0x4E2u);
          LOBYTE(word_18017A1A0) = 1;
        }
      }
      ReleaseSRWLockExclusive(&SRWLock);
    }
  }
}
