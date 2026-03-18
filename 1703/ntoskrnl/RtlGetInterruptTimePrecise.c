/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x140044EC0
 * Callers:
 *     KiCheckWaitNext @ 0x140044AC0 (KiCheckWaitNext.c)
 *     KeIntSteerSnapPerf @ 0x140044D00 (KeIntSteerSnapPerf.c)
 *     KiTimer2Expiration @ 0x140047B60 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x140048CA0 (KiExpireTimer2.c)
 *     KeSetTimer2 @ 0x140049180 (KeSetTimer2.c)
 *     KePrepareClockTimerForIdle @ 0x140067B60 (KePrepareClockTimerForIdle.c)
 *     PopFxResidentTimeoutRoutine @ 0x140068C50 (PopFxResidentTimeoutRoutine.c)
 *     PopFxIdleComponent @ 0x140069D5C (PopFxIdleComponent.c)
 *     KeClockInterruptNotify @ 0x1400F3A30 (KeClockInterruptNotify.c)
 *     KiResumeClockTimer @ 0x140137F00 (KiResumeClockTimer.c)
 *     KeQueryInterruptTimePrecise @ 0x140143630 (KeQueryInterruptTimePrecise.c)
 *     PpmIdleEvaluateConstraints @ 0x14015BFD0 (PpmIdleEvaluateConstraints.c)
 *     KeGetNextClockTickDuration @ 0x1401FD300 (KeGetNextClockTickDuration.c)
 *     KiResetForceIdle @ 0x140206078 (KiResetForceIdle.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x140228778 (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PpmIdlePrevetoWatchdog @ 0x140228878 (PpmIdlePrevetoWatchdog.c)
 *     PpmUpdateIdleVeto @ 0x140229B4C (PpmUpdateIdleVeto.c)
 *     PopCalculateCsSummary @ 0x14022FD3C (PopCalculateCsSummary.c)
 *     PpmEventTracePreVetoAccounting @ 0x1402368A4 (PpmEventTracePreVetoAccounting.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetInterruptTimePrecise(LARGE_INTEGER *a1)
{
  __int64 v2; // rbx
  LARGE_INTEGER v3; // rdi
  __int64 v4; // r14
  LARGE_INTEGER PerformanceCounter; // rdx
  LONGLONG v6; // rdx

  while ( 1 )
  {
    v2 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v3.QuadPart = MEMORY[0xFFFFF78000000350];
      v4 = MEMORY[0xFFFFF78000000008];
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v2 )
        break;
    }
    _mm_pause();
  }
  *a1 = PerformanceCounter;
  if ( PerformanceCounter.QuadPart <= (unsigned __int64)v3.QuadPart )
    return v4;
  v6 = PerformanceCounter.QuadPart - v3.QuadPart - 1;
  if ( MEMORY[0xFFFFF78000000369] )
    v6 <<= MEMORY[0xFFFFF78000000369];
  return v4 + (((unsigned __int64)v6 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64);
}
