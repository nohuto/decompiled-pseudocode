/*
 * XREFs of PopDeepSleepClearDisengageReason @ 0x1400732CC
 * Callers:
 *     PopDecrementPowerSettingPendingUpdates @ 0x14007324C (PopDecrementPowerSettingPendingUpdates.c)
 *     PopSetPowerActionState @ 0x14014E860 (PopSetPowerActionState.c)
 *     PopDequeueQuerySetIrp @ 0x140166088 (PopDequeueQuerySetIrp.c)
 *     PopFxPlatformStateAvailable @ 0x140275BA8 (PopFxPlatformStateAvailable.c)
 *     PopCheckResiliencyScenarios @ 0x14051D450 (PopCheckResiliencyScenarios.c)
 *     PopPowerInformationInternal @ 0x140522340 (PopPowerInformationInternal.c)
 *     PopEnforceResiliencyScenarios @ 0x1405EECF8 (PopEnforceResiliencyScenarios.c)
 *     PopDirectedDripsPdcResiliencyNotification @ 0x140761BB8 (PopDirectedDripsPdcResiliencyNotification.c)
 *     PopDirectedDripsProcessWork @ 0x140761C98 (PopDirectedDripsProcessWork.c)
 *     PopDisengageDirectedDrips @ 0x140761FD4 (PopDisengageDirectedDrips.c)
 *     PopIdleAoAcDozeToS4 @ 0x14076C1C0 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x140073340 (PopDiagTraceClearDeepSleepConstraint.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     KeSetForceIdle @ 0x14024A488 (KeSetForceIdle.c)
 */

__int64 __fastcall PopDeepSleepClearDisengageReason(char a1)
{
  KIRQL v2; // al
  int v3; // r8d
  KIRQL v4; // di
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
  v3 = PopDeepSleepDisengageReasonMask;
  v4 = v2;
  PopDeepSleepDisengageReasonMask &= ~(1 << a1);
  if ( v3 != PopDeepSleepDisengageReasonMask )
  {
    PopDiagTraceClearDeepSleepConstraint();
    if ( !PopDeepSleepDisengageReasonMask )
    {
      if ( (PopAggressiveStandbyAppliedActions & 4) != 0 )
      {
        KeSetForceIdle();
        PopIsForceIdleSet = 1;
      }
      if ( !PopDeepSleepEvaluateWorkItemQueued )
      {
        PopDeepSleepEvaluateWorkItemQueued = 1;
        ExQueueWorkItem(&PopDeepSleepEvaluateWorkItem, DelayedWorkQueue);
      }
    }
  }
  KxReleaseSpinLock(&PopDeepSleepDisengageReasonLock);
  result = v4;
  __writecr8(v4);
  return result;
}
