/*
 * XREFs of KeClearForceIdle @ 0x14024A3AC
 * Callers:
 *     PopDeepSleepSetDisengageReason @ 0x1400733E0 (PopDeepSleepSetDisengageReason.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x140006070 (KeRemoveQueueDpcEx.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiResetForceIdle @ 0x14024A92C (KiResetForceIdle.c)
 *     KiSetForceIdleState @ 0x14024AA4C (KiSetForceIdleState.c)
 */

__int64 KeClearForceIdle()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v1; // rdx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  while ( 1 )
  {
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
      break;
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
    do
      KeYieldProcessorEx(&v3);
    while ( KiForceIdleLock );
  }
  if ( KiForceIdleDisabled )
    goto LABEL_17;
  switch ( KiForceIdleState )
  {
    case 1:
      KiSetForceIdleState(0LL);
      KeRemoveQueueDpcEx((int *)&KiForceIdleStartDpc, 0);
      goto LABEL_16;
    case 2:
      KiSetForceIdleState(0LL);
      goto LABEL_16;
    case 3:
      if ( !KiForceIdleStartTime )
        break;
LABEL_16:
      KiForceIdleStartTime = 0LL;
      break;
    case 4:
      LOBYTE(v1) = 1;
      KiResetForceIdle(3LL, v1);
      break;
  }
LABEL_17:
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  result = KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
  _enable();
  return result;
}
