/*
 * XREFs of KeSetForceIdle @ 0x14024A488
 * Callers:
 *     PopDeepSleepClearDisengageReason @ 0x1400732CC (PopDeepSleepClearDisengageReason.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140035880 (RtlGetInterruptTimePrecise.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiSetForceIdleState @ 0x14024AA4C (KiSetForceIdleState.c)
 */

__int64 KeSetForceIdle()
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v1; // edi
  LARGE_INTEGER v2; // rbx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp+10h] BYREF

  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  while ( 1 )
  {
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
      break;
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
    do
      KeYieldProcessorEx(&v4);
    while ( KiForceIdleLock );
  }
  if ( !KiForceIdleDisabled )
  {
    v1 = KiForceIdleState;
    v2.QuadPart = *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter)
                + 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec;
    if ( !v1 )
    {
      KiSetForceIdleState(2LL);
LABEL_11:
      KiForceIdleStartTime = v2.QuadPart;
      goto LABEL_12;
    }
    if ( v1 == 3 )
      goto LABEL_11;
  }
LABEL_12:
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  result = KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
  _enable();
  return result;
}
