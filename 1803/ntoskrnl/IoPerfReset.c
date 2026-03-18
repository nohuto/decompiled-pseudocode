/*
 * XREFs of IoPerfReset @ 0x1402380AC
 * Callers:
 *     EtwpDisableKernelTrace @ 0x14057BDC8 (EtwpDisableKernelTrace.c)
 *     IoUnregisterIoTracking @ 0x14071DD30 (IoUnregisterIoTracking.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     IopUpdateFunctionPointers @ 0x140232C5C (IopUpdateFunctionPointers.c)
 */

__int64 __fastcall IoPerfReset(char a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &LockHandle);
  if ( (a1 & 1) != 0 && !--dword_1403E9BD4 )
    IopPerfStatus &= ~1u;
  if ( (a1 & 2) != 0 && !--dword_1403E9BD8 )
    IopPerfStatus &= ~2u;
  if ( !IopPerfStatus )
    IopUpdateFunctionPointers(2, 0, 1);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return 0LL;
}
