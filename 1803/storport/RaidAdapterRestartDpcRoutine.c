/*
 * XREFs of RaidAdapterRestartDpcRoutine @ 0x1C0027B10
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterRestartQueues @ 0x1C000EF18 (RaidAdapterRestartQueues.c)
 */

void __fastcall RaidAdapterRestartDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  RaidAdapterRestartQueues(DeferredContext[8]);
}
