/*
 * XREFs of KeQueryTimelineBitmapTime @ 0x140025A10
 * Callers:
 *     PopEtEnergyTrackerQuery @ 0x140445B34 (PopEtEnergyTrackerQuery.c)
 *     PsQueryProcessEnergyValues @ 0x140493140 (PsQueryProcessEnergyValues.c)
 *     PoEnergyContextCleanup @ 0x1404FC9BC (PoEnergyContextCleanup.c)
 *     PoEnergyContextUpdateComponentPower @ 0x14050D500 (PoEnergyContextUpdateComponentPower.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryTimelineBitmapTime()
{
  return (unsigned int)KiTimelineBitmapTime;
}
