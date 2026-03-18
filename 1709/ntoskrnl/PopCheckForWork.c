/*
 * XREFs of PopCheckForWork @ 0x1400B0F0C
 * Callers:
 *     PopSetNotificationWork @ 0x1400B0BE4 (PopSetNotificationWork.c)
 *     PopCheckForIdleness @ 0x1400B0C20 (PopCheckForIdleness.c)
 *     PoRegisterDeviceForIdleDetection @ 0x1400FAD80 (PoRegisterDeviceForIdleDetection.c)
 *     PoNotifySystemTimeSet @ 0x14015D400 (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x140240DD4 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x140240F40 (PopCoalesingTimerDpcCallback.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     PopBatteryApplyCompositeState @ 0x1405C9948 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

struct _KTHREAD *PopCheckForWork()
{
  struct _KTHREAD *result; // rax
  KIRQL v1; // bl

  result = (struct _KTHREAD *)(unsigned int)PopWorkerStatus;
  if ( (PopWorkerStatus & PopWorkerPending) != 0 )
  {
    result = KeGetCurrentThread();
    if ( (struct _KTHREAD *)PopPolicyLockThread != result )
    {
      v1 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
      if ( PopWorkerStatus < 0 )
      {
        PopWorkerStatus &= ~0x80000000;
        ExQueueWorkItem(&PopPolicyWorker, DelayedWorkQueue);
      }
      KxReleaseSpinLock(&PopWorkerSpinLock);
      result = (struct _KTHREAD *)v1;
      __writecr8(v1);
    }
  }
  return result;
}
