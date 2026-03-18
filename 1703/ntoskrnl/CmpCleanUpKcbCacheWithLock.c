/*
 * XREFs of CmpCleanUpKcbCacheWithLock @ 0x1404910B0
 * Callers:
 *     CmpDelayCloseWorker @ 0x1404908F0 (CmpDelayCloseWorker.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140490F80 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpCleanUpKCBCacheTable @ 0x1404CAC38 (CmpCleanUpKCBCacheTable.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1406662B0 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     CmpFreeTransientPoolWithTag @ 0x1400DB880 (CmpFreeTransientPoolWithTag.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpRemoveKeyHashFromTableEntry @ 0x14044A4F0 (CmpRemoveKeyHashFromTableEntry.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14044CC04 (CmpDelayDerefKeyControlBlock.c)
 *     CmpArmDelayDerefKCBWorker @ 0x14044CCA8 (CmpArmDelayDerefKCBWorker.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140490F80 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpCleanUpKcbValueCache @ 0x140491380 (CmpCleanUpKcbValueCache.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1404D0178 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x1404D0244 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpEtwDumpKcb @ 0x140660E60 (CmpEtwDumpKcb.c)
 */

void __fastcall CmpCleanUpKcbCacheWithLock(ULONG_PTR BugCheckParameter4, __int64 a2)
{
  volatile signed __int32 *v2; // rbp
  char v3; // si
  _WORD *v5; // r14
  __int64 v6; // rdi
  unsigned int v7; // eax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rdi
  __int64 *v12; // rdx
  __int64 v13; // rax
  unsigned __int32 v14; // eax
  unsigned __int32 v15; // edx
  char v16; // bl
  _QWORD *v17; // rax
  _QWORD *v18; // rdi
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rax

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
    v5 = *(_WORD **)(BugCheckParameter4 + 72);
    v6 = 16LL
       * (((unsigned __int16)(-30045 * (v5[4] ^ (*((_DWORD *)v5 + 2) >> 9))) ^ (unsigned __int16)((unsigned __int64)(unsigned int)(101027 * (*((_DWORD *)v5 + 2) ^ (*((_DWORD *)v5 + 2) >> 9))) >> 9)) & 0x7FF);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)CmpNameCacheTable + v6, 0LL);
    v7 = *(_DWORD *)v5 & 1 | (2 * (*(_DWORD *)v5 >> 1) - 2);
    *(_DWORD *)v5 = v7;
    if ( v7 < 2 )
    {
      v8 = (char *)CmpNameCacheTable + v6 + 8;
      if ( v8 )
      {
        do
        {
          v9 = (_QWORD *)*v8;
          if ( !*v8 )
            break;
          if ( v9 == (_QWORD *)(v5 + 4) )
          {
            *v8 = v9[1];
            break;
          }
          v8 = v9 + 1;
        }
        while ( v9 != (_QWORD *)-8LL );
      }
      CmpFreeTransientPoolWithTag(v5, 0x624E4D43u);
    }
    ExReleasePushLockEx((ULONG_PTR)CmpNameCacheTable + v6, 0LL);
    if ( (*(_DWORD *)(BugCheckParameter4 + 4) & 4) != 0 )
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter4 + 104), 0x6E494D43u);
    v10 = *(_QWORD **)(BugCheckParameter4 + 184);
    if ( v10 )
    {
      v20 = v10[3];
      if ( v20 )
      {
        v21 = *v10;
        v2 = *(volatile signed __int32 **)(v20 + 16);
        v22 = (_QWORD *)v10[1];
        if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*v22 != v10 )
          __fastfail(3u);
        *v22 = v21;
        *(_QWORD *)(v21 + 8) = v22;
      }
      ExFreePoolWithTag(v10, 0);
      *(_QWORD *)(BugCheckParameter4 + 184) = 0LL;
    }
    v11 = *(_QWORD *)(BugCheckParameter4 + 64);
    if ( (*(_DWORD *)(BugCheckParameter4 + 4) & 0x20000) != 0 )
    {
      CmpLockDeletedHashEntryExclusiveByKcb(BugCheckParameter4);
      CmpRemoveKeyHashFromTableEntry(
        BugCheckParameter4 + 8,
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 24) + 2816LL)
      + 24
      * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter4 + 24) + 2824LL) - 1) & ((unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 8) ^ (*(_DWORD *)(BugCheckParameter4 + 8) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 8) ^ (*(_DWORD *)(BugCheckParameter4 + 8) >> 9))) >> 9))));
      CmpUnlockDeletedHashEntryByKcb(BugCheckParameter4);
    }
    else
    {
      v12 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 24) + 2800LL)
                      + 8
                      * (3
                       * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter4 + 24) + 2808LL) - 1) & ((unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 8) ^ (*(_DWORD *)(BugCheckParameter4 + 8) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 8) ^ (*(_DWORD *)(BugCheckParameter4 + 8) >> 9))) >> 9)))
                       + 2));
      if ( v12 )
      {
        do
        {
          v13 = *v12;
          if ( !*v12 )
            break;
          if ( v13 == BugCheckParameter4 + 8 )
          {
            *v12 = *(_QWORD *)(v13 + 8);
            break;
          }
          v12 = (__int64 *)(v13 + 8);
        }
        while ( v13 != -8 );
      }
    }
    *(_DWORD *)(BugCheckParameter4 + 4) |= 0x80000u;
    if ( v2 )
    {
      if ( v3 )
        CmpDereferenceKeyControlBlockWithLock(v2, 1u);
      else
        CmpDelayDerefKeyControlBlock((__int64)v2);
    }
    if ( v11 )
    {
      if ( v3 )
      {
        CmpDereferenceKeyControlBlockWithLock((volatile signed __int32 *)v11, 1u);
      }
      else
      {
        v14 = *(_DWORD *)v11;
        if ( *(_DWORD *)v11 <= 1u )
        {
LABEL_24:
          v16 = 0;
          ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
          *(_BYTE *)(v11 + 56) |= 1u;
          v17 = (_QWORD *)qword_14036B0B8;
          v18 = (_QWORD *)(v11 + 216);
          if ( *(__int64 **)qword_14036B0B8 != &CmpDelayDerefKCBListHead )
            __fastfail(3u);
          v19 = CmpDelayDerefKCBWorkItemActive == 0;
          *v18 = &CmpDelayDerefKCBListHead;
          v18[1] = v17;
          *v17 = v18;
          qword_14036B0B8 = (__int64)v18;
          if ( v19 )
          {
            CmpDelayDerefKCBWorkItemActive = 1;
            v16 = 1;
          }
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
          if ( v16 )
            CmpArmDelayDerefKCBWorker();
        }
        else
        {
          while ( 1 )
          {
            v15 = v14;
            v14 = _InterlockedCompareExchange((volatile signed __int32 *)v11, v14 - 1, v14);
            if ( v14 == v15 )
              break;
            if ( v14 <= 1 )
              goto LABEL_24;
          }
        }
      }
    }
  }
}
