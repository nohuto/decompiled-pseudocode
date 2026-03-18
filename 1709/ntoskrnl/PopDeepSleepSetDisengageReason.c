/*
 * XREFs of PopDeepSleepSetDisengageReason @ 0x1400AF04C
 * Callers:
 *     PopIncrementPowerSettingPendingUpdates @ 0x1400AEE80 (PopIncrementPowerSettingPendingUpdates.c)
 *     PopQueueQuerySetIrp @ 0x1400B38D4 (PopQueueQuerySetIrp.c)
 *     PopFxPlatformStateAvailable @ 0x14023E838 (PopFxPlatformStateAvailable.c)
 *     PopSetPowerActionState @ 0x1402422E8 (PopSetPowerActionState.c)
 *     PopIdleAoAcDozeS4TimerCallback @ 0x14024C070 (PopIdleAoAcDozeS4TimerCallback.c)
 *     PopCheckResiliencyScenarios @ 0x1404E7F34 (PopCheckResiliencyScenarios.c)
 *     PopPowerInformationInternal @ 0x1404EA1F0 (PopPowerInformationInternal.c)
 *     PopEnforceDeepSleep @ 0x140706A34 (PopEnforceDeepSleep.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x1400AF0C8 (PopDiagTraceSetDeepSleepConstraint.c)
 *     KeClearForceIdle @ 0x14020C1F4 (KeClearForceIdle.c)
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
