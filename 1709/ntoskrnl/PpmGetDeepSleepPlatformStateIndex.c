/*
 * XREFs of PpmGetDeepSleepPlatformStateIndex @ 0x14023ABF0
 * Callers:
 *     PopFxEnablePlatformStates @ 0x14023DEE4 (PopFxEnablePlatformStates.c)
 *     PopCheckResiliencyScenarios @ 0x1404E7F34 (PopCheckResiliencyScenarios.c)
 *     PpmEnableCoordinatedIdleStates @ 0x1406F5CE4 (PpmEnableCoordinatedIdleStates.c)
 * Callees:
 *     <none>
 */

__int64 PpmGetDeepSleepPlatformStateIndex()
{
  if ( PpmPlatformStates && *(_DWORD *)PpmPlatformStates )
    return (unsigned int)(*(_DWORD *)PpmPlatformStates - 1);
  else
    return 0xFFFFFFFFLL;
}
