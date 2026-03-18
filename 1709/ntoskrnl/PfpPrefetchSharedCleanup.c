/*
 * XREFs of PfpPrefetchSharedCleanup @ 0x140441200
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x14043FA98 (PfpPrefetchRequestPerform.c)
 *     PfSnCleanupPrefetchHeader @ 0x140442B6C (PfSnCleanupPrefetchHeader.c)
 *     PfpQueryFileExtentsRequest @ 0x1406F2EF8 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     PsSetCurrentThreadPrefetching @ 0x1404426E0 (PsSetCurrentThreadPrefetching.c)
 */

_QWORD *__fastcall PfpPrefetchSharedCleanup(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 128) )
    KeAbPostRelease(a1);
  if ( *(_QWORD *)(a1 + 136) )
    KeAbPostRelease((ULONG_PTR)&PfGlobals);
  if ( *(_QWORD *)a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14038D3F0, 0LL);
    v3 = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v4 = *(_QWORD **)(a1 + 8), *v4 != a1) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14038D3F0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14038D3F0);
    KeAbPostRelease((ULONG_PTR)&qword_14038D3F0);
    KeLeaveCriticalRegion();
  }
  if ( (*(_DWORD *)(a1 + 68) & 1) != 0 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&stru_14038D3E0);
    *(_DWORD *)(a1 + 68) &= ~1u;
  }
  if ( *(_QWORD *)(a1 + 16) )
    PsSetCurrentThreadPrefetching((*(_DWORD *)(a1 + 68) & 2) != 0);
  result = (_QWORD *)*(unsigned int *)(a1 + 68);
  if ( ((unsigned __int8)result & 8) != 0 )
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return result;
}
