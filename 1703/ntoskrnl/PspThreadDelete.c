/*
 * XREFs of PspThreadDelete @ 0x1404F7FA0
 * Callers:
 *     <none>
 * Callees:
 *     KeFoldProcessStatisticsThread @ 0x1400885DC (KeFoldProcessStatisticsThread.c)
 *     KeInitializeDpc @ 0x140088A30 (KeInitializeDpc.c)
 *     KeCleanupThreadState @ 0x14008AA90 (KeCleanupThreadState.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KeInsertQueueDpc @ 0x1400F14F0 (KeInsertQueueDpc.c)
 *     KeEnumerateKernelStackSegments @ 0x14010EFE4 (KeEnumerateKernelStackSegments.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KeBugCheck @ 0x140181870 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PspDeleteThreadSecurity @ 0x1404F81A8 (PspDeleteThreadSecurity.c)
 *     ExDestroyHandle @ 0x1404F81FC (ExDestroyHandle.c)
 *     ExMapHandleToPointer @ 0x1404FA960 (ExMapHandleToPointer.c)
 */

unsigned __int64 __fastcall PspThreadDelete(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // r9
  ULONG_PTR v3; // r9
  struct _KTHREAD *CurrentThread; // r12
  __int64 v5; // rax
  void *v6; // rcx
  unsigned __int64 result; // rax
  volatile signed __int64 *v8; // r14
  __int64 *v9; // rsi
  __int64 *v10; // rcx
  __int64 **v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  __int64 *v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r10
  int v17; // r9d
  _QWORD *v18; // r8
  const char *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  KeCleanupThreadState(BugCheckParameter2);
  if ( *(_DWORD *)(BugCheckParameter2 + 1896) )
    KeBugCheckEx(0x94u, 1uLL, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1896), 0LL);
  if ( *(_DWORD *)(BugCheckParameter2 + 1792) )
    KeBugCheckEx(0x13Cu, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1792), 0LL, 0LL);
  if ( *(_DWORD *)(BugCheckParameter2 + 1796) )
    KeBugCheckEx(0x13Cu, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1796), 1uLL, 0LL);
  if ( *(_DWORD *)(BugCheckParameter2 + 1800) )
    KeBugCheckEx(0x13Cu, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1800), 2uLL, 0LL);
  v2 = *(_QWORD *)(BugCheckParameter2 + 2024);
  if ( v2 != BugCheckParameter2 + 2024 )
    KeBugCheckEx(0x1C6u, 0x14uLL, BugCheckParameter2, v2, 0LL);
  v3 = *(_QWORD *)(BugCheckParameter2 + 2048);
  if ( v3 != BugCheckParameter2 + 2048 )
    KeBugCheckEx(0x1C6u, 0x15uLL, BugCheckParameter2, v3, 0LL);
  if ( *(_QWORD *)(BugCheckParameter2 + 40) )
    KeEnumerateKernelStackSegments(
      BugCheckParameter2,
      (__int64 (__fastcall *)(__int64, _OWORD *, __int64))PspDeleteKernelStack,
      0LL);
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter2 + 1600) )
  {
    --CurrentThread->KernelApcDisable;
    v5 = ExMapHandleToPointer(PspCidTable, *(_QWORD *)(BugCheckParameter2 + 1600));
    if ( !v5 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, *(_QWORD *)(BugCheckParameter2 + 1600), v5);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  PspDeleteThreadSecurity(BugCheckParameter2);
  v6 = *(void **)(BugCheckParameter2 + 2000);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x6D4E6854u);
  result = KiQueryUnbiasedInterruptTime();
  if ( result >= qword_14036BA20 )
  {
    v12 = qword_14036BA10;
    if ( qword_14036BA10 )
    {
      if ( (_DWORD)qword_14036BA28 )
      {
        v13 = 0LL;
        v14 = &ObpObjectTypes;
        v15 = (unsigned int)qword_14036BA28;
        do
        {
          v16 = *v14;
          if ( ((*(unsigned __int8 *)(*v14 + 66) >> 6) & 1) != _bittest64(qword_14036BA30, v13) && !qword_14036B9E0 )
          {
            qword_14036B9E0 = (unsigned int)__ROL4__(1207959560, 133);
            qword_14036B9E8 = 0LL;
            qword_14036B9F0 = 0LL;
            qword_14036B9F8 = 268LL;
            qword_14036BA00 = v16;
          }
          ++v13;
          ++v14;
          --v15;
        }
        while ( v15 );
        v12 = qword_14036BA10;
      }
      v17 = 64;
      v18 = (_QWORD *)(qword_14036BA50 + 112);
      v19 = (const char *)(qword_14036BA50 + 112);
      if ( qword_14036BA50 + 112 < (unsigned __int64)(qword_14036BA50 + 176) )
      {
        do
        {
          _mm_prefetch(v19, 0);
          v19 += 64;
        }
        while ( (unsigned __int64)v19 < qword_14036BA50 + 176 );
      }
      v20 = 8LL;
      do
      {
        v12 = __ROR8__(v12 - *v18++, qword_14036BA18);
        v17 -= 8;
        --v20;
      }
      while ( v20 );
      for ( ; v17; --v17 )
      {
        v21 = *(unsigned __int8 *)v18;
        v18 = (_QWORD *)((char *)v18 + 1);
        v12 = __ROR8__(v12 - v21, qword_14036BA18);
      }
      if ( qword_14036BA58 != v12 )
      {
        if ( qword_14036B9E0 )
          goto LABEL_53;
        qword_14036B9E0 = (unsigned int)__ROR4__(150994945, 152);
        qword_14036B9E8 = 0LL;
        qword_14036B9F0 = 0LL;
        qword_14036B9F8 = 268LL;
        qword_14036BA00 = qword_14036BA50;
      }
    }
    if ( !qword_14036B9E0 )
    {
LABEL_56:
      result = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      qword_14036BA20 = result;
      goto LABEL_15;
    }
LABEL_53:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, PVOID, PVOID, PVOID))DeferredContext.DeferredRoutine != KiScanQueues )
      KeInitializeDpc(&DeferredContext, (PKDEFERRED_ROUTINE)KiScanQueues, &DeferredContext);
    qword_14036BA08 = 1912080LL;
    KeInsertQueueDpc(&DeferredContext, 0LL, 0LL);
    goto LABEL_56;
  }
LABEL_15:
  v8 = *(volatile signed __int64 **)(BugCheckParameter2 + 544);
  if ( v8 )
  {
    v9 = (__int64 *)(BugCheckParameter2 + 1696);
    if ( *(_QWORD *)(BugCheckParameter2 + 1696) )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v8 + 91), 0LL);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v8 + 214), 0LL);
      KeFoldProcessStatisticsThread(BugCheckParameter2);
      v10 = (__int64 *)*v9;
      v11 = *(__int64 ***)(BugCheckParameter2 + 1704);
      if ( *(__int64 **)(*v9 + 8) != v9 || *v11 != v9 )
        __fastfail(3u);
      *v11 = v10;
      v10[1] = (__int64)v11;
      if ( (_InterlockedExchangeAdd64(v8 + 214, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v8 + 214);
      KeAbPostRelease((ULONG_PTR)(v8 + 214));
      if ( (_InterlockedExchangeAdd64(v8 + 91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v8 + 91);
      KeAbPostRelease((ULONG_PTR)(v8 + 91));
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 1736) & 0x100000) != 0 )
      ((void (__fastcall *)(ULONG_PTR))xmmword_140348E30)(BugCheckParameter2);
    return ObfDereferenceObjectWithTag((PVOID)v8, 0x72437350u);
  }
  return result;
}
