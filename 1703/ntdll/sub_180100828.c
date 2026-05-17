/*
 * XREFs of sub_180100828 @ 0x180100828
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180067770 (RtlQueryProcessDebugInformation.c)
 *     sub_1800F096C @ 0x1800F096C (sub_1800F096C.c)
 * Callees:
 *     ZwPowerInformation @ 0x1800A5ED0 (ZwPowerInformation.c)
 */

__int64 sub_180100828()
{
  ZwPowerInformation();
  return ZwClose();
}
