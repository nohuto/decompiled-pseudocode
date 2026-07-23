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

LARGE_INTEGER __cdecl RtlGetInterruptTimePrecise(PLARGE_INTEGER PerformanceCounter)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  LARGE_INTEGER v4; // r14
  LARGE_INTEGER v5; // rdx
  LONGLONG v6; // rdx
  LARGE_INTEGER result; // rax

  while ( 1 )
  {
    v2 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v3 = MEMORY[0xFFFFF78000000350];
      v4.QuadPart = MEMORY[0xFFFFF78000000008];
      v5 = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v2 )
        break;
    }
    _mm_pause();
  }
  *PerformanceCounter = v5;
  if ( v5.QuadPart <= v3 )
  {
    return v4;
  }
  else
  {
    v6 = v5.QuadPart - v3 - 1;
    if ( MEMORY[0xFFFFF78000000369] )
      v6 <<= MEMORY[0xFFFFF78000000369];
    result.QuadPart = v4.QuadPart + (((unsigned __int64)v6 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64);
  }
  return result;
}
