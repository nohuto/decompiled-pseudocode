/*
 * XREFs of KiResetForceIdle @ 0x140206078
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x140006060 (KiCallInterruptServiceRoutine.c)
 *     KePrepareClockTimerForIdle @ 0x140067B60 (KePrepareClockTimerForIdle.c)
 *     KeClockInterruptNotify @ 0x1400F3A30 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x1400F6D60 (KeResumeClockTimerFromIdle.c)
 *     KeClearForceIdle @ 0x140205C10 (KeClearForceIdle.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     RtlGetInterruptTimePrecise @ 0x140044EC0 (RtlGetInterruptTimePrecise.c)
 *     KeIsForceIdleEngaged @ 0x140067DD8 (KeIsForceIdleEngaged.c)
 *     KeInsertQueueDpc @ 0x1400F14F0 (KeInsertQueueDpc.c)
 *     KiSetForceIdleState @ 0x140206178 (KiSetForceIdleState.c)
 *     PoTraceForceIdleReset @ 0x14022FB6C (PoTraceForceIdleReset.c)
 */

char __fastcall KiResetForceIdle(unsigned int a1, char a2)
{
  bool v2; // bl
  char result; // al
  __int64 v6; // rax
  __int16 v7; // [rsp+30h] [rbp-8h]
  int v8; // [rsp+48h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    _disable();
    v2 = (v7 & 0x200) != 0;
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v8);
      while ( KiForceIdleLock );
    }
  }
  result = KeIsForceIdleEngaged();
  if ( result )
  {
    KiSetForceIdleState(3LL);
    if ( a1 == 3 )
    {
      v6 = 0LL;
    }
    else if ( a1 == 4 )
    {
      v6 = 0LL;
      KiForceIdleDisabled = 1;
    }
    else
    {
      v6 = 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec
         + *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter);
    }
    KiForceIdleStartTime = v6;
    if ( !KiForceIdleStopDpc.DpcData )
      KiForceIdleStopDpc.Number = KiClockTimerOwner + 640;
    KeInsertQueueDpc(&KiForceIdleStopDpc, 0LL, 0LL);
    result = PoTraceForceIdleReset(a1);
  }
  if ( !a2 )
  {
    _InterlockedAnd64(&KiForceIdleLock, 0LL);
    if ( v2 )
      _enable();
  }
  return result;
}
