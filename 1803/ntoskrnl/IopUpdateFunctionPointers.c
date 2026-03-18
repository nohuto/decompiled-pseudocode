/*
 * XREFs of IopUpdateFunctionPointers @ 0x140232C5C
 * Callers:
 *     IopIrpExtensionControl @ 0x140232A24 (IopIrpExtensionControl.c)
 *     IoPerfInit @ 0x140238024 (IoPerfInit.c)
 *     IoPerfReset @ 0x1402380AC (IoPerfReset.c)
 *     IoVerifierInit @ 0x1408115A8 (IoVerifierInit.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall IopUpdateFunctionPointers(int a1, char a2, char a3)
{
  int v6; // eax
  __int32 v7; // r8d
  volatile __int32 *v8; // rcx
  __int64 result; // rax
  __int32 v10; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( !a3 )
    KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &LockHandle);
  if ( a2 )
    v6 = a1 | IopFunctionPointerMask;
  else
    v6 = IopFunctionPointerMask & ~a1;
  v7 = 1;
  IopFunctionPointerMask = v6;
  if ( (v6 & 1) != 0 )
  {
    _InterlockedExchange(&IopDispatchAllocateIrp, 1);
    _InterlockedExchange(&IopDispatchCallDriver, 1);
    v8 = &IopDispatchFreeIrp;
    result = (unsigned int)_InterlockedExchange(&IopDispatchCompleteRequest, 1);
  }
  else
  {
    v7 = 2;
    _InterlockedExchange(&IopDispatchFreeIrp, 0);
    v8 = &IopDispatchAllocateIrp;
    v10 = (IopFunctionPointerMask & 2) != 0 ? 3 : 0;
    _InterlockedExchange(&IopDispatchCallDriver, v10);
    _InterlockedExchange(&IopDispatchCompleteRequest, v10);
    result = (unsigned int)IopFunctionPointerMask;
    if ( (IopFunctionPointerMask & 4) == 0 )
      v7 = 0;
  }
  _InterlockedExchange(v8, v7);
  if ( !a3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
  }
  return result;
}
