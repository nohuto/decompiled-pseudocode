/*
 * XREFs of EtwpReferenceLoggerSecurityDescriptor @ 0x1404F1C0C
 * Callers:
 *     EtwpCheckLoggerControlAccess @ 0x1404F1C84 (EtwpCheckLoggerControlAccess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14070C7F8 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ObDereferenceSecurityDescriptor @ 0x1404F48A0 (ObDereferenceSecurityDescriptor.c)
 */

unsigned __int64 __fastcall EtwpReferenceLoggerSecurityDescriptor(__int64 a1)
{
  signed __int64 v2; // rbx
  signed __int64 v3; // rax
  int v4; // eax
  unsigned __int64 v5; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  struct _KTHREAD *CurrentThread; // rax

  _m_prefetchw((const void *)(a1 + 784));
  v2 = *(_QWORD *)(a1 + 784);
  if ( (v2 & 0xF) != 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 784), v2 - 1, v2);
      if ( v2 == v3 )
        break;
      v2 = v3;
    }
    while ( (v3 & 0xF) != 0 );
  }
  v4 = v2 & 0xF;
  if ( (v2 & 0xF) != 0 )
  {
    v5 = v2 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v4 == 1 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 - 16), 0xFuLL) <= 0 )
        __fastfail(0xEu);
      _m_prefetchw((const void *)(a1 + 784));
      v7 = *(_QWORD *)(a1 + 784);
      while ( (unsigned __int64)(v7 & 0xF) + 15 <= 0xF && v5 == (v7 & 0xFFFFFFFFFFFFFFF0uLL) )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 784), v7 + 15, v7);
        if ( v8 == v7 )
          return v5;
      }
      ObDereferenceSecurityDescriptor(v5);
    }
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&EtwpSecurityLock, 0LL);
    v5 = *(_QWORD *)(a1 + 784) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 - 16), 1uLL) <= 0 )
      __fastfail(0xEu);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&EtwpSecurityLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&EtwpSecurityLock);
    KeAbPostRelease((ULONG_PTR)&EtwpSecurityLock);
    KeLeaveCriticalRegion();
  }
  return v5;
}
