/*
 * XREFs of PopIdleCancelAoAcDozeS4Timer @ 0x140077584
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x140518B54 (PopUmpoProcessPowerMessage.c)
 *     PopIdleGlobalUserPresenceCallback @ 0x140526B10 (PopIdleGlobalUserPresenceCallback.c)
 *     PopIdleCsStateChanged @ 0x14076C2B4 (PopIdleCsStateChanged.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14076C37C (PopUpdateSmartUserPresencePredictions.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer2 @ 0x1400873D0 (KeCancelTimer2.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerCancelled @ 0x14076A4CC (PopTraceSystemIdleS0LowPowerDozeTimerCancelled.c)
 */

char __fastcall PopIdleCancelAoAcDozeS4Timer(unsigned int a1)
{
  char v2; // bl
  KIRQL v3; // si

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  if ( byte_1403A9FC4 )
  {
    KeCancelTimer2(&PopIdleAoAcDozeS4Timer);
    byte_1403A9FC4 = 0;
    v2 = 1;
  }
  KxReleaseSpinLock(&PopIdleAoAcDozeS4Lock);
  __writecr8(v3);
  if ( v2 )
    PopTraceSystemIdleS0LowPowerDozeTimerCancelled(a1);
  return v2;
}
