/*
 * XREFs of ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x18000B120
 * Callers:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18000B930 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 * Callees:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18000828C (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        RTL_SRWLOCK *pv,
        int a2,
        union wil_details_FeaturePropertyCache *a3)
{
  int v6; // eax
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *Ptr; // r14
  PTP_TIMER v9; // rbp
  DWORD LastError; // ebx
  struct _TP_TIMER *v11; // rcx
  int Source; // [rsp+20h] [rbp-28h] BYREF
  union wil_details_FeaturePropertyCache *v13; // [rsp+28h] [rbp-20h]
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp+8h] BYREF

  if ( LOBYTE(pv->Ptr) && !wil::details::g_processShutdownInProgress )
  {
    v6 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
    if ( wil::details::g_pfnRtlDllShutdownInProgress )
      v6 = wil::details::g_pfnRtlDllShutdownInProgress();
    if ( !v6 )
    {
      AcquireSRWLockExclusive(pv + 1);
      Source = a2;
      v13 = a3;
      if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)&pv[6], 0x10uLL) )
      {
        memcpy_s(
          pv[7].Ptr,
          ((char *)pv[8].Ptr - (char *)pv[7].Ptr) & -(__int64)(pv[7].Ptr < pv[8].Ptr),
          &Source,
          0x10uLL);
        pv[7].Ptr = (char *)pv[7].Ptr + 16;
      }
      if ( !LOBYTE(pv[3].Ptr) )
      {
        if ( pv[2].Ptr )
          goto LABEL_13;
        ThreadpoolTimer = CreateThreadpoolTimer(
                            lambda_3a8e20f2e77891984b45453b80f2a737_::_lambda_invoker_cdecl_,
                            pv,
                            0LL);
        Ptr = (struct _TP_TIMER *)pv[2].Ptr;
        v9 = ThreadpoolTimer;
        if ( Ptr )
        {
          LastError = GetLastError();
          SetThreadpoolTimer(Ptr, 0LL, 0, 0);
          WaitForThreadpoolTimerCallbacks(Ptr, 1);
          CloseThreadpoolTimer(Ptr);
          SetLastError(LastError);
        }
        pv[2].Ptr = v9;
        if ( v9 )
        {
LABEL_13:
          v11 = (struct _TP_TIMER *)pv[2].Ptr;
          pftDueTime = (struct _FILETIME)-3000000000LL;
          SetThreadpoolTimer(v11, &pftDueTime, 0, 0x124F8u);
          LOBYTE(pv[3].Ptr) = 1;
        }
      }
      if ( pv != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(pv + 1);
    }
  }
}
