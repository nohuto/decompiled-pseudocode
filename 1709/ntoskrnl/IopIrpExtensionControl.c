/*
 * XREFs of IopIrpExtensionControl @ 0x1401F5504
 * Callers:
 *     IopEtwEnableCallback @ 0x1406B4D50 (IopEtwEnableCallback.c)
 *     IoRegisterIoTracking @ 0x1406B9050 (IoRegisterIoTracking.c)
 *     IoUnregisterIoTracking @ 0x1406B9160 (IoUnregisterIoTracking.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     IopUpdateFunctionPointers @ 0x1401F56D4 (IopUpdateFunctionPointers.c)
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
      ++dword_1403A3094;
    if ( (a1 & 2) != 0 )
      ++dword_1403A3098;
    if ( v4 )
    {
      LOBYTE(v4) = 1;
LABEL_16:
      IopUpdateFunctionPointers(4LL, v5, v4);
    }
  }
  else
  {
    if ( (a1 & 1) != 0 && !--dword_1403A3094 )
      IopIrpExtensionStatus &= ~1u;
    if ( (a1 & 2) != 0 && !--dword_1403A3098 )
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
