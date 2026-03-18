/*
 * XREFs of PpmHvConsiderNative @ 0x140139E98
 * Callers:
 *     PoInitializePrcb @ 0x1404265E8 (PoInitializePrcb.c)
 *     PpmIdleRegisterDefaultStates @ 0x1405B8098 (PpmIdleRegisterDefaultStates.c)
 *     PpmUpdateIdleStates @ 0x1405B81D0 (PpmUpdateIdleStates.c)
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
