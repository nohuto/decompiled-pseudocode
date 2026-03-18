/*
 * XREFs of PopGetPolicyWorker @ 0x1400B11B4
 * Callers:
 *     PopSetNotificationWork @ 0x1400B0BE4 (PopSetNotificationWork.c)
 *     PopCheckForIdleness @ 0x1400B0C20 (PopCheckForIdleness.c)
 *     PoNotifySystemTimeSet @ 0x14015D400 (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x140240DD4 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x140240F40 (PopCoalesingTimerDpcCallback.c)
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     PopBatteryApplyCompositeState @ 0x1405C9948 (PopBatteryApplyCompositeState.c)
 *     PopExecutePowerAction @ 0x1406FCCB4 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x1406FD480 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x1406FD630 (PopPolicyWorkerActionPromote.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
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
