/*
 * XREFs of KiForceIdleStopDpcRoutine @ 0x14024A750
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14024A7F0 (KiForceIdleUpdateSchedulerParkState.c)
 *     KiSetForceIdleState @ 0x14024AA4C (KiSetForceIdleState.c)
 */

void __fastcall KiForceIdleStopDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD v5[6]; // [rsp+20h] [rbp-18h] BYREF

  KiForceIdleUpdateSchedulerParkState(0LL);
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v5[0] = 0;
  while ( 1 )
  {
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
      break;
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
    do
      KeYieldProcessorEx(v5);
    while ( KiForceIdleLock );
  }
  KiForceIdleWatchdogResetCount = 0;
  KiForceIdleActiveLastStartTime = 0LL;
  KiSetForceIdleState(KiForceIdleStartTime != 0 ? 2 : 0);
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
  _enable();
}
