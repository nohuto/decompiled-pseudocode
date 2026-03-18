/*
 * XREFs of PopGetPolicyWorker @ 0x140074BCC
 * Callers:
 *     PopCheckForIdleness @ 0x140073BB0 (PopCheckForIdleness.c)
 *     PopSetNotificationWork @ 0x140074D80 (PopSetNotificationWork.c)
 *     PoNotifySystemTimeSet @ 0x14016E698 (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x140278368 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x1402784D0 (PopCoalesingTimerDpcCallback.c)
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     PopExecutePowerAction @ 0x1405EB7B4 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x1405EBDD0 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x1405EF2E0 (PopPolicyWorkerActionPromote.c)
 *     PopBatteryApplyCompositeState @ 0x1406109C0 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopGetPolicyWorker(int a1)
{
  KIRQL v2; // al
  unsigned __int64 v3; // rbx

  v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
  PopWorkerPending |= a1;
  v3 = v2;
  KxReleaseSpinLock(&PopWorkerSpinLock);
  __writecr8(v3);
}
