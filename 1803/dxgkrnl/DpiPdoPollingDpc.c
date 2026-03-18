/*
 * XREFs of DpiPdoPollingDpc @ 0x1C0042A30
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
  if ( !_InterlockedExchange(&dword_1C007A9B8, 1) )
    IoQueueWorkItem(qword_1C007A9B0, DpiPdoPollingWorkItem, DelayedWorkQueue, 0LL);
}
