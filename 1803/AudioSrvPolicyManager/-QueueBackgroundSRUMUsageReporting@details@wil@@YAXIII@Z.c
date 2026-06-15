/*
 * XREFs of ?QueueBackgroundSRUMUsageReporting@details@wil@@YAXIII@Z @ 0x1800060C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180004384 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18000700C (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     memset_0 @ 0x180035A50 (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x180035AB6 (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::QueueBackgroundSRUMUsageReporting(wil::details *this, unsigned __int16 a2, int a3)
{
  int v5; // esi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  size_t v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _TP_TIMER *v13; // rcx
  PTP_TIMER ThreadpoolTimer; // rax
  __int64 v15; // [rsp+20h] [rbp-18h]
  struct _FILETIME pftDueTime; // [rsp+58h] [rbp+20h] BYREF

  v5 = (int)this;
  if ( wil::details::g_featureStateManager && !wil::details::g_processShutdownInProgress )
  {
    v6 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
    if ( wil::details::g_pfnRtlDllShutdownInProgress )
      v6 = wil::details::g_pfnRtlDllShutdownInProgress();
    if ( !v6 )
    {
      AcquireSRWLockExclusive(&SRWLock);
      LODWORD(v15) = v5;
      HIDWORD(v15) = a2;
      if ( !wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)&xmmword_18004E190, 0xCuLL) )
        goto LABEL_14;
      v9 = *(&xmmword_18004E190 + 1);
      v10 = (xmmword_18004E1A0 - *(&xmmword_18004E190 + 1)) & -(__int64)(*(&xmmword_18004E190 + 1) < (unsigned __int64)xmmword_18004E1A0);
      if ( *(&xmmword_18004E190 + 1) )
      {
        if ( v10 >= 0xC )
        {
          **(&xmmword_18004E190 + 1) = v15;
          *(_DWORD *)(v9 + 8) = a3;
LABEL_13:
          *(&xmmword_18004E190 + 1) += 12LL;
LABEL_14:
          if ( !(_BYTE)word_18004E0E0 )
          {
            v13 = (struct _TP_TIMER *)*((_QWORD *)&xmmword_18004E0D0 + 1);
            if ( *((_QWORD *)&xmmword_18004E0D0 + 1)
              || (ThreadpoolTimer = CreateThreadpoolTimer(
                                      lambda_02deec49ef48fa12c9095208f5992a62_::_lambda_invoker_cdecl_,
                                      &wil::details::g_featureStateManager,
                                      0LL),
                  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
                    (char *)&xmmword_18004E0D0 + 8,
                    ThreadpoolTimer),
                  (v13 = (struct _TP_TIMER *)*((_QWORD *)&xmmword_18004E0D0 + 1)) != 0LL) )
            {
              pftDueTime = (struct _FILETIME)-50000000LL;
              SetThreadpoolTimer(v13, &pftDueTime, 0, 0x4E2u);
              LOBYTE(word_18004E0E0) = 1;
            }
          }
          ReleaseSRWLockExclusive(&SRWLock);
          return;
        }
        memset_0(*(&xmmword_18004E190 + 1), 0, v10);
        *(_DWORD *)_o__errno(v12, v11) = 34;
      }
      else
      {
        *(_DWORD *)_o__errno(v8, v7) = 22;
      }
      invalid_parameter_noinfo();
      goto LABEL_13;
    }
  }
}
