/*
 * XREFs of ExpConvertExclusiveToSharedLite @ 0x14011BAE8
 * Callers:
 *     ExConvertExclusiveToSharedLite @ 0x14011BA60 (ExConvertExclusiveToSharedLite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14008B4F0 (KxWaitForLockOwnerShipWithIrql.c)
 *     ExpApplyPriorityBoost @ 0x14008B550 (ExpApplyPriorityBoost.c)
 *     KeWakeWaitChain @ 0x140115E38 (KeWakeWaitChain.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140204C6C (KiFastAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall ExpConvertExclusiveToSharedLite(__int64 a1)
{
  unsigned __int64 *v2; // rcx
  char v3; // al
  _QWORD *v4; // rdx
  volatile signed __int32 *v5; // rax
  int v6; // ebx
  char v7; // si
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int8 v10; // [rsp+60h] [rbp+20h] BYREF
  volatile signed __int32 *v11; // [rsp+68h] [rbp+28h] BYREF

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
    v4 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v2, (__int64)&LockHandle);
    if ( v4 )
    {
      KxWaitForLockOwnerShipWithIrql((__int64)&LockHandle, v4, &v10);
      v3 = 1;
    }
  }
  if ( v3 )
  {
    _disable();
    __writecr8(v10);
  }
  *(_WORD *)(a1 + 26) &= ~0x80u;
  v5 = *(volatile signed __int32 **)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0LL;
  v6 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 64) += v6;
  v7 = *(_BYTE *)(a1 + 27);
  v11 = v5;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  _enable();
  result = KeWakeWaitChain(&v11, 0, 0);
  if ( v6 && v7 )
    result = (__int64)ExpApplyPriorityBoost(a1, 0xFF00u, (__int64)KeGetCurrentThread());
  __incgsdword(0x6374u);
  return result;
}
