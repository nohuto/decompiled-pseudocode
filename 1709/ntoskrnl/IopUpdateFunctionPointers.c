/*
 * XREFs of IopUpdateFunctionPointers @ 0x1401F56D4
 * Callers:
 *     IopIrpExtensionControl @ 0x1401F5504 (IopIrpExtensionControl.c)
 *     IoPerfInit @ 0x1401FB2F0 (IoPerfInit.c)
 *     IoPerfReset @ 0x1401FB378 (IoPerfReset.c)
 *     IoVerifierInit @ 0x1407A45E8 (IoVerifierInit.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall IopUpdateFunctionPointers(int a1, char a2, char a3)
{
  int v6; // eax
  __int64 result; // rax
  __int32 v8; // ecx
  __int32 v9; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( !a3 )
    KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &LockHandle);
  if ( a2 )
    v6 = a1 | IopFunctionPointerMask;
  else
    v6 = ~a1 & IopFunctionPointerMask;
  IopFunctionPointerMask = v6;
  if ( (v6 & 1) != 0 )
  {
    _InterlockedExchange(&IopDispatchAllocateIrp, 1);
    _InterlockedExchange(&IopDispatchCallDriver, 1);
    result = (unsigned int)_InterlockedExchange(&IopDispatchCompleteRequest, 1);
    _InterlockedExchange(&IopDispatchFreeIrp, 1);
  }
  else
  {
    _InterlockedExchange(&IopDispatchFreeIrp, 0);
    if ( (IopFunctionPointerMask & 2) != 0 )
    {
      v8 = 3;
      v9 = 3;
    }
    else
    {
      v9 = 0;
      v8 = 0;
    }
    _InterlockedExchange(&IopDispatchCallDriver, v9);
    _InterlockedExchange(&IopDispatchCompleteRequest, v8);
    result = (unsigned int)IopFunctionPointerMask;
    if ( (IopFunctionPointerMask & 4) != 0 )
      _InterlockedExchange(&IopDispatchAllocateIrp, 2);
    else
      result = (unsigned int)_InterlockedExchange(&IopDispatchAllocateIrp, 0);
  }
  if ( !a3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
  }
  return result;
}
