/*
 * XREFs of PsSwapProcessWorkingSet @ 0x14071648C
 * Callers:
 *     MmProcessWorkingSetControl @ 0x1406EC9D0 (MmProcessWorkingSetControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     PspRequestProcessExecutionState @ 0x14050D8F0 (PspRequestProcessExecutionState.c)
 *     PspChangeProcessExecutionState @ 0x14050DC70 (PspChangeProcessExecutionState.c)
 */

__int64 __fastcall PsSwapProcessWorkingSet(_KPROCESS *BugCheckParameter1, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  int v5; // ebx
  signed __int64 *p_Lock; // rdi
  unsigned __int64 v7; // rsi
  int v8; // ebx
  unsigned int v9; // ebx

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  p_Lock = (signed __int64 *)&BugCheckParameter1[1].Header.Lock;
  ExAcquirePushLockSharedEx((ULONG_PTR)&BugCheckParameter1[1], 0LL);
  v7 = BugCheckParameter1[1].Affinity.Bitmap[16];
  if ( v7 )
  {
    ExAcquireResourceSharedLite((PERESOURCE)(v7 + 56), 1u);
    v5 = *(_DWORD *)(v7 + 864) != 0 ? 2 : 0;
    if ( *(_DWORD *)(v7 + 856) )
      v5 = 1;
  }
  if ( a2 )
    v8 = v5 | 2;
  else
    v8 = v5 & 0xFFFFFFFD;
  PspRequestProcessExecutionState((__int64)BugCheckParameter1, v8, 1);
  if ( v7 )
    ExReleaseResourceLite((PERESOURCE)(v7 + 56));
  if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(p_Lock);
  KeAbPostRelease((ULONG_PTR)p_Lock);
  v9 = PspChangeProcessExecutionState(BugCheckParameter1);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v9;
}
