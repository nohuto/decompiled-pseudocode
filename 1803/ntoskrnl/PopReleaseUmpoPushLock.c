/*
 * XREFs of PopReleaseUmpoPushLock @ 0x14052491C
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1400760DC (PopUmpoSendPowerMessage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

void __fastcall PopReleaseUmpoPushLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ExReleasePushLockEx((ULONG_PTR)&PopUmpoPushLock, 0LL, a3, a4);
  KeLeaveCriticalRegion();
}
