/*
 * XREFs of PopNetIsCompliantNicPresent @ 0x1406CFEBC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402301D4 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

_BOOL8 PopNetIsCompliantNicPresent()
{
  return PopNetCompliantNicCount != 0;
}
