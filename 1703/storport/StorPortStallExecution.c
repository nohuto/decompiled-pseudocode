/*
 * XREFs of StorPortStallExecution @ 0x1C001B750
 * Callers:
 *     StorPortStallExecutionVrfy @ 0x1C0067660 (StorPortStallExecutionVrfy.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall StorPortStallExecution(ULONG MicroSeconds)
{
  KeStallExecutionProcessor(MicroSeconds);
}
