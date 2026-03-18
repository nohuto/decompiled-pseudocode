/*
 * XREFs of PfSnEnablePrefetcherTimerRoutine @ 0x14003BCE0
 * Callers:
 *     <none>
 * Callees:
 *     PfSnUpdatePrefetcherFlags @ 0x14003BD0C (PfSnUpdatePrefetcherFlags.c)
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
