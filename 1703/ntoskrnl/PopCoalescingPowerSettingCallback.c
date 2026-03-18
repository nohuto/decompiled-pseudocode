/*
 * XREFs of PopCoalescingPowerSettingCallback @ 0x1405D5430
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopCheckResiliencyScenarios @ 0x1404C5510 (PopCheckResiliencyScenarios.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x1405A880C (PopUpdateDiskIdleTimeoutSetting.c)
 */

__int64 __fastcall PopCoalescingPowerSettingCallback(_QWORD *a1, int *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r9
  int v8; // eax

  v6 = -1073741811;
  PopAcquirePolicyLock();
  v7 = *(_QWORD *)&GUID_DISK_COALESCING_POWERDOWN_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_DISK_COALESCING_POWERDOWN_TIMEOUT.Data1 == *a1 )
    v7 = *(_QWORD *)GUID_DISK_COALESCING_POWERDOWN_TIMEOUT.Data4 - a1[1];
  if ( !v7 && a3 == 4 && a2 )
  {
    PopDppeCoalescingSpindownTimeout = *a2;
    v8 = PopDppeCoalescingSpindownTimeout;
    if ( !PopDppeCoalescingSpindownTimeout )
      v8 = -1;
    if ( v8 != PopDiskCoalescingTimeout )
    {
      PopDiskCoalescingTimeout = v8;
      PopUpdateDiskIdleTimeoutSetting();
    }
    PopCheckResiliencyScenarios();
    v6 = 0;
  }
  PopReleasePolicyLock();
  return v6;
}
