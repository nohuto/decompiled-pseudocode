/*
 * XREFs of PsSwapProcessWorkingSet @ 0x14077A520
 * Callers:
 *     MmProcessWorkingSetControl @ 0x14052D3D4 (MmProcessWorkingSetControl.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     PspRequestProcessExecutionState @ 0x140532010 (PspRequestProcessExecutionState.c)
 *     PspChangeProcessExecutionState @ 0x140532AF8 (PspChangeProcessExecutionState.c)
 */

__int64 __fastcall PsSwapProcessWorkingSet(PEPROCESS Process, char a2)
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
  p_Lock = (signed __int64 *)&Process[1].Header.Lock;
  ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1], 0LL);
  v7 = Process[1].Affinity.Bitmap[16];
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
  PspRequestProcessExecutionState((__int64)Process, v8, 1);
  if ( v7 )
    ExReleaseResourceLite((PERESOURCE)(v7 + 56));
  if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(p_Lock);
  KeAbPostRelease((ULONG_PTR)p_Lock);
  v9 = PspChangeProcessExecutionState(Process);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v9;
}
