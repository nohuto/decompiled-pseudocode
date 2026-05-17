/*
 * XREFs of RtlRestoreSystemBootStatusDefaults @ 0x1800EACD0
 * Callers:
 *     <none>
 * Callees:
 *     NtPowerInformation @ 0x1800A0C90 (NtPowerInformation.c)
 */

__int64 RtlRestoreSystemBootStatusDefaults()
{
  return NtPowerInformation();
}
