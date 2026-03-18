/*
 * XREFs of KiForceIdleStopDpcRoutine @ 0x140205ED0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x140205F44 (KiForceIdleUpdateSchedulerParkState.c)
 *     KiSetForceIdleState @ 0x140206178 (KiSetForceIdleState.c)
 */

void __fastcall KiForceIdleStopDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rcx
  _DWORD v5[6]; // [rsp+20h] [rbp-18h] BYREF

  KiForceIdleUpdateSchedulerParkState(0LL, DeferredContext, SystemArgument1, SystemArgument2, v5[0]);
  _disable();
  v5[0] = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
      KeYieldProcessorEx(v5);
    while ( KiForceIdleLock );
  }
  KiForceIdleWatchdogResetCount = 0;
  KiForceIdleActiveLastStartTime = 0LL;
  if ( KiForceIdleStartTime )
    v4 = 2LL;
  else
    v4 = 0LL;
  KiSetForceIdleState(v4);
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  _enable();
}
