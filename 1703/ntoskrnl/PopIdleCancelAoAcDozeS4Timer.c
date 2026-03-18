/*
 * XREFs of PopIdleCancelAoAcDozeS4Timer @ 0x140004F20
 * Callers:
 *     PopIdleGlobalUserPresenceCallback @ 0x140420820 (PopIdleGlobalUserPresenceCallback.c)
 *     PopUmpoProcessPowerMessage @ 0x1404C1A44 (PopUmpoProcessPowerMessage.c)
 *     PopIdleCsStateChanged @ 0x1406D4B54 (PopIdleCsStateChanged.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x1406D4BCC (PopUpdateSmartUserPresencePredictions.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer2 @ 0x14012ACD0 (KeCancelTimer2.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerCancelled @ 0x1406CEF2C (PopTraceSystemIdleS0LowPowerDozeTimerCancelled.c)
 */

char __fastcall PopIdleCancelAoAcDozeS4Timer(unsigned int a1)
{
  char v2; // bl
  KIRQL v3; // si

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  if ( byte_14034B0E4 )
  {
    KeCancelTimer2(&PopIdleAoAcDozeS4Timer, 0LL);
    byte_14034B0E4 = 0;
    v2 = 1;
  }
  KxReleaseSpinLock(&PopIdleAoAcDozeS4Lock);
  __writecr8(v3);
  if ( v2 )
    PopTraceSystemIdleS0LowPowerDozeTimerCancelled(a1);
  return v2;
}
