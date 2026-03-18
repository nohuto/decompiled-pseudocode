/*
 * XREFs of PfSnEnablePrefetcherTimerRoutine @ 0x1400D26C0
 * Callers:
 *     <none>
 * Callees:
 *     PfSnUpdatePrefetcherFlags @ 0x1400D26EC (PfSnUpdatePrefetcherFlags.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnEnablePrefetcherTimerRoutine(
        struct _KDPC *Dpc,
        unsigned int *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  PfSnUpdatePrefetcherFlags(DeferredContext[32], 0LL, SystemArgument1, SystemArgument2);
  ExFreePoolWithTag(DeferredContext, 0);
}
