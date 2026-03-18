/*
 * XREFs of ExCleanTimerResolutionRequest @ 0x14003C378
 * Callers:
 *     PspExitProcess @ 0x140498A28 (PspExitProcess.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ZwSetTimerResolution @ 0x1401813A0 (ZwSetTimerResolution.c)
 *     PoDiagFreeUsermodeStack @ 0x14045E2C4 (PoDiagFreeUsermodeStack.c)
 *     ExReleaseTimeRefreshLock @ 0x14045E2D4 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x140563098 (ExAcquireTimeRefreshLock.c)
 */

__int64 __fastcall ExCleanTimerResolutionRequest(__int64 a1)
{
  _KPROCESS *Process; // rbx
  KIRQL v2; // di
  unsigned __int64 v3; // r9
  _KPROCESS **v4; // r8
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  ULONG ActualResolution; // [rsp+30h] [rbp+8h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[1].DirectoryTableBase & 0x100000000000LL) != 0 )
    ZwSetTimerResolution(KeMaximumIncrement, 0, &ActualResolution);
  LOBYTE(a1) = 1;
  ExAcquireTimeRefreshLock(a1);
  v2 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  v3 = Process[2].Affinity.Bitmap[13];
  v4 = (_KPROCESS **)Process[2].Affinity.Bitmap[14];
  if ( *(_KPROCESS **)(v3 + 8) != (_KPROCESS *)&Process[2].Affinity.Bitmap[13]
    || *v4 != (_KPROCESS *)&Process[2].Affinity.Bitmap[13] )
  {
    __fastfail(3u);
  }
  *v4 = (_KPROCESS *)v3;
  *(_QWORD *)(v3 + 8) = v4;
  KxReleaseSpinLock(&ExpKernelResolutionLock);
  __writecr8(v2);
  v5 = Process[2].Affinity.Bitmap[15];
  Process[2].Affinity.Bitmap[15] = 0LL;
  result = ExReleaseTimeRefreshLock();
  if ( v5 )
    return PoDiagFreeUsermodeStack(v5);
  return result;
}
