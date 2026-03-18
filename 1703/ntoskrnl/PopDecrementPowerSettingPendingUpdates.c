/*
 * XREFs of PopDecrementPowerSettingPendingUpdates @ 0x14006F290
 * Callers:
 *     PopSetPowerSettingValue @ 0x1404C1D4C (PopSetPowerSettingValue.c)
 *     PopDispatchPowerSettingCallbacks @ 0x1404C5030 (PopDispatchPowerSettingCallbacks.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepClearDisengageReason @ 0x14006F310 (PopDeepSleepClearDisengageReason.c)
 */

__int64 __fastcall PopDecrementPowerSettingPendingUpdates(char a1)
{
  KIRQL v2; // di
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&PopPendingPowerSettingUpdateLock);
  if ( a1 )
  {
    _InterlockedExchangeAdd(&PopPendingPowerSettingUpdates, -PopPendingPowerSettingUpdatesQueued);
    PopPendingPowerSettingUpdatesQueued = 0;
  }
  else
  {
    _InterlockedDecrement(&PopPendingPowerSettingUpdates);
  }
  if ( !PopPendingPowerSettingUpdates )
  {
    PopPendingPowerSettingUpdateTime = 0LL;
    PopDeepSleepClearDisengageReason(3LL);
  }
  KxReleaseSpinLock(&PopPendingPowerSettingUpdateLock);
  result = v2;
  __writecr8(v2);
  return result;
}
