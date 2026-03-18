/*
 * XREFs of KiForceIdleStopDpcRoutine @ 0x14020C4C0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14020C534 (KiForceIdleUpdateSchedulerParkState.c)
 *     KiSetForceIdleState @ 0x14020C768 (KiSetForceIdleState.c)
 */

void __fastcall KiForceIdleStopDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  _DWORD v8[6]; // [rsp+20h] [rbp-18h] BYREF

  KiForceIdleUpdateSchedulerParkState(0LL, DeferredContext, SystemArgument1, SystemArgument2, v8[0]);
  _disable();
  v8[0] = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
      KeYieldProcessorEx(v8);
    while ( KiForceIdleLock );
  }
  KiForceIdleWatchdogResetCount = 0;
  KiForceIdleActiveLastStartTime = 0LL;
  if ( KiForceIdleStartTime )
    v7 = 2LL;
  else
    v7 = 0LL;
  KiSetForceIdleState(v7, v4, v5, v6);
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  _enable();
}
