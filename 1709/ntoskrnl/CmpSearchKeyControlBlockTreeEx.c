/*
 * XREFs of CmpSearchKeyControlBlockTreeEx @ 0x14068FD50
 * Callers:
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140690658 (CmKeyBodyReplicateToVirtual.c)
 *     CmpCommitDiscardReplacePost @ 0x140697C10 (CmpCommitDiscardReplacePost.c)
 *     CmpRefreshHive @ 0x14069E158 (CmpRefreshHive.c)
 *     CmpCommitRenameKeyUoW @ 0x14069E7D0 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14069F008 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140478800 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpFreeKeyControlBlock @ 0x140478B50 (CmpFreeKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x140478D48 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpRemoveFromDelayedClose @ 0x1405E5FC0 (CmpRemoveFromDelayedClose.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x140694A9C (CmpLockHashEntryByIndexExclusive.c)
 *     CmpUnlockHashEntryByIndex @ 0x140694B88 (CmpUnlockHashEntryByIndex.c)
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
      CmpUnlockHashEntryByIndex((PVOID)a2);
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
  CmpUnlockHashEntryByIndex((PVOID)a2);
  return v5;
}
