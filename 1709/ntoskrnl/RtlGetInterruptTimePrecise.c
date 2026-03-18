/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x1400E48D0
 * Callers:
 *     KeIntSteerSnapPerf @ 0x140003780 (KeIntSteerSnapPerf.c)
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 *     KeClockInterruptNotify @ 0x140095E30 (KeClockInterruptNotify.c)
 *     KiExpireTimer2 @ 0x1400E2E30 (KiExpireTimer2.c)
 *     PopFxIdleComponent @ 0x1400E403C (PopFxIdleComponent.c)
 *     KiCheckWaitNext @ 0x1400E45E0 (KiCheckWaitNext.c)
 *     PpmCheckStart @ 0x1400E4720 (PpmCheckStart.c)
 *     KePrepareClockTimerForIdle @ 0x14010F380 (KePrepareClockTimerForIdle.c)
 *     PopFxResidentTimeoutRoutine @ 0x14011B7B0 (PopFxResidentTimeoutRoutine.c)
 *     KiCheckAndRearmForceIdle @ 0x14013171C (KiCheckAndRearmForceIdle.c)
 *     KeQueryInterruptTimePrecise @ 0x140137C40 (KeQueryInterruptTimePrecise.c)
 *     KeGetNextClockTickDuration @ 0x140203230 (KeGetNextClockTickDuration.c)
 *     KiResumeClockTimer @ 0x1402034A8 (KiResumeClockTimer.c)
 *     KeSetForceIdle @ 0x14020C2A0 (KeSetForceIdle.c)
 *     KiResetForceIdle @ 0x14020C668 (KiResetForceIdle.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x14023B6D8 (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PpmIdlePrevetoWatchdog @ 0x14023B7D8 (PpmIdlePrevetoWatchdog.c)
 *     PpmUpdateIdleVeto @ 0x14023CA00 (PpmUpdateIdleVeto.c)
 *     PopCalculateCsSummary @ 0x14024457C (PopCalculateCsSummary.c)
 *     PpmEventTracePreVetoAccounting @ 0x14024B918 (PpmEventTracePreVetoAccounting.c)
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
