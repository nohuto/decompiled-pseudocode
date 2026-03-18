/*
 * XREFs of PopIncrementPowerSettingPendingUpdates @ 0x1400731D0
 * Callers:
 *     PopSetPowerSettingValue @ 0x140518FC4 (PopSetPowerSettingValue.c)
 *     PopDispatchPowerSettingCallbacks @ 0x14051C360 (PopDispatchPowerSettingCallbacks.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepSetDisengageReason @ 0x1400733E0 (PopDeepSleepSetDisengageReason.c)
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
