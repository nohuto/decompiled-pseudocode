/*
 * XREFs of KiCheckAndRearmForceIdle @ 0x1400D14A4
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14007EA00 (KiCallInterruptServiceRoutine.c)
 *     KiTimer2Expiration @ 0x1400E8E30 (KiTimer2Expiration.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x140006070 (KeRemoveQueueDpcEx.c)
 *     RtlGetInterruptTimePrecise @ 0x140035880 (RtlGetInterruptTimePrecise.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiSetForceIdleState @ 0x14024AA4C (KiSetForceIdleState.c)
 */

void __fastcall KiCheckAndRearmForceIdle(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v3; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp+10h] BYREF

  if ( !KiForceIdleDisabled )
  {
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    v3 = 0;
    while ( 1 )
    {
      LOBYTE(a2) = 1;
      KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
        break;
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      do
        KeYieldProcessorEx(&v3);
      while ( KiForceIdleLock );
    }
    if ( KiForceIdleState == 1 )
    {
      KeRemoveQueueDpcEx((int *)&KiForceIdleStartDpc, 0);
      KiSetForceIdleState(2LL);
    }
    else if ( KiForceIdleState != 2 )
    {
LABEL_6:
      _InterlockedAnd64(&KiForceIdleLock, 0LL);
      KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
      _enable();
      return;
    }
    KiForceIdleStartTime = 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec
                         + *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter);
    goto LABEL_6;
  }
}
