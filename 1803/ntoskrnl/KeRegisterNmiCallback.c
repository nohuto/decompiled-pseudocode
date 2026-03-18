/*
 * XREFs of KeRegisterNmiCallback @ 0x140240E80
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PVOID __stdcall KeRegisterNmiCallback(PNMI_CALLBACK CallbackRoutine, PVOID Context)
{
  PVOID *PoolWithTag; // rdi
  PVOID result; // rax
  KIRQL v6; // al
  unsigned __int64 v7; // rbx

  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x494D4E4Bu);
  result = 0LL;
  if ( PoolWithTag )
  {
    PoolWithTag[1] = CallbackRoutine;
    PoolWithTag[2] = Context;
    PoolWithTag[3] = PoolWithTag;
    v6 = KeAcquireSpinLockRaiseToDpc(&KiNmiCallbackListLock);
    *PoolWithTag = KiNmiCallbackListHead;
    KiNmiCallbackListHead = PoolWithTag;
    v7 = v6;
    KxReleaseSpinLock(&KiNmiCallbackListLock);
    __writecr8(v7);
    return PoolWithTag[3];
  }
  return result;
}
