/*
 * XREFs of PfpScenCtxPrefetchAbortSet @ 0x1404766BC
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x140491840 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall PfpScenCtxPrefetchAbortSet(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // ebp
  __int64 v6; // rsi
  int v7; // r15d
  bool v9; // zf
  unsigned int v10; // esi
  struct _KTHREAD *CurrentThread; // rax

  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( !a5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 48) != v7 )
  {
    v10 = -1073741735;
    goto LABEL_8;
  }
  v9 = v5 == 0;
  if ( !v5 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0xC) == 8 )
    {
      v10 = -1073741431;
      goto LABEL_8;
    }
    v9 = 1;
  }
  if ( !v9 )
    v6 = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 40) = v6;
  v10 = 0;
LABEL_8:
  if ( !a5 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2, a2, a3, a4);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
  }
  return v10;
}
