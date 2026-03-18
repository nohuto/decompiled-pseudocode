/*
 * XREFs of IopPassiveInterruptDpc @ 0x14023B390
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueue @ 0x1400C1D70 (KeInsertQueue.c)
 */

void __fastcall IopPassiveInterruptDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KeInsertQueue(&PassiveInterruptRealtimeWorkQueue, (PLIST_ENTRY)(DeferredContext + 72));
}
