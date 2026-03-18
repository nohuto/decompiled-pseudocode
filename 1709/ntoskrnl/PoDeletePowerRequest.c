/*
 * XREFs of PoDeletePowerRequest @ 0x1405E7630
 * Callers:
 *     PoUnregisterSystemState @ 0x1402412E0 (PoUnregisterSystemState.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PopPowerRequestCleanUp @ 0x1400AFDC8 (PopPowerRequestCleanUp.c)
 */

void __stdcall PoDeletePowerRequest(PVOID PowerRequest)
{
  PopPowerRequestCleanUp((PVOID *)PowerRequest);
  ObfDereferenceObject(PowerRequest);
}
