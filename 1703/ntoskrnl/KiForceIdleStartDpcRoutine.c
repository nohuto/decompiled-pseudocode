/*
 * XREFs of KiForceIdleStartDpcRoutine @ 0x140205E50
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x140205F44 (KiForceIdleUpdateSchedulerParkState.c)
 *     KiSetForceIdleState @ 0x140206178 (KiSetForceIdleState.c)
 */

void __fastcall KiForceIdleStartDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  char v4; // bl
  _DWORD v5[6]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  _disable();
  v5[0] = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
      KeYieldProcessorEx(v5);
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
  _enable();
  if ( !v4 )
  {
    LOBYTE(Dpc) = 1;
    KiForceIdleUpdateSchedulerParkState(Dpc, DeferredContext, SystemArgument1, SystemArgument2, v5[0]);
  }
}
