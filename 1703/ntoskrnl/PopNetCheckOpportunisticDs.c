/*
 * XREFs of PopNetCheckOpportunisticDs @ 0x1406CFD64
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402301D4 (PopCaptureSleepStudyStatistics.c)
 *     PopEvaluateAggressiveStandbyActions @ 0x1406C6F18 (PopEvaluateAggressiveStandbyActions.c)
 * Callees:
 *     <none>
 */

_BOOL8 PopNetCheckOpportunisticDs()
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( !PopNetCompliantMbnPresent && !PopNetBIRequestActive )
    return PopLidOpened == 0;
  return result;
}
