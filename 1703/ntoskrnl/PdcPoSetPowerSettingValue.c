/*
 * XREFs of PdcPoSetPowerSettingValue @ 0x1406CB540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall PdcPoSetPowerSettingValue(LPCGUID SettingGuid, unsigned int a2, void *Src)
{
  return PopSetPowerSettingValueAcDc(SettingGuid, a2, Src);
}
