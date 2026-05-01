/*
 * XREFs of ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x180006A64
 * Callers:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x1800071B0 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 * Callees:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800045A4 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     _invalid_parameter_noinfo @ 0x18004204C (_invalid_parameter_noinfo.c)
 *     memset @ 0x18004207E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        RTL_SRWLOCK *pv,
        int a2,
        union wil_details_FeaturePropertyCache *a3)
{
  int v6; // eax
  _OWORD *Ptr; // rcx
  size_t v8; // r8
  __int64 v9; // rcx
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v11; // r14
  PTP_TIMER v12; // rbp
  DWORD LastError; // ebx
  struct _TP_TIMER *v14; // rcx
  __int128 v15; // [rsp+20h] [rbp-28h]
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp+8h] BYREF

  if ( LOBYTE(pv->Ptr) && !wil::details::g_processShutdownInProgress )
  {
    v6 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
    if ( wil::details::g_pfnRtlDllShutdownInProgress )
      v6 = wil::details::g_pfnRtlDllShutdownInProgress();
    if ( !v6 )
    {
      AcquireSRWLockExclusive(pv + 1);
      LODWORD(v15) = a2;
      *((_QWORD *)&v15 + 1) = a3;
      if ( !wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)&pv[6], 0x10uLL) )
        goto LABEL_14;
      Ptr = pv[7].Ptr;
      v8 = ((char *)pv[8].Ptr - (char *)Ptr) & -(__int64)(Ptr < pv[8].Ptr);
      if ( Ptr )
      {
        if ( v8 >= 0x10 )
        {
          *Ptr = v15;
LABEL_13:
          pv[7].Ptr = (char *)pv[7].Ptr + 16;
LABEL_14:
          if ( !LOBYTE(pv[3].Ptr) )
          {
            if ( pv[2].Ptr )
              goto LABEL_19;
            ThreadpoolTimer = CreateThreadpoolTimer(
                                lambda_3a8e20f2e77891984b45453b80f2a737_::_lambda_invoker_cdecl_,
                                pv,
                                0LL);
            v11 = (struct _TP_TIMER *)pv[2].Ptr;
            v12 = ThreadpoolTimer;
            if ( v11 )
            {
              LastError = GetLastError();
              SetThreadpoolTimer(v11, 0LL, 0, 0);
              WaitForThreadpoolTimerCallbacks(v11, 1);
              CloseThreadpoolTimer(v11);
              SetLastError(LastError);
            }
            pv[2].Ptr = v12;
            if ( v12 )
            {
LABEL_19:
              v14 = (struct _TP_TIMER *)pv[2].Ptr;
              pftDueTime = (struct _FILETIME)-3000000000LL;
              SetThreadpoolTimer(v14, &pftDueTime, 0, 0x124F8u);
              LOBYTE(pv[3].Ptr) = 1;
            }
          }
          if ( pv != (RTL_SRWLOCK *)-8LL )
            ReleaseSRWLockExclusive(pv + 1);
          return;
        }
        memset(Ptr, 0, v8);
        *(_DWORD *)_o__errno(v9) = 34;
      }
      else
      {
        *(_DWORD *)_o__errno(0LL) = 22;
      }
      invalid_parameter_noinfo();
      goto LABEL_13;
    }
  }
}
