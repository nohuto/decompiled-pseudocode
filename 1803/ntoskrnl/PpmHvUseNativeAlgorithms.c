/*
 * XREFs of PpmHvUseNativeAlgorithms @ 0x140171CE8
 * Callers:
 *     PoInitializePrcb @ 0x14047B368 (PoInitializePrcb.c)
 *     PpmIdleRegisterDefaultStates @ 0x14062769C (PpmIdleRegisterDefaultStates.c)
 *     PpmUpdateIdleStates @ 0x1406277D0 (PpmUpdateIdleStates.c)
 * Callees:
 *     <none>
 */

bool PpmHvUseNativeAlgorithms()
{
  char v0; // cl

  v0 = 0;
  if ( !HvlHypervisorConnected )
    return 1;
  if ( (HvlpFlags & 2) != 0 )
    return (HvlEnlightenments & 0x408) == 0;
  return v0;
}
