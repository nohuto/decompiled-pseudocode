/*
 * XREFs of PpmBeginHighPerfRequest @ 0x14016E780
 * Callers:
 *     PoUserShutdownInitiated @ 0x1405EBBD0 (PoUserShutdownInitiated.c)
 *     PopIssueActionRequest @ 0x1405EBF50 (PopIssueActionRequest.c)
 *     PoInitializeBroadcast @ 0x1405ECC84 (PoInitializeBroadcast.c)
 *     PopSetupHighPerfPowerRequest @ 0x14062754C (PopSetupHighPerfPowerRequest.c)
 *     PdcPoPerfOverride @ 0x140764B40 (PdcPoPerfOverride.c)
 * Callees:
 *     PoSetPowerRequestInternal @ 0x140076428 (PoSetPowerRequestInternal.c)
 */

__int64 PpmBeginHighPerfRequest()
{
  if ( PpmHighPerfPowerRequest )
    return PoSetPowerRequestInternal(PpmHighPerfPowerRequest, 4u);
  else
    return 3221225473LL;
}
