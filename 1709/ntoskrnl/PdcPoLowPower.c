/*
 * XREFs of PdcPoLowPower @ 0x14015A870
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404E900C (PopSetPowerSettingValueAcDc.c)
 */

__int64 __fastcall PdcPoLowPower(__int64 a1, __int64 a2)
{
  PopAcquirePolicyLock(a1, a2);
  PopSetPowerSettingValueAcDc(&GUID_LOW_POWER_EPOCH);
  PopReleasePolicyLock();
  return 0LL;
}
