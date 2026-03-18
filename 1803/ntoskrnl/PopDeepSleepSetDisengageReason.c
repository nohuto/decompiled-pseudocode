/*
 * XREFs of PopDeepSleepSetDisengageReason @ 0x1400733E0
 * Callers:
 *     PopIncrementPowerSettingPendingUpdates @ 0x1400731D0 (PopIncrementPowerSettingPendingUpdates.c)
 *     PopSetPowerActionState @ 0x14014E860 (PopSetPowerActionState.c)
 *     PopQueueQuerySetIrp @ 0x140167738 (PopQueueQuerySetIrp.c)
 *     PopFxPlatformStateAvailable @ 0x140275BA8 (PopFxPlatformStateAvailable.c)
 *     PopIdleAoAcDozeS4TimerCallback @ 0x14027FEA0 (PopIdleAoAcDozeS4TimerCallback.c)
 *     PopCheckResiliencyScenarios @ 0x14051D450 (PopCheckResiliencyScenarios.c)
 *     PopPowerInformationInternal @ 0x140522340 (PopPowerInformationInternal.c)
 *     PopEnforceResiliencyScenarios @ 0x1405EECF8 (PopEnforceResiliencyScenarios.c)
 *     PopDirectedDripsPdcResiliencyNotification @ 0x140761BB8 (PopDirectedDripsPdcResiliencyNotification.c)
 *     PopDirectedDripsProcessWork @ 0x140761C98 (PopDirectedDripsProcessWork.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x140073454 (PopDiagTraceSetDeepSleepConstraint.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     KeClearForceIdle @ 0x14024A3AC (KeClearForceIdle.c)
 */

__int64 __fastcall PopDeepSleepSetDisengageReason(char a1)
{
  KIRQL v2; // al
  int v3; // ebx
  KIRQL v4; // si
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
  v3 = PopDeepSleepDisengageReasonMask;
  v4 = v2;
  PopDeepSleepDisengageReasonMask |= 1 << a1;
  if ( v3 != PopDeepSleepDisengageReasonMask )
  {
    PopDiagTraceSetDeepSleepConstraint();
    if ( !v3 )
    {
      if ( PopIsForceIdleSet )
      {
        KeClearForceIdle();
        PopIsForceIdleSet = 0;
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
