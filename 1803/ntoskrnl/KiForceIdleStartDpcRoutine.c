/*
 * XREFs of KiForceIdleStartDpcRoutine @ 0x14024A690
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14024A7F0 (KiForceIdleUpdateSchedulerParkState.c)
 *     KiSetForceIdleState @ 0x14024AA4C (KiSetForceIdleState.c)
 */

void __fastcall KiForceIdleStartDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  char v4; // di
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v6; // rcx
  _DWORD v7[6]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v7[0] = 0;
  while ( 1 )
  {
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
      break;
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
    do
      KeYieldProcessorEx(v7);
    while ( KiForceIdleLock );
  }
  if ( KiForceIdleState == 1 )
  {
    KiSetForceIdleState(4LL);
    KiForceIdleActiveLastStartTime = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    v4 = 1;
  }
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
  _enable();
  if ( !v4 )
  {
    LOBYTE(v6) = 1;
    KiForceIdleUpdateSchedulerParkState(v6);
  }
}
