/*
 * XREFs of StorPortStallExecution @ 0x1C001B4D0
 * Callers:
 *     StorPortStallExecutionVrfy @ 0x1C006B770 (StorPortStallExecutionVrfy.c)
 * Callees:
 *     <none>
 */

void __fastcall StorPortStallExecution(ULONG a1)
{
  KeStallExecutionProcessor(a1);
}
