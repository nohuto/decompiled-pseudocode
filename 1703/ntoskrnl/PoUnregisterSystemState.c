/*
 * XREFs of PoUnregisterSystemState @ 0x14022DD00
 * Callers:
 *     <none>
 * Callees:
 *     PoDeletePowerRequest @ 0x1404C7540 (PoDeletePowerRequest.c)
 */

void __stdcall PoUnregisterSystemState(PVOID StateHandle)
{
  if ( StateHandle )
    PoDeletePowerRequest(StateHandle);
}
