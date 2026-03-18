/*
 * XREFs of DpiPdoPollingDpc @ 0x1C0033B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiPdoPollingDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( !_InterlockedExchange(&dword_1C0060A60, 1) )
    IoQueueWorkItem(IoWorkItem, DpiPdoPollingWorkItem, DelayedWorkQueue, 0LL);
}
