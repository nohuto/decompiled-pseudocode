/*
 * XREFs of sub_1800FF2CC @ 0x1800FF2CC
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180077500 (RtlQueryProcessDebugInformation.c)
 *     sub_1800ECAC0 @ 0x1800ECAC0 (sub_1800ECAC0.c)
 * Callees:
 *     ZwPowerInformation @ 0x18009B690 (ZwPowerInformation.c)
 */

__int64 sub_1800FF2CC()
{
  ZwPowerInformation();
  return ZwClose();
}
