/*
 * XREFs of PopIdleCancelAoAcDozeS4Timer @ 0x140132AA4
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1404DF408 (PopUmpoProcessPowerMessage.c)
 *     PopIdleGlobalUserPresenceCallback @ 0x1405A0140 (PopIdleGlobalUserPresenceCallback.c)
 *     PopIdleCsStateChanged @ 0x14070A3E4 (PopIdleCsStateChanged.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14070A4AC (PopUpdateSmartUserPresencePredictions.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer2 @ 0x1400E3990 (KeCancelTimer2.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerCancelled @ 0x1407065A0 (PopTraceSystemIdleS0LowPowerDozeTimerCancelled.c)
 */

char __fastcall PopIdleCancelAoAcDozeS4Timer(unsigned int a1)
{
  char v2; // bl
  KIRQL v3; // si

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  if ( byte_140365744 )
  {
    KeCancelTimer2((__int64)&PopIdleAoAcDozeS4Timer);
    byte_140365744 = 0;
    v2 = 1;
  }
  KxReleaseSpinLock(&PopIdleAoAcDozeS4Lock);
  __writecr8(v3);
  if ( v2 )
    PopTraceSystemIdleS0LowPowerDozeTimerCancelled(a1);
  return v2;
}
