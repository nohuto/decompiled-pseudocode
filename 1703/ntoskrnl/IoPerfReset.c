/*
 * XREFs of IoPerfReset @ 0x1401F558C
 * Callers:
 *     EtwpDisableKernelTrace @ 0x1404354A0 (EtwpDisableKernelTrace.c)
 *     IoUnregisterIoTracking @ 0x14068D0B0 (IoUnregisterIoTracking.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     IopUpdateFunctionPointers @ 0x1401F0030 (IopUpdateFunctionPointers.c)
 */

__int64 __fastcall IoPerfReset(char a1)
{
  unsigned int v2; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &LockHandle);
  if ( (a1 & 1) == 0 || (--dword_1403880F4, dword_1403880F4) )
  {
    v2 = IopPerfStatus;
  }
  else
  {
    v2 = IopPerfStatus & 0xFFFFFFFE;
    IopPerfStatus &= ~1u;
  }
  if ( (a1 & 2) != 0 && !--dword_1403880F8 )
  {
    v2 &= ~2u;
    IopPerfStatus = v2;
  }
  if ( !v2 )
    IopUpdateFunctionPointers(2, 0, 1);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return 0LL;
}
