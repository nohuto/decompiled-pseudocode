/*
 * XREFs of KeQueryTimelineBitmapTime @ 0x1401FD9A4
 * Callers:
 *     PoEnergyContextCleanup @ 0x140498B70 (PoEnergyContextCleanup.c)
 *     PsQueryProcessEnergyValues @ 0x1405400F0 (PsQueryProcessEnergyValues.c)
 *     PoEnergyContextUpdateComponentPower @ 0x1406D031C (PoEnergyContextUpdateComponentPower.c)
 *     PopEtEnergyTrackerQuery @ 0x1406D1744 (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryTimelineBitmapTime()
{
  return (unsigned int)KiTimelineBitmapTime;
}
