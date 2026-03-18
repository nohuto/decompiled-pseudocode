/*
 * XREFs of CmpRunDownDelayDerefKCBEngine @ 0x1404CACEC
 * Callers:
 *     CmpCleanUpKCBCacheTable @ 0x1404CAC38 (CmpCleanUpKCBCacheTable.c)
 *     CmpFreeAllMemory @ 0x140662C0C (CmpFreeAllMemory.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14048D310 (CmpDoQueueLateUnloadWorker.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140490F80 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpLockKcbExclusive @ 0x1404916C8 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmpIsLockAllowedByIndex @ 0x1406657C8 (CmpIsLockAllowedByIndex.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x14066A3D4 (CmpLockHashEntryByIndexExclusive.c)
 *     CmpUnlockHashEntryByIndex @ 0x14066A508 (CmpUnlockHashEntryByIndex.c)
 */

void __fastcall CmpRunDownDelayDerefKCBEngine(__int64 a1, char a2)
{
  unsigned int v2; // edi
  __int64 v3; // r13
  char v4; // si
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  ULONG_PTR v8; // r14
  int v9; // edx
  char v10; // r12
  unsigned int v11; // r15d
  int v12; // r8d
  char v13; // si
  __int64 v14; // rax
  void *v15; // rbp
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  __int64 v18; // rax
  signed __int32 v19[8]; // [rsp+0h] [rbp-68h] BYREF
  char v20; // [rsp+70h] [rbp+8h] BYREF
  char v21; // [rsp+78h] [rbp+10h]

  v21 = a2;
  v2 = -1;
  v3 = 0LL;
  v4 = a2;
  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    v12 = *(_DWORD *)(a1 + 8) ^ (*(_DWORD *)(a1 + 8) >> 9);
    v2 = (*(_DWORD *)(v3 + 2808) - 1) & ((101027 * v12) ^ ((unsigned int)(101027 * v12) >> 9));
  }
  ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
  while ( 1 )
  {
    v5 = CmpDelayDerefKCBListHead;
    if ( (__int64 *)CmpDelayDerefKCBListHead == &CmpDelayDerefKCBListHead )
      break;
    v6 = *(_QWORD *)CmpDelayDerefKCBListHead;
    if ( *(__int64 **)(CmpDelayDerefKCBListHead + 8) != &CmpDelayDerefKCBListHead
      || *(_QWORD *)(v6 + 8) != CmpDelayDerefKCBListHead )
    {
      __fastfail(3u);
    }
    CmpDelayDerefKCBListHead = *(_QWORD *)CmpDelayDerefKCBListHead;
    v7 = v5 - 216;
    *(_QWORD *)(v6 + 8) = &CmpDelayDerefKCBListHead;
    *(_QWORD *)(v7 + 224) = v7 + 216;
    *(_QWORD *)(v7 + 216) = v7 + 216;
    _InterlockedOr(v19, 0);
    *(_BYTE *)(v7 + 56) &= ~1u;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
    v8 = *(_QWORD *)(v7 + 24);
    v9 = *(_DWORD *)(v7 + 8) ^ (*(_DWORD *)(v7 + 8) >> 9);
    v10 = *(_BYTE *)(v8 + 4112);
    v11 = (*(_DWORD *)(v8 + 2808) - 1) & ((101027 * v9) ^ ((unsigned int)(101027 * v9) >> 9));
    if ( v4 )
    {
      CmpDereferenceKeyControlBlockWithLock((volatile signed __int32 *)v7, 1u);
    }
    else
    {
      v13 = 0;
      v20 = 0;
      if ( !v3 )
        goto LABEL_16;
      if ( !(unsigned __int8)CmpIsLockAllowedByIndex(v3, v2, v8, v11, (__int64)&v20) )
      {
        ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
        *(_BYTE *)(v7 + 56) |= 1u;
        v17 = (_QWORD *)(v7 + 216);
        v18 = CmpDelayDerefKCBListHead;
        if ( *(__int64 **)(CmpDelayDerefKCBListHead + 8) != &CmpDelayDerefKCBListHead )
          __fastfail(3u);
        *v17 = CmpDelayDerefKCBListHead;
        v17[1] = &CmpDelayDerefKCBListHead;
        *(_QWORD *)(v18 + 8) = v17;
        CmpDelayDerefKCBListHead = (__int64)v17;
        break;
      }
      v13 = v20;
      if ( !v20 )
LABEL_16:
        CmpLockHashEntryByIndexExclusive(v8, v11);
      CmpLockKcbExclusive(v7);
      v14 = *(_QWORD *)(v7 + 184);
      v15 = 0LL;
      if ( v14 )
      {
        v16 = *(_QWORD *)(v14 + 24);
        if ( v16 )
        {
          v15 = *(void **)(v16 + 16);
          CmpUnlockKcb((PVOID)v7);
          CmpLockKcbExclusive((__int64)v15);
          CmpLockKcbExclusive(v7);
        }
      }
      CmpDereferenceKeyControlBlockWithLock((volatile signed __int32 *)v7, 0);
      CmpUnlockKcb((PVOID)v7);
      if ( v15 )
        CmpUnlockKcb(v15);
      if ( !v13 )
        CmpUnlockHashEntryByIndex(v8, v11);
      v4 = v21;
    }
    if ( v10 == 1 )
      CmpDoQueueLateUnloadWorker(v8);
    ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
}
