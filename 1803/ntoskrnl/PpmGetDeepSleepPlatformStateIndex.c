/*
 * XREFs of PpmGetDeepSleepPlatformStateIndex @ 0x140272020
 * Callers:
 *     PopFxEnablePlatformStates @ 0x1402752A4 (PopFxEnablePlatformStates.c)
 *     PopCheckResiliencyScenarios @ 0x14051D450 (PopCheckResiliencyScenarios.c)
 *     PpmEnableCoordinatedIdleStates @ 0x14075D918 (PpmEnableCoordinatedIdleStates.c)
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
