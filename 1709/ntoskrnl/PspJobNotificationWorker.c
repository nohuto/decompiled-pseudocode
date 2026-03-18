/*
 * XREFs of PspJobNotificationWorker @ 0x14057F6D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 *     PspUnlockJob @ 0x1405102A0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1405102E0 (PspLockJobExclusive.c)
 *     PspSendReliableJobNotification @ 0x140512674 (PspSendReliableJobNotification.c)
 */

signed __int64 PspJobNotificationWorker()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  signed __int32 v2; // esi
  signed __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi

  do
  {
    v0 = _InterlockedExchange64(&PspJobNotificationList, -1LL);
    do
    {
      v1 = *(_QWORD *)(v0 + 968);
      _m_prefetchw((const void *)(v0 + 1304));
      v2 = _InterlockedAnd((volatile signed __int32 *)(v0 + 1304), 0xFFFDDFFF);
      if ( (v2 & 0x2000) != 0 )
        ZwUpdateWnfStateData(v0 + 880, 0LL, 0LL);
      if ( (v2 & 0x20000) != 0 )
      {
        CurrentThread = KeGetCurrentThread();
        PspLockJobExclusive(v0, (__int64)CurrentThread);
        if ( *(_QWORD *)(v0 + 456) && (*(_DWORD *)(v0 + 876) & 0x1000) != 0 )
          PspSendReliableJobNotification((PVOID)v0, 0xCu);
        PspUnlockJob(v0, (__int64)CurrentThread);
      }
      ObfDereferenceObjectWithTag((PVOID)v0, 0x6F4E7350u);
      v0 = v1;
    }
    while ( v1 && v1 != -1 );
    result = _InterlockedCompareExchange64(&PspJobNotificationList, 0LL, -1LL);
  }
  while ( result != -1 );
  return result;
}
