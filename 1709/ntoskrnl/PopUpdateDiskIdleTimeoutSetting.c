/*
 * XREFs of PopUpdateDiskIdleTimeoutSetting @ 0x1405CC0B0
 * Callers:
 *     PopCoalescingSetActiveState @ 0x140240E38 (PopCoalescingSetActiveState.c)
 *     PopHardDiskPowerSettingCallback @ 0x1405B8820 (PopHardDiskPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x1405F1A30 (PopCoalescingPowerSettingCallback.c)
 *     PopCoalescingInitialize @ 0x140848F38 (PopCoalescingInitialize.c)
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x1404E900C (PopSetPowerSettingValueAcDc.c)
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
