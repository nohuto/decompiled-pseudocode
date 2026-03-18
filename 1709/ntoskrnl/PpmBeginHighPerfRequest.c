/*
 * XREFs of PpmBeginHighPerfRequest @ 0x14015B880
 * Callers:
 *     PopSetupHighPerfPowerRequest @ 0x1405EF820 (PopSetupHighPerfPowerRequest.c)
 *     PopIssueActionRequest @ 0x1406FD0C4 (PopIssueActionRequest.c)
 *     PoUserShutdownInitiated @ 0x1406FDA60 (PoUserShutdownInitiated.c)
 *     PdcPoPerfOverride @ 0x1406FF1B0 (PdcPoPerfOverride.c)
 *     PoInitializeBroadcast @ 0x140700A98 (PoInitializeBroadcast.c)
 * Callees:
 *     PoSetPowerRequestInternal @ 0x1400B4F20 (PoSetPowerRequestInternal.c)
 */

__int64 PpmBeginHighPerfRequest()
{
  if ( PpmHighPerfPowerRequest )
    return PoSetPowerRequestInternal(PpmHighPerfPowerRequest, 4u);
  else
    return 3221225473LL;
}
