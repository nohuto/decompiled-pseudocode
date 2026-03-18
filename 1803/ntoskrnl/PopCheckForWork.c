/*
 * XREFs of PopCheckForWork @ 0x14007421C
 * Callers:
 *     PopCheckForIdleness @ 0x140073BB0 (PopCheckForIdleness.c)
 *     PopSetNotificationWork @ 0x140074D80 (PopSetNotificationWork.c)
 *     PoRegisterDeviceForIdleDetection @ 0x14009FA10 (PoRegisterDeviceForIdleDetection.c)
 *     PoNotifySystemTimeSet @ 0x14016E698 (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x140278368 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x1402784D0 (PopCoalesingTimerDpcCallback.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     PopBatteryApplyCompositeState @ 0x1406109C0 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
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
