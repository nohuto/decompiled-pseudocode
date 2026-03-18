/*
 * XREFs of IopQueryConflictList @ 0x1406AB57C
 * Callers:
 *     PiControlQueryConflictList @ 0x1406A8350 (PiControlQueryConflictList.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeReleaseSemaphore @ 0x1400E2BA0 (KeReleaseSemaphore.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     IopQueryConflictListInternal @ 0x1406AB614 (IopQueryConflictListInternal.c)
 */

__int64 __fastcall IopQueryConflictList(int a1, int a2, __int64 a3, int a4, int a5)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // r8d
  unsigned int ConflictListInternal; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  ConflictListInternal = IopQueryConflictListInternal(a1, a2, v9, a4, a5);
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return ConflictListInternal;
}
