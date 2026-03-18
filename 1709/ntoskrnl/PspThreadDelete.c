/*
 * XREFs of PspThreadDelete @ 0x1404FBC50
 * Callers:
 *     <none>
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KeInsertQueueDpc @ 0x140094390 (KeInsertQueueDpc.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeEnumerateKernelStackSegments @ 0x1400AD238 (KeEnumerateKernelStackSegments.c)
 *     KeInitializeDpc @ 0x1400B2860 (KeInitializeDpc.c)
 *     KeCleanupThreadState @ 0x1400B88CC (KeCleanupThreadState.c)
 *     KeFoldProcessStatisticsThread @ 0x1400B8958 (KeFoldProcessStatisticsThread.c)
 *     KeBugCheck @ 0x140181270 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExMapHandleToPointer @ 0x1404D4D40 (ExMapHandleToPointer.c)
 *     PspDeleteThreadSecurity @ 0x1404FBE58 (PspDeleteThreadSecurity.c)
 *     ExDestroyHandle @ 0x1404FBEAC (ExDestroyHandle.c)
 */

unsigned __int64 __fastcall PspThreadDelete(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // r9
  ULONG_PTR v3; // r9
  struct _KTHREAD *CurrentThread; // r12
  signed __int64 *v5; // rax
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
    v5 = ExMapHandleToPointer(
           *(unsigned int **)((char *)&Mm64BitPhysicalAddress + 5),
           *(_QWORD *)(BugCheckParameter2 + 1600));
    if ( !v5 )
      KeBugCheck(0x17u);
    ExDestroyHandle(*(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 5), *(_QWORD *)(BugCheckParameter2 + 1600), v5);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  PspDeleteThreadSecurity(BugCheckParameter2);
  v6 = *(void **)(BugCheckParameter2 + 2008);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x6D4E6854u);
  result = KiQueryUnbiasedInterruptTime();
  if ( result >= qword_140387CA0 )
  {
    v12 = qword_140387C90;
    if ( qword_140387C90 )
    {
      if ( (_DWORD)qword_140387CA8 )
      {
        v13 = 0LL;
        v14 = ObpObjectTypes;
        v15 = (unsigned int)qword_140387CA8;
        do
        {
          v16 = *v14;
          if ( ((*(unsigned __int8 *)(*v14 + 66) >> 6) & 1) != _bittest64(qword_140387CB0, v13) && !qword_140387C60 )
          {
            qword_140387C60 = (unsigned int)__ROL4__(1207959560, 133);
            qword_140387C68 = 0LL;
            qword_140387C70 = 0LL;
            qword_140387C78 = 268LL;
            qword_140387C80 = v16;
          }
          ++v13;
          ++v14;
          --v15;
        }
        while ( v15 );
        v12 = qword_140387C90;
      }
      v17 = 64;
      v18 = (_QWORD *)(qword_140387CD0 + 112);
      v19 = (const char *)(qword_140387CD0 + 112);
      if ( qword_140387CD0 + 112 < (unsigned __int64)(qword_140387CD0 + 176) )
      {
        do
        {
          _mm_prefetch(v19, 0);
          v19 += 64;
        }
        while ( (unsigned __int64)v19 < qword_140387CD0 + 176 );
      }
      v20 = 8LL;
      do
      {
        v12 = __ROR8__(v12 - *v18++, qword_140387C98);
        v17 -= 8;
        --v20;
      }
      while ( v20 );
      for ( ; v17; --v17 )
      {
        v21 = *(unsigned __int8 *)v18;
        v18 = (_QWORD *)((char *)v18 + 1);
        v12 = __ROR8__(v12 - v21, qword_140387C98);
      }
      if ( qword_140387CD8 != v12 )
      {
        if ( qword_140387C60 )
          goto LABEL_53;
        qword_140387C60 = (unsigned int)__ROR4__(150994945, 152);
        qword_140387C68 = 0LL;
        qword_140387C70 = 0LL;
        qword_140387C78 = 268LL;
        qword_140387C80 = qword_140387CD0;
      }
    }
    if ( !qword_140387C60 )
    {
LABEL_56:
      result = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      qword_140387CA0 = result;
      goto LABEL_15;
    }
LABEL_53:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, PVOID, PVOID, PVOID))DeferredContext.DeferredRoutine != KiScanQueues )
      KeInitializeDpc(&DeferredContext, (PKDEFERRED_ROUTINE)KiScanQueues, &DeferredContext);
    qword_140387C88 = 1912080LL;
    KeInsertQueueDpc(&DeferredContext, 0LL, 0LL);
    goto LABEL_56;
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
      v10 = (__int64 *)*v9;
      if ( *(__int64 **)(*v9 + 8) != v9 || (v11 = *(__int64 ***)(BugCheckParameter2 + 1712), *v11 != v9) )
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
    if ( (*(_DWORD *)(BugCheckParameter2 + 1744) & 0x100000) != 0 )
      ((void (__fastcall *)(ULONG_PTR))xmmword_140362930)(BugCheckParameter2);
    return ObfDereferenceObjectWithTag((PVOID)v8, 0x72437350u);
  }
  return result;
}
