/*
 * XREFs of PfpPrefetchSharedStart @ 0x140490DA4
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x14048E5B0 (PfSnAsyncPrefetchWorker.c)
 *     PfpPrefetchRequestPerform @ 0x140491840 (PfpPrefetchRequestPerform.c)
 *     PfpQueryFileExtentsRequest @ 0x14075BDB8 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     PsSetCurrentThreadPrefetching @ 0x1404A1E30 (PsSetCurrentThreadPrefetching.c)
 */

__int64 __fastcall PfpPrefetchSharedStart(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // esi
  struct _KTHREAD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  *(_DWORD *)(BugCheckParameter2 + 68) |= 8u;
  *(_QWORD *)(BugCheckParameter2 + 16) = KeGetCurrentThread();
  *(_DWORD *)(BugCheckParameter2 + 68) ^= (*(_DWORD *)(BugCheckParameter2 + 68) ^ (2 * PsSetCurrentThreadPrefetching(1u))) & 2;
  v3 = 0;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&RunRef) )
    return (unsigned int)-1073741127;
  *(_DWORD *)(BugCheckParameter2 + 68) |= 1u;
  v4 = KeGetCurrentThread();
  --v4->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CD810, 0LL);
  if ( (dword_1403CD828 & 1) == 0 )
  {
    v8 = qword_1403CD818;
    if ( *(__int64 **)(qword_1403CD818 + 8) != &qword_1403CD818 )
      __fastfail(3u);
    *(_QWORD *)BugCheckParameter2 = qword_1403CD818;
    *(_QWORD *)(BugCheckParameter2 + 8) = &qword_1403CD818;
    *(_QWORD *)(v8 + 8) = BugCheckParameter2;
    qword_1403CD818 = BugCheckParameter2;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CD810, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CD810, v5, v6, v7);
  KeAbPostRelease((ULONG_PTR)&qword_1403CD810);
  KeLeaveCriticalRegion();
  if ( *(_QWORD *)BugCheckParameter2 )
  {
    v9 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
    *(_QWORD *)(BugCheckParameter2 + 128) = v9;
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v10 = KeAbPreAcquire((ULONG_PTR)&PfGlobals, 0LL, 0);
    *(_QWORD *)(BugCheckParameter2 + 136) = v10;
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
  }
  else
  {
    return (unsigned int)-1073741127;
  }
  return v3;
}
