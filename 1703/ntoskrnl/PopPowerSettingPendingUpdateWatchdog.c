/*
 * XREFs of PopPowerSettingPendingUpdateWatchdog @ 0x14022DB48
 * Callers:
 *     PopDeepSleepWatchdogTakeAction @ 0x1406D4D0C (PopDeepSleepWatchdogTakeAction.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

bool __fastcall PopPowerSettingPendingUpdateWatchdog(unsigned __int64 a1)
{
  bool v2; // bl
  KIRQL v3; // di

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopPendingPowerSettingUpdateLock);
  if ( PopPendingPowerSettingUpdateTime )
    v2 = MEMORY[0xFFFFF78000000008] - PopPendingPowerSettingUpdateTime >= a1;
  KxReleaseSpinLock(&PopPendingPowerSettingUpdateLock);
  __writecr8(v3);
  return v2;
}
