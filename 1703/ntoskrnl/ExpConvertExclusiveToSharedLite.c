/*
 * XREFs of ExpConvertExclusiveToSharedLite @ 0x140025ACC
 * Callers:
 *     ExConvertExclusiveToSharedLite @ 0x140025A40 (ExConvertExclusiveToSharedLite.c)
 * Callees:
 *     KeWakeWaitChain @ 0x14002CAF8 (KeWakeWaitChain.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpApplyPriorityBoost @ 0x1400913C0 (ExpApplyPriorityBoost.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14011C530 (KxWaitForLockOwnerShipWithIrql.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401FE96C (KiFastAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall ExpConvertExclusiveToSharedLite(__int64 a1)
{
  unsigned __int64 *v2; // rcx
  char v3; // al
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // ebx
  int v7; // esi
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int8 v10; // [rsp+60h] [rbp+20h] BYREF
  __int64 v11; // [rsp+68h] [rbp+28h] BYREF

  v10 = 2;
  v2 = (unsigned __int64 *)(a1 + 96);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = v2;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v3 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, v2, &v10);
  }
  else
  {
    v3 = 0;
    v4 = _InterlockedExchange64((volatile __int64 *)v2, (__int64)&LockHandle);
    if ( v4 )
    {
      KxWaitForLockOwnerShipWithIrql(&LockHandle, v4, &v10);
      v3 = 1;
    }
  }
  if ( v3 )
  {
    _disable();
    __writecr8(v10);
  }
  *(_WORD *)(a1 + 26) &= ~0x80u;
  v5 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0LL;
  v6 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 64) += v6;
  v7 = *(unsigned __int8 *)(a1 + 27);
  v11 = v5;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  _enable();
  result = KeWakeWaitChain(&v11, 0LL, 0LL);
  if ( v6 && v7 )
    result = ExpApplyPriorityBoost(a1);
  __incgsdword(0x64B4u);
  return result;
}
