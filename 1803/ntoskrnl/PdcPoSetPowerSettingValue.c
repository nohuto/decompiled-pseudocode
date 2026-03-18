/*
 * XREFs of PdcPoSetPowerSettingValue @ 0x140764E90
 * Callers:
 *     <none>
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x14051D68C (PopSetPowerSettingValueAcDc.c)
 */

__int64 __fastcall PdcPoSetPowerSettingValue(const GUID *a1, unsigned int a2, void *a3)
{
  return PopSetPowerSettingValueAcDc(a1, a2, a3);
}
