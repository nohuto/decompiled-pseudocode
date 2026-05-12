/*
 * XREFs of StorPortStallExecution @ 0x1C000D930
 * Callers:
 *     StorPortStallExecutionVrfy @ 0x1C006A760 (StorPortStallExecutionVrfy.c)
 * Callees:
 *     <none>
 */

void __fastcall StorPortStallExecution(ULONG a1)
{
  KeStallExecutionProcessor(a1);
}
