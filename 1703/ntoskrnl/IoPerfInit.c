/*
 * XREFs of IoPerfInit @ 0x1401F5504
 * Callers:
 *     EtwpEnableKernelTrace @ 0x140435210 (EtwpEnableKernelTrace.c)
 *     IoRegisterIoTracking @ 0x14068CFA0 (IoRegisterIoTracking.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     IopUpdateFunctionPointers @ 0x1401F0030 (IopUpdateFunctionPointers.c)
 */

__int64 __fastcall IoPerfInit(int a1)
{
  bool v2; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &LockHandle);
  v2 = IopPerfStatus == 0;
  IopPerfStatus |= a1;
  if ( (a1 & 1) != 0 )
    ++dword_1403880F4;
  if ( (a1 & 2) != 0 )
    ++dword_1403880F8;
  if ( v2 )
    IopUpdateFunctionPointers(2, 1, 1);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return 0LL;
}
