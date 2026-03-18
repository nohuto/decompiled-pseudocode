/*
 * XREFs of PopDeepSleepClearDisengageReason @ 0x14006F310
 * Callers:
 *     PopDecrementPowerSettingPendingUpdates @ 0x14006F290 (PopDecrementPowerSettingPendingUpdates.c)
 *     PopSetPowerActionState @ 0x140138370 (PopSetPowerActionState.c)
 *     PopDequeueQuerySetIrp @ 0x140144CE4 (PopDequeueQuerySetIrp.c)
 *     PopFxPlatformStateAvailable @ 0x14022B4C8 (PopFxPlatformStateAvailable.c)
 *     PopCheckResiliencyScenarios @ 0x1404C5510 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x140579E38 (PopEnforceResiliencyScenarios.c)
 *     PopIdleAoAcDozeToS4 @ 0x1406D4A60 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x14006F388 (PopDiagTraceClearDeepSleepConstraint.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     KeSetForceIdle @ 0x140205CBC (KeSetForceIdle.c)
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
