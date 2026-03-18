/*
 * XREFs of PopBatteryAlarmPowerSettingCallback @ 0x140626020
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopBatteryUpdateAlarms @ 0x14062604C (PopBatteryUpdateAlarms.c)
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
