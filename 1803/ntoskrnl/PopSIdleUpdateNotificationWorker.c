/*
 * XREFs of PopSIdleUpdateNotificationWorker @ 0x1400D1BB0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1400CF7E4 (PopQueueWorkItem.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopDiagTraceSIdleUpdateNotificationWorker @ 0x140768FA4 (PopDiagTraceSIdleUpdateNotificationWorker.c)
 */

char PopSIdleUpdateNotificationWorker()
{
  char v0; // bl
  char result; // al
  __int64 v2; // rcx
  int v3; // edi
  __int64 v4; // rcx
  char v5; // bl

  ((void (*)(void))PopAcquirePolicyLock)();
  v0 = byte_1403A9FD0;
  result = PopReleasePolicyLock();
  v3 = 0;
  if ( v0 != PopSIdleLastUpdateNotificationState )
  {
    if ( qword_1403D1448 )
    {
      LOBYTE(v2) = v0;
      v3 = qword_1403D1448(v2);
    }
    LOBYTE(v2) = v0;
    result = PopDiagTraceSIdleUpdateNotificationWorker(v2);
    if ( !v3 )
      PopSIdleLastUpdateNotificationState = v0;
  }
  v4 = (unsigned int)_InterlockedExchange(&dword_1403A7DC0, 0);
  if ( !v3 )
  {
    PopAcquirePolicyLock(v4);
    v5 = byte_1403A9FD0;
    result = PopReleasePolicyLock();
    if ( v5 != PopSIdleLastUpdateNotificationState )
      return PopQueueWorkItem((__int64)&PopSIdleUpdateNotificationWorkItem, DelayedWorkQueue);
  }
  return result;
}
