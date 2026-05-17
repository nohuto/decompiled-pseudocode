/*
 * XREFs of RtlRestoreSystemBootStatusDefaults @ 0x1800E6E90
 * Callers:
 *     <none>
 * Callees:
 *     ZwPowerInformation @ 0x18009B690 (ZwPowerInformation.c)
 */

__int64 RtlRestoreSystemBootStatusDefaults()
{
  return ZwPowerInformation();
}
