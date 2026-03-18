/*
 * XREFs of IopIrpExtensionControl @ 0x1401EFDEC
 * Callers:
 *     IopEtwEnableCallback @ 0x140688D70 (IopEtwEnableCallback.c)
 *     IoRegisterIoTracking @ 0x14068CFA0 (IoRegisterIoTracking.c)
 *     IoUnregisterIoTracking @ 0x14068D0B0 (IoUnregisterIoTracking.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     IopUpdateFunctionPointers @ 0x1401F0030 (IopUpdateFunctionPointers.c)
 */

__int64 __fastcall IopIrpExtensionControl(int a1, int a2)
{
  _BOOL8 v4; // r8
  __int64 v5; // rdx
  unsigned int v6; // eax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &LockHandle);
  v5 = 1LL;
  if ( a2 == 1 )
  {
    v4 = IopIrpExtensionStatus == 0;
    IopIrpExtensionStatus |= a1;
    if ( (a1 & 1) != 0 )
      ++dword_140387C6C;
    if ( (a1 & 2) != 0 )
      ++dword_140387C70;
    if ( v4 )
    {
      LOBYTE(v4) = 1;
LABEL_17:
      IopUpdateFunctionPointers(4LL, v5, v4);
    }
  }
  else
  {
    if ( (a1 & 1) == 0 || (--dword_140387C6C, dword_140387C6C) )
    {
      v6 = IopIrpExtensionStatus;
    }
    else
    {
      v6 = IopIrpExtensionStatus & 0xFFFFFFFE;
      IopIrpExtensionStatus &= ~1u;
    }
    if ( (a1 & 2) != 0 && !--dword_140387C70 )
    {
      v6 &= ~2u;
      IopIrpExtensionStatus = v6;
    }
    if ( !v6 )
    {
      LOBYTE(v4) = 1;
      v5 = 0LL;
      goto LABEL_17;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
