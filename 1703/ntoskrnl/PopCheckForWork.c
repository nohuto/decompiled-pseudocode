/*
 * XREFs of PopCheckForWork @ 0x140070144
 * Callers:
 *     PoRegisterDeviceForIdleDetection @ 0x140005970 (PoRegisterDeviceForIdleDetection.c)
 *     PopSetNotificationWork @ 0x14006FD70 (PopSetNotificationWork.c)
 *     PopCheckForIdleness @ 0x140070D60 (PopCheckForIdleness.c)
 *     PoNotifySystemTimeSet @ 0x14014B7EC (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x14022D878 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x14022D9E0 (PopCoalesingTimerDpcCallback.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PopBatteryApplyCompositeState @ 0x14058289C (PopBatteryApplyCompositeState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
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
