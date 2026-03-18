/*
 * XREFs of CmpRunDownDelayDerefKCBEngine @ 0x14054E498
 * Callers:
 *     CmpCleanUpKCBCacheTable @ 0x14054E3C0 (CmpCleanUpKCBCacheTable.c)
 *     CmpFreeAllMemory @ 0x1406F052C (CmpFreeAllMemory.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14049BB4C (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockKcbExclusive @ 0x14049D0D8 (CmpLockKcbExclusive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404A8840 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpIsLockAllowedByIndex @ 0x1406F32D8 (CmpIsLockAllowedByIndex.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x1406FA660 (CmpLockHashEntryByIndexExclusive.c)
 *     CmpUnlockHashEntryByIndex @ 0x1406FA74C (CmpUnlockHashEntryByIndex.c)
 */

void __fastcall CmpRunDownDelayDerefKCBEngine(__int64 a1, char a2)
{
  unsigned int v2; // esi
  __int64 v3; // r13
  char v4; // bp
  _QWORD *v5; // rbx
  __int64 v6; // rax
  ULONG_PTR v7; // rdi
  ULONG_PTR v8; // r14
  int v9; // edx
  char v10; // r12
  unsigned int v11; // r15d
  int v12; // r8d
  char v13; // bp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  ULONG_PTR v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  signed __int32 v27[8]; // [rsp+0h] [rbp-68h] BYREF
  char v28; // [rsp+70h] [rbp+8h] BYREF
  char v29; // [rsp+78h] [rbp+10h]

  v29 = a2;
  v2 = -1;
  v3 = 0LL;
  v4 = a2;
  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    v12 = *(_DWORD *)(a1 + 8) ^ (*(_DWORD *)(a1 + 8) >> 9);
    v2 = (*(_DWORD *)(v3 + 1648) - 1) & ((101027 * v12) ^ ((unsigned int)(101027 * v12) >> 9));
  }
  while ( 1 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
    v5 = (_QWORD *)CmpDelayDerefKCBListHead;
    if ( (__int64 *)CmpDelayDerefKCBListHead == &CmpDelayDerefKCBListHead )
      break;
    if ( *(__int64 **)(CmpDelayDerefKCBListHead + 8) != &CmpDelayDerefKCBListHead
      || (v6 = *(_QWORD *)CmpDelayDerefKCBListHead,
          *(_QWORD *)(*(_QWORD *)CmpDelayDerefKCBListHead + 8LL) != CmpDelayDerefKCBListHead) )
    {
      __fastfail(3u);
    }
    CmpDelayDerefKCBListHead = *(_QWORD *)CmpDelayDerefKCBListHead;
    v7 = (ULONG_PTR)(v5 - 27);
    *(_QWORD *)(v6 + 8) = &CmpDelayDerefKCBListHead;
    v5[1] = v5;
    *v5 = v5;
    _InterlockedOr(v27, 0);
    *((_BYTE *)v5 - 160) &= ~1u;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
    v8 = *(v5 - 24);
    v9 = *(_DWORD *)(v7 + 8) ^ (*(_DWORD *)(v7 + 8) >> 9);
    v10 = *(_BYTE *)(v8 + 2936);
    v11 = (*(_DWORD *)(v8 + 1648) - 1) & ((101027 * v9) ^ ((unsigned int)(101027 * v9) >> 9));
    if ( v4 )
    {
      CmpDereferenceKeyControlBlockWithLock((ULONG_PTR)(v5 - 27));
    }
    else
    {
      v13 = 0;
      v28 = 0;
      if ( !v3 )
        goto LABEL_14;
      if ( !(unsigned __int8)CmpIsLockAllowedByIndex(v3, v2, v8, v11, (__int64)&v28) )
      {
        ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
        *(_BYTE *)(v7 + 56) |= 1u;
        v26 = CmpDelayDerefKCBListHead;
        if ( *(__int64 **)(CmpDelayDerefKCBListHead + 8) != &CmpDelayDerefKCBListHead )
          __fastfail(3u);
        *v5 = CmpDelayDerefKCBListHead;
        v5[1] = &CmpDelayDerefKCBListHead;
        *(_QWORD *)(v26 + 8) = v5;
        CmpDelayDerefKCBListHead = (__int64)v5;
        break;
      }
      v13 = v28;
      if ( !v28 )
LABEL_14:
        CmpLockHashEntryByIndexExclusive(v8, v11);
      CmpLockKcbExclusive((__int64)(v5 - 27));
      v17 = *(_QWORD *)(v7 + 184);
      v18 = 0LL;
      if ( v17 )
      {
        v19 = *(_QWORD *)(v17 + 24);
        if ( v19 )
        {
          v18 = *(_QWORD *)(v19 + 16);
          CmpUnlockKcb(v7, v14, v15, v16);
          CmpLockKcbExclusive(v18);
          CmpLockKcbExclusive(v7);
        }
      }
      CmpDereferenceKeyControlBlockWithLock(v7);
      CmpUnlockKcb(v7, v20, v21, v22);
      if ( v18 )
        CmpUnlockKcb(v18, v23, v24, v25);
      if ( !v13 )
        CmpUnlockHashEntryByIndex((PVOID)v8);
      v4 = v29;
    }
    if ( v10 == 1 )
      CmpDoQueueLateUnloadWorker(v8);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
}
