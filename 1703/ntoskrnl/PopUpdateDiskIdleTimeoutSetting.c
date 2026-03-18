/*
 * XREFs of PopUpdateDiskIdleTimeoutSetting @ 0x1405A880C
 * Callers:
 *     PopCoalescingSetActiveState @ 0x14022D8DC (PopCoalescingSetActiveState.c)
 *     PopHardDiskPowerSettingCallback @ 0x1405C2F30 (PopHardDiskPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x1405D5430 (PopCoalescingPowerSettingCallback.c)
 *     PopCoalescingInitialize @ 0x14080C6EC (PopCoalescingInitialize.c)
 * Callees:
 *     <none>
 */

__int64 PopUpdateDiskIdleTimeoutSetting()
{
  int v0; // ecx
  __int64 result; // rax

  v0 = PopDiskIdleTimeout;
  if ( (PopCoalescingState & 1) != 0 )
    v0 = PopDiskCoalescingTimeout;
  if ( v0 != PopCurrentDiskIdleTimeout )
  {
    PopCurrentDiskIdleTimeout = v0;
    return PopSetPowerSettingValueAcDc(&GUID_DISK_IDLE_TIMEOUT, 4u, &PopCurrentDiskIdleTimeout);
  }
  return result;
}
