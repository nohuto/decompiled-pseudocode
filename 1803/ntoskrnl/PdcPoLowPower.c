/*
 * XREFs of PdcPoLowPower @ 0x140185310
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x14051D68C (PopSetPowerSettingValueAcDc.c)
 */

__int64 __fastcall PdcPoLowPower(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8

  PopAcquirePolicyLock(a1);
  PopSetPowerSettingValueAcDc(&GUID_LOW_POWER_EPOCH);
  PopReleasePolicyLock(v2, v1, v3);
  return 0LL;
}
