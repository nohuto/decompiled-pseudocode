/*
 * XREFs of PoDeletePowerRequest @ 0x1404C7540
 * Callers:
 *     PoUnregisterSystemState @ 0x14022DD00 (PoUnregisterSystemState.c)
 * Callees:
 *     PopPowerRequestCleanUp @ 0x140071694 (PopPowerRequestCleanUp.c)
 */

void __stdcall PoDeletePowerRequest(PVOID PowerRequest)
{
  PopPowerRequestCleanUp(PowerRequest);
  ObfDereferenceObject(PowerRequest);
}
