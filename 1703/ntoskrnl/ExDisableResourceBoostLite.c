/*
 * XREFs of ExDisableResourceBoostLite @ 0x140135960
 * Callers:
 *     CcAllocateInitializeBcb @ 0x140119A5C (CcAllocateInitializeBcb.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14011C530 (KxWaitForLockOwnerShipWithIrql.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401FE96C (KiFastAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall ExDisableResourceBoostLite(PERESOURCE Resource)
{
  unsigned __int64 *p_SpinLock; // rcx
  char v3; // al
  _QWORD *v4; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 v6; // [rsp+68h] [rbp+10h] BYREF

  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  p_SpinLock = &Resource->SpinLock;
  v6 = 2;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = p_SpinLock;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v3 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, p_SpinLock, &v6);
  }
  else
  {
    v3 = 0;
    v4 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)&LockHandle);
    if ( v4 )
    {
      KxWaitForLockOwnerShipWithIrql((__int64)&LockHandle, v4, &v6);
      v3 = 1;
    }
  }
  if ( v3 )
  {
    _disable();
    __writecr8(v6);
  }
  Resource->Flag |= 8u;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  _enable();
}
