/*
 * XREFs of PoUnregisterSystemState @ 0x1402412E0
 * Callers:
 *     <none>
 * Callees:
 *     PoDeletePowerRequest @ 0x1405E7630 (PoDeletePowerRequest.c)
 */

void __stdcall PoUnregisterSystemState(PVOID StateHandle)
{
  if ( StateHandle )
    PoDeletePowerRequest(StateHandle);
}
