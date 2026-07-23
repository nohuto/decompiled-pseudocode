/*
 * XREFs of KiResetForceIdle @ 0x14020C668
 * Callers:
 *     KeClockInterruptNotify @ 0x140095E30 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x140098E10 (KeResumeClockTimerFromIdle.c)
 *     KiCallInterruptServiceRoutine @ 0x1400A92A0 (KiCallInterruptServiceRoutine.c)
 *     KePrepareClockTimerForIdle @ 0x14010F380 (KePrepareClockTimerForIdle.c)
 *     KeClearForceIdle @ 0x14020C1F4 (KeClearForceIdle.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KeIsForceIdleEngaged @ 0x14006238C (KeIsForceIdleEngaged.c)
 *     KeInsertQueueDpc @ 0x140094390 (KeInsertQueueDpc.c)
 *     RtlGetInterruptTimePrecise @ 0x1400E48D0 (RtlGetInterruptTimePrecise.c)
 *     KiSetForceIdleState @ 0x14020C768 (KiSetForceIdleState.c)
 *     PoTraceForceIdleReset @ 0x140244384 (PoTraceForceIdleReset.c)
 */

char __fastcall KiResetForceIdle(unsigned int a1, char a2)
{
  bool v2; // bl
  char result; // al
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int16 v10; // [rsp+30h] [rbp-8h]
  int v11; // [rsp+48h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    _disable();
    v2 = (v10 & 0x200) != 0;
    v11 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v11);
      while ( KiForceIdleLock );
    }
  }
  result = KeIsForceIdleEngaged();
  if ( result )
  {
    KiSetForceIdleState(3LL, v6, v7, v8);
    if ( a1 == 3 )
    {
      v9 = 0LL;
    }
    else if ( a1 == 4 )
    {
      v9 = 0LL;
      KiForceIdleDisabled = 1;
    }
    else
    {
      v9 = 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec
         + *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter);
    }
    KiForceIdleStartTime = v9;
    if ( !KiForceIdleStopDpc.DpcData )
      KiForceIdleStopDpc.Number = KiClockTimerOwner + 1280;
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
