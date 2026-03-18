/*
 * XREFs of PsSwapProcessWorkingSet @ 0x1406DFE78
 * Callers:
 *     MmProcessWorkingSetControl @ 0x1404CA12C (MmProcessWorkingSetControl.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     PspChangeProcessExecutionState @ 0x140547580 (PspChangeProcessExecutionState.c)
 */

__int64 __fastcall PsSwapProcessWorkingSet(ULONG_PTR BugCheckParameter1, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  int v5; // ebx
  signed __int64 *v6; // rdi
  __int64 v7; // rsi
  unsigned int v8; // ebx
  signed __int32 v9; // eax
  unsigned int v10; // ebx
  signed __int32 v11; // edx
  unsigned int v12; // ebx

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  v6 = (signed __int64 *)(BugCheckParameter1 + 728);
  ExAcquirePushLockSharedEx(BugCheckParameter1 + 728, 0LL);
  v7 = *(_QWORD *)(BugCheckParameter1 + 944);
  if ( v7 )
  {
    ExAcquireResourceSharedLite((PERESOURCE)(v7 + 56), 1u);
    v5 = (*(_DWORD *)(v7 + 864) != 0 ? 2 : 0) | 1;
    if ( !*(_DWORD *)(v7 + 856) )
      v5 = *(_DWORD *)(v7 + 864) != 0 ? 2 : 0;
  }
  if ( a2 )
    v8 = v5 | 2;
  else
    v8 = v5 & 0xFFFFFFFD;
  v9 = *(_DWORD *)(BugCheckParameter1 + 768);
  v10 = v8 << 28;
  do
  {
    v11 = v9;
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter1 + 768), v10 | v9 & 0xCFFFFFFF, v9);
  }
  while ( v9 != v11 );
  if ( v7 )
    ExReleaseResourceLite((PERESOURCE)(v7 + 56));
  if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  v12 = PspChangeProcessExecutionState((_KPROCESS *)BugCheckParameter1);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return v12;
}
