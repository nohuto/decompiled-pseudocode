/*
 * XREFs of IopIrpExtensionControl @ 0x140232A24
 * Callers:
 *     IopEtwEnableCallback @ 0x140719A00 (IopEtwEnableCallback.c)
 *     IoRegisterIoTracking @ 0x14071DC20 (IoRegisterIoTracking.c)
 *     IoUnregisterIoTracking @ 0x14071DD30 (IoUnregisterIoTracking.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     IopUpdateFunctionPointers @ 0x140232C5C (IopUpdateFunctionPointers.c)
 */

__int64 __fastcall IopIrpExtensionControl(int a1, int a2)
{
  _BOOL8 v4; // r8
  __int64 v5; // rdx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &LockHandle);
  v5 = 1LL;
  if ( a2 == 1 )
  {
    v4 = IopIrpExtensionStatus == 0;
    IopIrpExtensionStatus |= a1;
    if ( (a1 & 1) != 0 )
      ++dword_1403E9614;
    if ( (a1 & 2) != 0 )
      ++dword_1403E9618;
    if ( v4 )
    {
      LOBYTE(v4) = 1;
LABEL_16:
      IopUpdateFunctionPointers(4LL, v5, v4);
    }
  }
  else
  {
    if ( (a1 & 1) != 0 && !--dword_1403E9614 )
      IopIrpExtensionStatus &= ~1u;
    if ( (a1 & 2) != 0 && !--dword_1403E9618 )
      IopIrpExtensionStatus &= ~2u;
    if ( !IopIrpExtensionStatus )
    {
      LOBYTE(v4) = 1;
      v5 = 0LL;
      goto LABEL_16;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
