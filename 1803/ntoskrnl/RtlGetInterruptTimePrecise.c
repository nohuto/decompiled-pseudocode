/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x140035880
 * Callers:
 *     KiSetClockIntervalToMinimumRequested @ 0x140005B80 (KiSetClockIntervalToMinimumRequested.c)
 *     KeIntSteerSnapPerf @ 0x140035520 (KeIntSteerSnapPerf.c)
 *     PpmCheckStart @ 0x1400356C0 (PpmCheckStart.c)
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 *     KePrepareClockTimerForIdle @ 0x1400396A0 (KePrepareClockTimerForIdle.c)
 *     PopFxResidentTimeoutRoutine @ 0x140077910 (PopFxResidentTimeoutRoutine.c)
 *     PopFxIdleComponent @ 0x1400786EC (PopFxIdleComponent.c)
 *     KiCheckWaitNext @ 0x140088F10 (KiCheckWaitNext.c)
 *     KeQueryInterruptTimePrecise @ 0x1400CEC60 (KeQueryInterruptTimePrecise.c)
 *     KiCheckAndRearmForceIdle @ 0x1400D14A4 (KiCheckAndRearmForceIdle.c)
 *     KiExpireTimer2 @ 0x1400EA230 (KiExpireTimer2.c)
 *     KeClockInterruptNotify @ 0x14010A200 (KeClockInterruptNotify.c)
 *     KiResumeClockTimer @ 0x14014E908 (KiResumeClockTimer.c)
 *     KeGetNextClockTickDuration @ 0x1402408B0 (KeGetNextClockTickDuration.c)
 *     KeSetForceIdle @ 0x14024A488 (KeSetForceIdle.c)
 *     KiResetForceIdle @ 0x14024A92C (KiResetForceIdle.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x140272BCC (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PpmIdlePrevetoWatchdog @ 0x140272D4C (PpmIdlePrevetoWatchdog.c)
 *     PpmUpdateIdleVeto @ 0x140273FE0 (PpmUpdateIdleVeto.c)
 *     PopCalculateCsSummary @ 0x14027ACFC (PopCalculateCsSummary.c)
 *     PpmEventTracePreVetoAccounting @ 0x140281890 (PpmEventTracePreVetoAccounting.c)
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
