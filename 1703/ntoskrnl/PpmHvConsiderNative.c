/*
 * XREFs of PpmHvConsiderNative @ 0x140155908
 * Callers:
 *     PoInitializePrcb @ 0x140411D4C (PoInitializePrcb.c)
 *     PpmIdleRegisterDefaultStates @ 0x1405A80EC (PpmIdleRegisterDefaultStates.c)
 *     PpmUpdateIdleStates @ 0x1405A8220 (PpmUpdateIdleStates.c)
 * Callees:
 *     <none>
 */

bool PpmHvConsiderNative()
{
  char v0; // cl

  v0 = 0;
  if ( !HvlHypervisorConnected )
    return 1;
  if ( (HvlpFlags & 2) != 0 )
    return (HvlEnlightenments & 0x408) == 0;
  return v0;
}
