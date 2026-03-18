/*
 * XREFs of EtwpReferenceLoggerSecurityDescriptor @ 0x14048E3EC
 * Callers:
 *     EtwpCheckLoggerControlAccess @ 0x14048E46C (EtwpCheckLoggerControlAccess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140747E84 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     ObDereferenceSecurityDescriptor @ 0x140484DE0 (ObDereferenceSecurityDescriptor.c)
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

  _m_prefetchw((const void *)(a1 + 800));
  v2 = *(_QWORD *)(a1 + 800);
  if ( (v2 & 0xF) != 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 800), v2 - 1, v2);
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
      _m_prefetchw((const void *)(a1 + 800));
      v7 = *(_QWORD *)(a1 + 800);
      while ( (unsigned __int64)(v7 & 0xF) + 15 <= 0xF && v5 == (v7 & 0xFFFFFFFFFFFFFFF0uLL) )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 800), v7 + 15, v7);
        if ( v8 == v7 )
          return v5;
      }
      ObDereferenceSecurityDescriptor(v5, 0xFu);
    }
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&EtwpSecurityLock, 0LL);
    v5 = *(_QWORD *)(a1 + 800) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 - 16), 1uLL) <= 0 )
      __fastfail(0xEu);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&EtwpSecurityLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&EtwpSecurityLock);
    KeAbPostRelease((ULONG_PTR)&EtwpSecurityLock);
    KeLeaveCriticalRegion();
  }
  return v5;
}
