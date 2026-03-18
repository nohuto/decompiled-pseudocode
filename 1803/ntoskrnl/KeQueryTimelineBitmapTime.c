/*
 * XREFs of KeQueryTimelineBitmapTime @ 0x140060590
 * Callers:
 *     PsQueryProcessEnergyValues @ 0x1404CE830 (PsQueryProcessEnergyValues.c)
 *     PoEnergyContextCleanup @ 0x140511194 (PoEnergyContextCleanup.c)
 *     PopEtEnergyTrackerQuery @ 0x14051D9F0 (PopEtEnergyTrackerQuery.c)
 *     PoEnergyContextUpdateComponentPower @ 0x140531AD4 (PoEnergyContextUpdateComponentPower.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryTimelineBitmapTime()
{
  return (unsigned int)KiTimelineBitmapTime;
}
