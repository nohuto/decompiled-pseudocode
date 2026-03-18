/*
 * XREFs of PfpScenCtxPrefetchAbortSet @ 0x14040BC6C
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1404636DC (PfpPrefetchRequestPerform.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PfpScenCtxPrefetchAbortSet(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, int a4, int a5)
{
  unsigned int v9; // esi
  struct _KTHREAD *CurrentThread; // rax

  if ( !a5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 48) == a2 )
  {
    if ( a4 )
    {
      *(_QWORD *)(BugCheckParameter2 + 40) = 0LL;
LABEL_6:
      v9 = 0;
      goto LABEL_7;
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0xC) != 8 )
    {
      *(_QWORD *)(BugCheckParameter2 + 40) = a3;
      goto LABEL_6;
    }
    v9 = -1073741431;
  }
  else
  {
    v9 = -1073741735;
  }
LABEL_7:
  if ( !a5 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
  }
  return v9;
}
