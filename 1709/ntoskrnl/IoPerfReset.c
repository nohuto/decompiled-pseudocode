/*
 * XREFs of IoPerfReset @ 0x1401FB378
 * Callers:
 *     EtwpDisableKernelTrace @ 0x1405970E0 (EtwpDisableKernelTrace.c)
 *     IoUnregisterIoTracking @ 0x1406B9160 (IoUnregisterIoTracking.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     IopUpdateFunctionPointers @ 0x1401F56D4 (IopUpdateFunctionPointers.c)
 */

__int64 __fastcall IoPerfReset(char a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &LockHandle);
  if ( (a1 & 1) != 0 && !--dword_1403A3694 )
    IopPerfStatus &= ~1u;
  if ( (a1 & 2) != 0 && !--dword_1403A3698 )
    IopPerfStatus &= ~2u;
  if ( !IopPerfStatus )
    IopUpdateFunctionPointers(2, 0, 1);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return 0LL;
}
