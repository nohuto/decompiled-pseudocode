/*
 * XREFs of PpmEndHighPerfRequest @ 0x14014AF90
 * Callers:
 *     PopUserShutdownCancelled @ 0x140576B08 (PopUserShutdownCancelled.c)
 *     PopIssueActionRequest @ 0x140576C20 (PopIssueActionRequest.c)
 *     PoClearBroadcast @ 0x140577BB0 (PoClearBroadcast.c)
 *     PopSetupHighPerfPowerRequest @ 0x1405D5CC8 (PopSetupHighPerfPowerRequest.c)
 *     PdcPoPerfOverride @ 0x1406CB210 (PdcPoPerfOverride.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmEndHighPerfRequest(int a1, __int64 a2)
{
  return PoClearPowerRequestInternalDeferred(PpmHighPerfDuration, a2, (unsigned int)PpmHighPerfDuration[a1]);
}
