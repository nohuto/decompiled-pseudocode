/*
 * XREFs of PopUpdateDiskIdleTimeoutSetting @ 0x14062806C
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1402783CC (PopCoalescingSetActiveState.c)
 *     PopHardDiskPowerSettingCallback @ 0x1406259A0 (PopHardDiskPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x140654BA0 (PopCoalescingPowerSettingCallback.c)
 *     PopCoalescingInitialize @ 0x1408A91EC (PopCoalescingInitialize.c)
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x14051D68C (PopSetPowerSettingValueAcDc.c)
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
