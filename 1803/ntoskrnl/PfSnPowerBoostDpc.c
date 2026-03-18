/*
 * XREFs of PfSnPowerBoostDpc @ 0x140271210
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 */

void __fastcall PfSnPowerBoostDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(DeferredContext + 136), CriticalWorkQueue);
}
