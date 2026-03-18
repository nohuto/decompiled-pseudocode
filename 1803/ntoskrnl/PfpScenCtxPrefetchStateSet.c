/*
 * XREFs of PfpScenCtxPrefetchStateSet @ 0x1404764FC
 * Callers:
 *     PfpScenCtxScenarioSet @ 0x140478314 (PfpScenCtxScenarioSet.c)
 *     PfSetSuperfetchInformation @ 0x14048DBD0 (PfSetSuperfetchInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall PfpScenCtxPrefetchStateSet(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  int v5; // ebp
  int v6; // esi
  struct _KTHREAD *CurrentThread; // rax
  int v9; // ecx
  unsigned int v10; // esi

  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( !(_DWORD)a4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 48) == v6 )
  {
    a2 = 1LL;
    if ( v5 == 1 && (*(_DWORD *)(BugCheckParameter2 + 8) & 0xC) == 8 )
    {
      v10 = -1073741431;
    }
    else
    {
      v9 = *(_DWORD *)(BugCheckParameter2 + 8);
      if ( (v9 & 0xC) == 4 )
      {
        KeSetEvent((PRKEVENT)(BugCheckParameter2 + 16), 1, 0);
        *(_DWORD *)(BugCheckParameter2 + 8) &= 0xFFFFFFF3;
        v9 = *(_DWORD *)(BugCheckParameter2 + 8);
      }
      *(_DWORD *)(BugCheckParameter2 + 8) = v9 ^ ((unsigned __int8)v5 ^ (unsigned __int8)v9) & 3;
      v10 = 0;
    }
  }
  else
  {
    v10 = -1073741735;
  }
  if ( !v4 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2, a2, a3, a4);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
  }
  return v10;
}
