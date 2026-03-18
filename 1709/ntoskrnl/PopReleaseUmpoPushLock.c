/*
 * XREFs of PopReleaseUmpoPushLock @ 0x1404E7834
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1400B0618 (PopUmpoSendPowerMessage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 */

void PopReleaseUmpoPushLock()
{
  ExReleasePushLockEx((ULONG_PTR)&PopUmpoPushLock, 0LL);
  KeLeaveCriticalRegion();
}
