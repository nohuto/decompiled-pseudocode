/*
 * XREFs of KiCheckAndRearmForceIdle @ 0x14013171C
 * Callers:
 *     KiTimer2Expiration @ 0x140092BD0 (KiTimer2Expiration.c)
 *     KiCallInterruptServiceRoutine @ 0x1400A92A0 (KiCallInterruptServiceRoutine.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     RtlGetInterruptTimePrecise @ 0x1400E48D0 (RtlGetInterruptTimePrecise.c)
 *     KeRemoveQueueDpcEx @ 0x140129650 (KeRemoveQueueDpcEx.c)
 *     KiSetForceIdleState @ 0x14020C768 (KiSetForceIdleState.c)
 */

void KiCheckAndRearmForceIdle()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp+10h] BYREF

  if ( !KiForceIdleDisabled )
  {
    _disable();
    v3 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v3);
      while ( KiForceIdleLock );
    }
    if ( KiForceIdleState == 1 )
    {
      KeRemoveQueueDpcEx((int *)&KiForceIdleStartDpc, 0);
      KiSetForceIdleState(2LL, v0, v1, v2);
    }
    else if ( KiForceIdleState != 2 )
    {
LABEL_6:
      _InterlockedAnd64(&KiForceIdleLock, 0LL);
      _enable();
      return;
    }
    KiForceIdleStartTime = *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter)
                         + 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec;
    goto LABEL_6;
  }
}
