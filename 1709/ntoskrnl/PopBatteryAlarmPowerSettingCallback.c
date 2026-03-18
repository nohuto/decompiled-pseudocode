/*
 * XREFs of PopBatteryAlarmPowerSettingCallback @ 0x1405B8FE0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopBatteryUpdateAlarms @ 0x1405B900C (PopBatteryUpdateAlarms.c)
 */

__int64 __fastcall PopBatteryAlarmPowerSettingCallback(
        LPCGUID SettingGuid,
        PVOID Value,
        ULONG ValueLength,
        PVOID Context)
{
  unsigned int v4; // ebx
  unsigned int updated; // ebx

  v4 = (unsigned int)Context;
  PopAcquirePolicyLock();
  updated = PopBatteryUpdateAlarms(0LL, v4);
  PopReleasePolicyLock();
  return updated;
}
