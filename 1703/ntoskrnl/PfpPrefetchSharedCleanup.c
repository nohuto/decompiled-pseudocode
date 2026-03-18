/*
 * XREFs of PfpPrefetchSharedCleanup @ 0x140464428
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1404636DC (PfpPrefetchRequestPerform.c)
 *     PfSnCleanupPrefetchHeader @ 0x14053E398 (PfSnCleanupPrefetchHeader.c)
 *     PfpQueryFileExtentsRequest @ 0x1406C3FD8 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     PsSetCurrentThreadPrefetching @ 0x14053DF00 (PsSetCurrentThreadPrefetching.c)
 */

__int64 __fastcall PfpPrefetchSharedCleanup(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 128) )
    KeAbPostRelease(a1);
  if ( *(_QWORD *)(a1 + 136) )
    KeAbPostRelease((ULONG_PTR)&PfGlobals);
  if ( *(_QWORD *)a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036DF90, 0LL);
    v3 = *(_QWORD *)a1;
    v4 = *(_QWORD **)(a1 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || *v4 != a1 )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036DF90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036DF90);
    KeAbPostRelease((ULONG_PTR)&qword_14036DF90);
    KeLeaveCriticalRegion();
  }
  if ( (*(_DWORD *)(a1 + 68) & 1) != 0 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&stru_14036DF80);
    *(_DWORD *)(a1 + 68) &= ~1u;
  }
  if ( *(_QWORD *)(a1 + 16) )
    PsSetCurrentThreadPrefetching((*(_DWORD *)(a1 + 68) & 2) != 0);
  result = *(unsigned int *)(a1 + 68);
  if ( (result & 8) != 0 )
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return result;
}
