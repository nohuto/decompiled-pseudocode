/*
 * XREFs of PopNetCheckUserConnectivityPolicy @ 0x1406CFD8C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402301D4 (PopCaptureSleepStudyStatistics.c)
 *     PopEvaluateAggressiveStandbyActions @ 0x1406C6F18 (PopEvaluateAggressiveStandbyActions.c)
 * Callees:
 *     <none>
 */

__int64 PopNetCheckUserConnectivityPolicy()
{
  __int64 result; // rax

  result = 0LL;
  if ( PopNetCompliantMbnPresent || dword_14034BB78 && (dword_14034BB78 != 2 || PopLidOpened) )
    return 1LL;
  return result;
}
