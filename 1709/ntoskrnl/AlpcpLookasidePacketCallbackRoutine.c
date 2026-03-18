/*
 * XREFs of AlpcpLookasidePacketCallbackRoutine @ 0x14006B170
 * Callers:
 *     <none>
 * Callees:
 *     IoSetIoCompletionEx2 @ 0x1400759E0 (IoSetIoCompletionEx2.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140083060 (ObReferenceObjectSafeWithTag.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x1400D2F28 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

LONG_PTR __fastcall AlpcpLookasidePacketCallbackRoutine(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  int v5; // ebp
  int v6; // r14d
  unsigned __int8 CurrentIrql; // al
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  LONG_PTR result; // rax
  void *v12; // rdi
  __int64 v13; // [rsp+40h] [rbp-38h] BYREF
  volatile signed __int64 *v14; // [rsp+48h] [rbp-30h]
  unsigned __int8 v15; // [rsp+50h] [rbp-28h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v2 = a2[2];
  v5 = 0;
  do
  {
    v6 = 0;
    v14 = (volatile signed __int64 *)v2;
    v13 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v15 = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v13, v2);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)v2, (__int64)&v13) )
    {
      KxWaitForLockOwnerShip(&v13);
    }
    v8 = *(_DWORD *)(v2 + 16);
    if ( v8 )
    {
      *(_DWORD *)(v2 + 16) = v8 - 1;
    }
    else
    {
      v9 = *(_DWORD *)(v2 + 20);
      if ( v9 )
      {
        *(_DWORD *)(v2 + 20) = v9 - 1;
        v6 = -1;
      }
      else
      {
        --*(_DWORD *)(v2 + 12);
        a1 = 0LL;
        *a2 = *(_QWORD *)(v2 + 32);
        *(_QWORD *)(v2 + 32) = a2;
        if ( !*(_DWORD *)(v2 + 12) && *(_DWORD *)(v2 + 24) )
          v5 = 1;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v13, retaddr);
    }
    else
    {
      _m_prefetchw(&v13);
      v10 = v13;
      if ( !v13 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64(v14, 0LL, (signed __int64)&v13) == &v13 )
          goto LABEL_13;
        v10 = KxWaitForLockChainValid(&v13);
      }
      v13 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v10 + 8), 1uLL);
    }
LABEL_13:
    result = v15;
    __writecr8(v15);
    if ( !a1 )
      goto LABEL_14;
  }
  while ( !(unsigned __int8)ObReferenceObjectSafeWithTag(*(_QWORD *)(v2 + 40), 1953261124LL) );
  v12 = *(void **)(v2 + 40);
  IoSetIoCompletionEx2((_DWORD)v12, *(_QWORD *)(v2 + 48), v6, 0, 0LL, 0, a1, 0);
  result = ObfDereferenceObjectWithTag(v12, 0x746C6644u);
LABEL_14:
  if ( v5 )
    return AlpcpDeferredFreeCompletionPacketLookaside((PVOID)v2);
  return result;
}
