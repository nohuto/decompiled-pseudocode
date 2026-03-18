/*
 * XREFs of PspThreadDelete @ 0x140511DD0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeDpc @ 0x140038FE0 (KeInitializeDpc.c)
 *     KeInsertQueueDpc @ 0x140039000 (KeInsertQueueDpc.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     KeCleanupThreadState @ 0x14006FA08 (KeCleanupThreadState.c)
 *     KeFoldProcessStatisticsThread @ 0x14006FA98 (KeFoldProcessStatisticsThread.c)
 *     KeEnumerateKernelStackSegments @ 0x1400B2CA8 (KeEnumerateKernelStackSegments.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheck @ 0x1401AAEB0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExMapHandleToPointer @ 0x1404B7800 (ExMapHandleToPointer.c)
 *     PspDeleteThreadSecurity @ 0x140511FEC (PspDeleteThreadSecurity.c)
 *     ExDestroyHandle @ 0x140512040 (ExDestroyHandle.c)
 */

unsigned __int64 __fastcall PspThreadDelete(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // r9
  ULONG_PTR v3; // r9
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *v5; // rax
  void *v6; // rcx
  unsigned __int64 result; // rax
  volatile signed __int64 *v8; // r14
  __int64 *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rcx
  __int64 **v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int64 *v20; // rdx
  __int64 v21; // r9
  __int64 v22; // r10
  int v23; // r9d
  _QWORD *v24; // r8
  const char *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax

  KeCleanupThreadState(BugCheckParameter2);
  if ( *(_DWORD *)(BugCheckParameter2 + 1904) )
    KeBugCheckEx(0x94u, 1uLL, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1904), 0LL);
  if ( *(_DWORD *)(BugCheckParameter2 + 1800) )
    KeBugCheckEx(0x13Cu, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1800), 0LL, 0LL);
  if ( *(_DWORD *)(BugCheckParameter2 + 1804) )
    KeBugCheckEx(0x13Cu, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1804), 1uLL, 0LL);
  if ( *(_DWORD *)(BugCheckParameter2 + 1808) )
    KeBugCheckEx(0x13Cu, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1808), 2uLL, 0LL);
  v2 = *(_QWORD *)(BugCheckParameter2 + 2032);
  if ( v2 != BugCheckParameter2 + 2032 )
    KeBugCheckEx(0x1C6u, 0x14uLL, BugCheckParameter2, v2, 0LL);
  v3 = *(_QWORD *)(BugCheckParameter2 + 2056);
  if ( v3 != BugCheckParameter2 + 2056 )
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
    v5 = ExMapHandleToPointer(*(__int64 *)((char *)&Mm64BitPhysicalAddress + 6), *(_QWORD *)(BugCheckParameter2 + 1600));
    if ( !v5 )
      KeBugCheck(0x17u);
    ExDestroyHandle(*(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 6), *(_QWORD *)(BugCheckParameter2 + 1600), v5);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  PspDeleteThreadSecurity(BugCheckParameter2);
  v6 = *(void **)(BugCheckParameter2 + 2008);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x6D4E6854u);
  result = KiQueryUnbiasedInterruptTime();
  if ( result >= qword_1403CAE90 )
  {
    v18 = qword_1403CAE80;
    if ( qword_1403CAE80 )
    {
      if ( (_DWORD)qword_1403CAE98 )
      {
        v19 = 0LL;
        v20 = ObpObjectTypes;
        v21 = (unsigned int)qword_1403CAE98;
        do
        {
          v22 = *v20;
          if ( ((*(unsigned __int8 *)(*v20 + 66) >> 6) & 1) != _bittest64(&qword_1403CAEA0, v19) && !qword_1403CAE50 )
          {
            qword_1403CAE50 = (unsigned int)__ROL4__(1207959560, 133);
            qword_1403CAE58 = 0LL;
            qword_1403CAE60 = 0LL;
            qword_1403CAE68 = 268LL;
            qword_1403CAE70 = v22;
          }
          ++v19;
          ++v20;
          --v21;
        }
        while ( v21 );
        v18 = qword_1403CAE80;
      }
      v23 = 64;
      v24 = (_QWORD *)(qword_1403CAEC0 + 112);
      v25 = (const char *)(qword_1403CAEC0 + 112);
      if ( qword_1403CAEC0 + 112 < (unsigned __int64)(qword_1403CAEC0 + 176) )
      {
        do
        {
          _mm_prefetch(v25, 0);
          v25 += 64;
        }
        while ( (unsigned __int64)v25 < qword_1403CAEC0 + 176 );
      }
      v26 = 8LL;
      do
      {
        v18 = __ROR8__(v18 - *v24++, qword_1403CAE88);
        v23 -= 8;
        --v26;
      }
      while ( v26 );
      for ( ; v23; --v23 )
      {
        v27 = *(unsigned __int8 *)v24;
        v24 = (_QWORD *)((char *)v24 + 1);
        v18 = __ROR8__(v18 - v27, qword_1403CAE88);
      }
      if ( qword_1403CAEC8 != v18 )
      {
        if ( qword_1403CAE50 )
          goto LABEL_54;
        qword_1403CAE50 = (unsigned int)__ROR4__(150994945, 152);
        qword_1403CAE58 = 0LL;
        qword_1403CAE60 = 0LL;
        qword_1403CAE68 = 268LL;
        qword_1403CAE70 = qword_1403CAEC0;
      }
    }
    if ( !qword_1403CAE50 )
    {
LABEL_57:
      result = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      qword_1403CAE90 = result;
      goto LABEL_15;
    }
LABEL_54:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, PVOID, PVOID, PVOID))DeferredContext.DeferredRoutine != KiScanQueues )
      KeInitializeDpc(&DeferredContext, (PKDEFERRED_ROUTINE)KiScanQueues, &DeferredContext);
    qword_1403CAE78 = 1912080LL;
    KeInsertQueueDpc(&DeferredContext, 0LL, 0LL);
    goto LABEL_57;
  }
LABEL_15:
  v8 = *(volatile signed __int64 **)(BugCheckParameter2 + 544);
  if ( v8 )
  {
    v9 = (__int64 *)(BugCheckParameter2 + 1704);
    if ( *(_QWORD *)(BugCheckParameter2 + 1704) )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v8 + 91), 0LL);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v8 + 214), 0LL);
      KeFoldProcessStatisticsThread(BugCheckParameter2);
      v13 = (__int64 *)*v9;
      if ( *(__int64 **)(*v9 + 8) != v9 || (v14 = *(__int64 ***)(BugCheckParameter2 + 1712), *v14 != v9) )
        __fastfail(3u);
      *v14 = v13;
      v13[1] = (__int64)v14;
      if ( (_InterlockedExchangeAdd64(v8 + 214, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v8 + 214, v10, v11, v12);
      KeAbPostRelease((ULONG_PTR)(v8 + 214));
      if ( (_InterlockedExchangeAdd64(v8 + 91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v8 + 91, v15, v16, v17);
      KeAbPostRelease((ULONG_PTR)(v8 + 91));
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 1744) & 0x100000) != 0 )
      ((void (__fastcall *)(ULONG_PTR))xmmword_1403A60F0)(BugCheckParameter2);
    return ObfDereferenceObjectWithTag((PVOID)v8, 0x72437350u);
  }
  return result;
}
