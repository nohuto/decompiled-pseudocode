/*
 * XREFs of CmpCleanUpKcbCacheWithLock @ 0x140478800
 * Callers:
 *     CmpCleanUpKCBCacheTable @ 0x14046EB3C (CmpCleanUpKCBCacheTable.c)
 *     CmpDelayCloseWorker @ 0x140477EE0 (CmpDelayCloseWorker.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404784E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14068FD50 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x140472D04 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x140472DD0 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404784E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140478920 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpCleanUpKcbValueCache @ 0x1404789E8 (CmpCleanUpKcbValueCache.c)
 *     CmpRemoveKeyHashFromTableEntry @ 0x140478A74 (CmpRemoveKeyHashFromTableEntry.c)
 *     CmpDelayDerefKeyControlBlock @ 0x140478AA0 (CmpDelayDerefKeyControlBlock.c)
 *     CmpRemoveKeyHashFromDeletedKcbTable @ 0x1405938EC (CmpRemoveKeyHashFromDeletedKcbTable.c)
 *     CmpEtwDumpKcb @ 0x140689DE4 (CmpEtwDumpKcb.c)
 */

void __fastcall CmpCleanUpKcbCacheWithLock(ULONG_PTR BugCheckParameter4, __int64 a2)
{
  ULONG_PTR v2; // rbp
  char v3; // si
  _QWORD *v5; // rcx
  ULONG_PTR v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rax

  v2 = 0LL;
  v3 = a2;
  if ( !*(_DWORD *)BugCheckParameter4 )
  {
    if ( CmpTraceRoutine )
    {
      LOBYTE(a2) = 23;
      CmpEtwDumpKcb(BugCheckParameter4, a2);
    }
    CmpCleanUpKcbValueCache(BugCheckParameter4);
    CmpDereferenceNameControlBlockWithLock(*(_QWORD *)(BugCheckParameter4 + 72));
    if ( (*(_DWORD *)(BugCheckParameter4 + 4) & 4) != 0 )
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter4 + 104), 0x6E494D43u);
    v5 = *(_QWORD **)(BugCheckParameter4 + 184);
    if ( v5 )
    {
      v7 = v5[3];
      if ( v7 )
      {
        v8 = *v5;
        v2 = *(_QWORD *)(v7 + 16);
        if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v9 = (_QWORD *)v5[1], (_QWORD *)*v9 != v5) )
          __fastfail(3u);
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
      }
      ExFreePoolWithTag(v5, 0);
      *(_QWORD *)(BugCheckParameter4 + 184) = 0LL;
    }
    v6 = *(_QWORD *)(BugCheckParameter4 + 64);
    if ( (*(_DWORD *)(BugCheckParameter4 + 4) & 0x20000) != 0 )
    {
      CmpLockDeletedHashEntryExclusiveByKcb(BugCheckParameter4);
      CmpRemoveKeyHashFromDeletedKcbTable(*(_QWORD *)(BugCheckParameter4 + 24), BugCheckParameter4 + 8);
      CmpUnlockDeletedHashEntryByKcb(BugCheckParameter4);
    }
    else
    {
      CmpRemoveKeyHashFromTableEntry(
        BugCheckParameter4 + 8,
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 24) + 2800LL)
      + 24
      * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter4 + 24) + 2808LL) - 1) & ((unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 8) ^ (*(_DWORD *)(BugCheckParameter4 + 8) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 8) ^ (*(_DWORD *)(BugCheckParameter4 + 8) >> 9))) >> 9))));
    }
    *(_DWORD *)(BugCheckParameter4 + 4) |= 0x80000u;
    if ( v2 )
    {
      if ( v3 )
        CmpDereferenceKeyControlBlockWithLock(v2);
      else
        CmpDelayDerefKeyControlBlock(v2);
    }
    if ( v6 )
    {
      if ( v3 )
        CmpDereferenceKeyControlBlockWithLock(v6);
      else
        CmpDelayDerefKeyControlBlock(v6);
    }
  }
}
