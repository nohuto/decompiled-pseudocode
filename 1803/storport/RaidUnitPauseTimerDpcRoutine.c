/*
 * XREFs of RaidUnitPauseTimerDpcRoutine @ 0x1C0010FB0
 * Callers:
 *     <none>
 * Callees:
 *     RaidResumeUnitQueue @ 0x1C0003A94 (RaidResumeUnitQueue.c)
 *     RaidRestartIoQueue @ 0x1C000C8F8 (RaidRestartIoQueue.c)
 */

void __fastcall RaidUnitPauseTimerDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx

  v4 = DeferredContext[8];
  if ( (unsigned int)RaidResumeUnitQueue(v4) )
    RaidRestartIoQueue(v4);
}
