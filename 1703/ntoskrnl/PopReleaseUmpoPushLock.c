/*
 * XREFs of PopReleaseUmpoPushLock @ 0x1404C70FC
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x14007210C (PopUmpoSendPowerMessage.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 */

void PopReleaseUmpoPushLock()
{
  ExReleasePushLockEx((ULONG_PTR)&PopUmpoPushLock, 0LL);
  KeLeaveCriticalRegion();
}
