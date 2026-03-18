/*
 * XREFs of PoDeletePowerRequest @ 0x140524D60
 * Callers:
 *     PoUnregisterSystemState @ 0x1402787F0 (PoUnregisterSystemState.c)
 * Callees:
 *     PopPowerRequestCleanUp @ 0x140075F04 (PopPowerRequestCleanUp.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 */

void __stdcall PoDeletePowerRequest(PVOID PowerRequest)
{
  PopPowerRequestCleanUp((PVOID *)PowerRequest);
  ObfDereferenceObject(PowerRequest);
}
