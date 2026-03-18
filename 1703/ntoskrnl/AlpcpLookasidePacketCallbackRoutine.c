/*
 * XREFs of AlpcpLookasidePacketCallbackRoutine @ 0x1400ED6B0
 * Callers:
 *     <none>
 * Callees:
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x14003F300 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     IoSetIoCompletionEx2 @ 0x1400E2780 (IoSetIoCompletionEx2.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400EFD50 (ObReferenceObjectSafeWithTag.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __fastcall AlpcpLookasidePacketCallbackRoutine(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  int v5; // ebp
  __int64 v6; // r14
  unsigned __int8 CurrentIrql; // al
  _QWORD *v8; // rdx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  void *v12; // rdi
  __int64 v13; // [rsp+40h] [rbp-38h] BYREF
  volatile signed __int64 *v14; // [rsp+48h] [rbp-30h]
  unsigned __int8 v15; // [rsp+50h] [rbp-28h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v2 = a2[2];
  v5 = 0;
  do
  {
    v6 = 0LL;
    v14 = (volatile signed __int64 *)v2;
    v13 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v15 = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v13, v2);
    }
    else
    {
      v8 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v2, (__int64)&v13);
      if ( v8 )
        KxWaitForLockOwnerShip((__int64)&v13, v8);
    }
    v9 = *(_DWORD *)(v2 + 16);
    if ( v9 )
    {
      *(_DWORD *)(v2 + 16) = v9 - 1;
    }
    else
    {
      v10 = *(_DWORD *)(v2 + 20);
      if ( v10 )
      {
        *(_DWORD *)(v2 + 20) = v10 - 1;
        v6 = -1LL;
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
      v11 = v13;
      if ( !v13 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64(v14, 0LL, (signed __int64)&v13) == &v13 )
          goto LABEL_13;
        v11 = KxWaitForLockChainValid(&v13);
      }
      v13 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v11 + 8), 1uLL);
    }
LABEL_13:
    __writecr8(v15);
    if ( !a1 )
      goto LABEL_14;
  }
  while ( !(unsigned __int8)ObReferenceObjectSafeWithTag(*(_QWORD *)(v2 + 40), 1953261124LL) );
  v12 = *(void **)(v2 + 40);
  IoSetIoCompletionEx2((__int64)v12, *(_QWORD *)(v2 + 48), v6, 0, 0LL, 0, a1, 0);
  ObfDereferenceObjectWithTag(v12, 0x746C6644u);
LABEL_14:
  if ( v5 )
    AlpcpDeferredFreeCompletionPacketLookaside((_DWORD *)v2);
}
