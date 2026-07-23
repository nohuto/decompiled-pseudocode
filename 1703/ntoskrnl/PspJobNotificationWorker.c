/*
 * XREFs of PspJobNotificationWorker @ 0x14044A260
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 *     PspSendReliableJobNotification @ 0x14044A380 (PspSendReliableJobNotification.c)
 *     PspUnlockJob @ 0x140479650 (PspUnlockJob.c)
 */

signed __int64 PspJobNotificationWorker()
{
  __int64 v0; // rbx
  __int64 v1; // rsi
  signed __int32 v2; // edi
  signed __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdi

  do
  {
    v0 = _InterlockedExchange64(&PspJobNotificationList, -1LL);
    do
    {
      v1 = *(_QWORD *)(v0 + 968);
      _m_prefetchw((const void *)(v0 + 1304));
      v2 = _InterlockedAnd((volatile signed __int32 *)(v0 + 1304), 0xFFFDDFFF);
      if ( (v2 & 0x2000) != 0 )
        ZwUpdateWnfStateData((PCWNF_STATE_NAME)(v0 + 880), 0LL, 0, 0LL, 0LL, 0, 0);
      if ( (v2 & 0x20000) != 0 )
      {
        CurrentThread = KeGetCurrentThread();
        if ( CurrentThread )
          --CurrentThread->SpecialApcDisable;
        ExAcquireResourceExclusiveLite((PERESOURCE)(v0 + 56), 1u);
        if ( *(_QWORD *)(v0 + 456) && (*(_DWORD *)(v0 + 876) & 0x1000) != 0 )
          PspSendReliableJobNotification((PVOID)v0);
        PspUnlockJob(v0, CurrentThread);
      }
      ObfDereferenceObject((PVOID)v0);
      v0 = v1;
    }
    while ( v1 && v1 != -1 );
    result = _InterlockedCompareExchange64(&PspJobNotificationList, 0LL, -1LL);
  }
  while ( result != -1 );
  return result;
}
