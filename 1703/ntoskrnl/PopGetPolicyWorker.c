/*
 * XREFs of PopGetPolicyWorker @ 0x1400701C0
 * Callers:
 *     PopSetNotificationWork @ 0x14006FD70 (PopSetNotificationWork.c)
 *     PopCheckForIdleness @ 0x140070D60 (PopCheckForIdleness.c)
 *     PoNotifySystemTimeSet @ 0x14014B7EC (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x14022D878 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x14022D9E0 (PopCoalesingTimerDpcCallback.c)
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PopPolicyWorkerAction @ 0x1405767C0 (PopPolicyWorkerAction.c)
 *     PopExecutePowerAction @ 0x140577024 (PopExecutePowerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x14057A2B0 (PopPolicyWorkerActionPromote.c)
 *     PopBatteryApplyCompositeState @ 0x14058289C (PopBatteryApplyCompositeState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
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
