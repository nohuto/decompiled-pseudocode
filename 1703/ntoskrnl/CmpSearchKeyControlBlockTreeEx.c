/*
 * XREFs of CmpSearchKeyControlBlockTreeEx @ 0x1406662B0
 * Callers:
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14056AABC (CmKeyBodyReplicateToVirtual.c)
 *     CmpCommitDiscardReplacePost @ 0x14066D5A0 (CmpCommitDiscardReplacePost.c)
 *     CmpRefreshHive @ 0x14067309C (CmpRefreshHive.c)
 *     CmpCommitRenameKeyUoW @ 0x140673838 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140674188 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404910B0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpFreeKeyControlBlock @ 0x140491410 (CmpFreeKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1404916C8 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmpRemoveFromDelayedClose @ 0x140599B64 (CmpRemoveFromDelayedClose.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x14066A3D4 (CmpLockHashEntryByIndexExclusive.c)
 *     CmpUnlockHashEntryByIndex @ 0x14066A508 (CmpUnlockHashEntryByIndex.c)
 */

char __fastcall CmpSearchKeyControlBlockTreeEx(
        __int64 (__fastcall *a1)(__int64, ULONG_PTR, __int64),
        ULONG_PTR a2,
        __int64 a3,
        char a4)
{
  unsigned int v4; // edi
  char v5; // bl
  __int64 v6; // r13
  unsigned int v9; // ebp
  _QWORD *i; // r12
  _QWORD *v11; // r14
  __int64 v12; // rdi
  int v13; // eax
  __int64 v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+28h] [rbp-40h]
  unsigned int v18; // [rsp+78h] [rbp+10h]

  v4 = *(_DWORD *)(a2 + 2808);
  v5 = 0;
  v6 = *(_QWORD *)(a2 + 2800);
  v18 = v4;
  v15 = v6;
  v9 = 0;
  if ( !v4 )
    return 1;
  for ( i = (_QWORD *)(v6 + 16); ; i += 3 )
  {
    if ( a4 )
      CmpLockHashEntryByIndexExclusive(a2, v9);
    v11 = i;
    if ( *i )
      break;
LABEL_25:
    if ( a4 )
      CmpUnlockHashEntryByIndex(a2, v9);
    if ( ++v9 >= v4 )
      return 1;
  }
  while ( 1 )
  {
    v12 = *v11 - 8LL;
    if ( a4 )
      CmpLockKcbExclusive(*v11 - 8LL);
    if ( !*(_DWORD *)v12 )
    {
      CmpRemoveFromDelayedClose(v12);
      CmpCleanUpKcbCacheWithLock(v12, 0LL);
      if ( a4 )
      {
        CmpUnlockKcb(v12);
      }
      else if ( (*(_DWORD *)(v12 + 4) & 0x80000) != 0 )
      {
        CmpFreeKeyControlBlock(v12);
      }
      v11 = (_QWORD *)(v6 + 24LL * v9 + 16);
      goto LABEL_23;
    }
    v16 = *(_QWORD *)(v12 + 16);
    v13 = a1(v12, a2, a3);
    if ( v13 == 1 )
      break;
    if ( v13 == 3 )
    {
      if ( a4 )
        CmpUnlockKcb(v12);
      goto LABEL_34;
    }
    if ( v13 == 2 )
    {
      if ( a4 )
        CmpUnlockKcb(v12);
      *v11 = v16;
    }
    else
    {
      v11 = (_QWORD *)(v12 + 16);
      if ( a4 )
        CmpUnlockKcb(v12);
    }
    v6 = v15;
LABEL_23:
    if ( !*v11 )
    {
      v4 = v18;
      goto LABEL_25;
    }
  }
  if ( a4 )
    CmpUnlockKcb(v12);
  v5 = 1;
LABEL_34:
  CmpUnlockHashEntryByIndex(a2, v9);
  return v5;
}
