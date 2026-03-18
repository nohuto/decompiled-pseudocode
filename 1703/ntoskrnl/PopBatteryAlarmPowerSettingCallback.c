/*
 * XREFs of PopBatteryAlarmPowerSettingCallback @ 0x1405C3620
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopBatteryUpdateAlarms @ 0x1405C364C (PopBatteryUpdateAlarms.c)
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
