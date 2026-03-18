/*
 * XREFs of PopNetCheckOpportunisticDs @ 0x1407079DC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140244A94 (PopCaptureSleepStudyStatistics.c)
 *     PopEvaluateAggressiveStandbyActions @ 0x1406F76AC (PopEvaluateAggressiveStandbyActions.c)
 * Callees:
 *     <none>
 */

bool PopNetCheckOpportunisticDs()
{
  bool result; // al

  result = 0;
  if ( !PopNetBIRequestActive && !PopLidOpened )
    return dword_1403661F8 == 2;
  return result;
}
