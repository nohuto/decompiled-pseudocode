/*
 * XREFs of PopDeepSleepClearDisengageReason @ 0x1400AEF7C
 * Callers:
 *     PopDecrementPowerSettingPendingUpdates @ 0x1400AEEFC (PopDecrementPowerSettingPendingUpdates.c)
 *     PopDequeueQuerySetIrp @ 0x140123128 (PopDequeueQuerySetIrp.c)
 *     PopFxPlatformStateAvailable @ 0x14023E838 (PopFxPlatformStateAvailable.c)
 *     PopSetPowerActionState @ 0x1402422E8 (PopSetPowerActionState.c)
 *     PopCheckResiliencyScenarios @ 0x1404E7F34 (PopCheckResiliencyScenarios.c)
 *     PopPowerInformationInternal @ 0x1404EA1F0 (PopPowerInformationInternal.c)
 *     PopEnforceDeepSleep @ 0x140706A34 (PopEnforceDeepSleep.c)
 *     PopIdleAoAcDozeToS4 @ 0x14070A2F0 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x1400AEFF4 (PopDiagTraceClearDeepSleepConstraint.c)
 *     KeSetForceIdle @ 0x14020C2A0 (KeSetForceIdle.c)
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
