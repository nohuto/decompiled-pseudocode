/*
 * XREFs of PfpScenCtxServiceThreadSet @ 0x14047CCFC
 * Callers:
 *     PfSetSuperfetchInformation @ 0x14048DBD0 (PfSetSuperfetchInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     PsGetThreadId @ 0x1400BCBB0 (PsGetThreadId.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

_QWORD *__fastcall PfpScenCtxServiceThreadSet(ULONG_PTR BugCheckParameter2, int a2)
{
  HANDLE v2; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  HANDLE ThreadId; // rax
  __int64 v6; // rbx
  struct _KTHREAD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // bp

  v2 = 0LL;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadId = PsGetThreadId(CurrentThread);
    v6 = *(_QWORD *)&CurrentThread[1].Header.Lock;
    v2 = ThreadId;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = KeGetCurrentThread();
  --v7->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  *(_QWORD *)(BugCheckParameter2 + 72) = v2;
  *(_QWORD *)(BugCheckParameter2 + 80) = v6;
  v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2, v8, v9, v10);
  KeAbPostRelease(BugCheckParameter2);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
