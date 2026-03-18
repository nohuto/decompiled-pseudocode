/*
 * XREFs of PpmBeginHighPerfRequest @ 0x14014B768
 * Callers:
 *     PoUserShutdownInitiated @ 0x1405768F0 (PoUserShutdownInitiated.c)
 *     PopIssueActionRequest @ 0x140576C20 (PopIssueActionRequest.c)
 *     PoInitializeBroadcast @ 0x140578768 (PoInitializeBroadcast.c)
 *     PopSetupHighPerfPowerRequest @ 0x1405D5CC8 (PopSetupHighPerfPowerRequest.c)
 *     PdcPoPerfOverride @ 0x1406CB210 (PdcPoPerfOverride.c)
 * Callees:
 *     <none>
 */

__int64 PpmBeginHighPerfRequest()
{
  if ( PopTransitionHighPerfRequest )
    return PoSetPowerRequestInternal(PopTransitionHighPerfRequest, 4u);
  else
    return 3221225473LL;
}
