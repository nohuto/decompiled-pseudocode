/*
 * XREFs of PopDecrementPowerSettingPendingUpdates @ 0x14007324C
 * Callers:
 *     PopSetPowerSettingValue @ 0x140518FC4 (PopSetPowerSettingValue.c)
 *     PopDispatchPowerSettingCallbacks @ 0x14051C360 (PopDispatchPowerSettingCallbacks.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepClearDisengageReason @ 0x1400732CC (PopDeepSleepClearDisengageReason.c)
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
