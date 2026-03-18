/*
 * XREFs of PoUnregisterSystemState @ 0x1402787F0
 * Callers:
 *     <none>
 * Callees:
 *     PoDeletePowerRequest @ 0x140524D60 (PoDeletePowerRequest.c)
 */

void __stdcall PoUnregisterSystemState(PVOID StateHandle)
{
  if ( StateHandle )
    PoDeletePowerRequest(StateHandle);
}
