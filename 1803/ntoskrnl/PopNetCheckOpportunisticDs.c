/*
 * XREFs of PopNetCheckOpportunisticDs @ 0x14076B81C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14027B24C (PopCaptureSleepStudyStatistics.c)
 *     PopEvaluateAggressiveStandbyActions @ 0x14075EEA8 (PopEvaluateAggressiveStandbyActions.c)
 *     PopPowerAggregatorWorker @ 0x14076AC00 (PopPowerAggregatorWorker.c)
 * Callees:
 *     <none>
 */

bool PopNetCheckOpportunisticDs()
{
  bool result; // al

  result = 0;
  if ( !PopNetBIRequestActive && !PopLidOpened )
    return dword_1403AAA78 == 2;
  return result;
}
