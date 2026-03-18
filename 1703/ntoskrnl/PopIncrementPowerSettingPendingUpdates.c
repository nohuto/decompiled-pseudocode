/*
 * XREFs of PopIncrementPowerSettingPendingUpdates @ 0x14006F214
 * Callers:
 *     PopSetPowerSettingValue @ 0x1404C1D4C (PopSetPowerSettingValue.c)
 *     PopDispatchPowerSettingCallbacks @ 0x1404C5030 (PopDispatchPowerSettingCallbacks.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepSetDisengageReason @ 0x14006F418 (PopDeepSleepSetDisengageReason.c)
 */

__int64 __fastcall PopIncrementPowerSettingPendingUpdates(char a1)
{
  KIRQL v2; // di
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&PopPendingPowerSettingUpdateLock);
  _InterlockedIncrement(&PopPendingPowerSettingUpdates);
  if ( a1 )
    ++PopPendingPowerSettingUpdatesQueued;
  if ( PopPendingPowerSettingUpdates == 1 )
  {
    PopPendingPowerSettingUpdateTime = MEMORY[0xFFFFF78000000008];
    PopDeepSleepSetDisengageReason(3LL);
  }
  KxReleaseSpinLock(&PopPendingPowerSettingUpdateLock);
  result = v2;
  __writecr8(v2);
  return result;
}
