/*
 * XREFs of ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x180022AEC
 * Callers:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x1800231F0 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 * Callees:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180020D68 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     memcpy_s_0 @ 0x180029C5E (memcpy_s_0.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        RTL_SRWLOCK *pv,
        int a2,
        union wil_details_FeaturePropertyCache *a3)
{
  int v6; // eax
  _BYTE *Ptr; // rcx
  _BYTE *v8; // rdx
  rsize_t v9; // rdx
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v11; // r14
  PTP_TIMER v12; // rbp
  DWORD LastError; // ebx
  struct _TP_TIMER *v14; // rcx
  int Source; // [rsp+20h] [rbp-28h] BYREF
  union wil_details_FeaturePropertyCache *v16; // [rsp+28h] [rbp-20h]
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
      v16 = a3;
      if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)&pv[5], 0x10uLL) )
      {
        Ptr = pv[6].Ptr;
        v8 = pv[7].Ptr;
        if ( Ptr < v8 )
          v9 = v8 - Ptr;
        else
          v9 = 0LL;
        memcpy_s_0(Ptr, v9, &Source, 0x10uLL);
        pv[6].Ptr = (char *)pv[6].Ptr + 16;
      }
      if ( !LOBYTE(pv[3].Ptr) )
      {
        if ( pv[2].Ptr )
          goto LABEL_16;
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
LABEL_16:
          v14 = (struct _TP_TIMER *)pv[2].Ptr;
          pftDueTime = (struct _FILETIME)-3000000000LL;
          SetThreadpoolTimer(v14, &pftDueTime, 0, 0x124F8u);
          LOBYTE(pv[3].Ptr) = 1;
        }
      }
      if ( pv != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(pv + 1);
    }
  }
}
