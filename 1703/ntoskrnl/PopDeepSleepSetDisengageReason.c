/*
 * XREFs of PopDeepSleepSetDisengageReason @ 0x14006F418
 * Callers:
 *     PopIncrementPowerSettingPendingUpdates @ 0x14006F214 (PopIncrementPowerSettingPendingUpdates.c)
 *     PopSetPowerActionState @ 0x140138370 (PopSetPowerActionState.c)
 *     PopQueueQuerySetIrp @ 0x140146394 (PopQueueQuerySetIrp.c)
 *     PopFxPlatformStateAvailable @ 0x14022B4C8 (PopFxPlatformStateAvailable.c)
 *     PopIdleAoAcDozeS4TimerCallback @ 0x140236E60 (PopIdleAoAcDozeS4TimerCallback.c)
 *     PopCheckResiliencyScenarios @ 0x1404C5510 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x140579E38 (PopEnforceResiliencyScenarios.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x14006F494 (PopDiagTraceSetDeepSleepConstraint.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     KeClearForceIdle @ 0x140205C10 (KeClearForceIdle.c)
 */

__int64 __fastcall PopDeepSleepSetDisengageReason(char a1)
{
  KIRQL v2; // al
  int v3; // edi
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
