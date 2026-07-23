/*
 * XREFs of KiResetForceIdle @ 0x14024A92C
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14007EA00 (KiCallInterruptServiceRoutine.c)
 *     KeClockInterruptNotify @ 0x14010A200 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x14010DC30 (KeResumeClockTimerFromIdle.c)
 *     KeClearForceIdle @ 0x14024A3AC (KeClearForceIdle.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140035880 (RtlGetInterruptTimePrecise.c)
 *     KeIsForceIdleEngaged @ 0x1400382EC (KeIsForceIdleEngaged.c)
 *     KeInsertQueueDpc @ 0x140039000 (KeInsertQueueDpc.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiSetForceIdleState @ 0x14024AA4C (KiSetForceIdleState.c)
 *     PoTraceForceIdleReset @ 0x14027AB04 (PoTraceForceIdleReset.c)
 */

char __fastcall KiResetForceIdle(unsigned int a1, char a2)
{
  bool v2; // bl
  __int16 v5; // bx
  struct _KPRCB *CurrentPrcb; // rdi
  char result; // al
  __int64 v8; // rax
  __int16 v9; // [rsp+30h] [rbp-8h]
  int v10; // [rsp+48h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v5 = v9;
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    v2 = (v5 & 0x200) != 0;
    v10 = 0;
    while ( 1 )
    {
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
        break;
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
      do
        KeYieldProcessorEx(&v10);
      while ( KiForceIdleLock );
    }
  }
  result = KeIsForceIdleEngaged();
  if ( result )
  {
    KiSetForceIdleState(3LL);
    if ( a1 == 3 )
      v8 = 0LL;
    else
      v8 = 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec
         + *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter);
    KiForceIdleStartTime = v8;
    if ( !KiForceIdleStopDpc.DpcData )
      KiForceIdleStopDpc.Number = KiClockTimerOwner + 1280;
    KeInsertQueueDpc(&KiForceIdleStopDpc, 0LL, 0LL);
    result = PoTraceForceIdleReset(a1);
  }
  if ( !a2 )
  {
    _InterlockedAnd64(&KiForceIdleLock, 0LL);
    result = KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
    if ( v2 )
      _enable();
  }
  return result;
}
