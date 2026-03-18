/*
 * XREFs of CmpSearchKeyControlBlockTreeEx @ 0x1406F38B0
 * Callers:
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406F4248 (CmKeyBodyReplicateToVirtual.c)
 *     CmpCommitDiscardReplacePost @ 0x1406FABE0 (CmpCommitDiscardReplacePost.c)
 *     CmpRefreshHive @ 0x14070306C (CmpRefreshHive.c)
 *     CmpCommitRenameKeyUoW @ 0x140703A10 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140704408 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpLockKcbExclusive @ 0x14049D0D8 (CmpLockKcbExclusive.c)
 *     CmpFreeKeyControlBlock @ 0x1404A82B0 (CmpFreeKeyControlBlock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404A9A60 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpRemoveFromDelayedClose @ 0x1405E2F64 (CmpRemoveFromDelayedClose.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x1406FA660 (CmpLockHashEntryByIndexExclusive.c)
 *     CmpUnlockHashEntryByIndex @ 0x1406FA74C (CmpUnlockHashEntryByIndex.c)
 */

char __fastcall CmpSearchKeyControlBlockTreeEx(
        __int64 (__fastcall *a1)(ULONG_PTR, ULONG_PTR, __int64),
        ULONG_PTR a2,
        __int64 a3,
        char a4)
{
  __int64 v4; // r13
  unsigned int v6; // edi
  char v8; // bl
  unsigned int v9; // ebp
  __int64 *v10; // r12
  __int64 v11; // rax
  __int64 *v12; // r14
  ULONG_PTR v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v22; // [rsp+20h] [rbp-98h]
  __int64 v23; // [rsp+28h] [rbp-90h]
  __int64 v26; // [rsp+40h] [rbp-78h]
  _BYTE v27[48]; // [rsp+48h] [rbp-70h] BYREF

  v4 = *(_QWORD *)(a2 + 1640);
  v6 = *(_DWORD *)(a2 + 1648);
  v23 = v4;
  v22 = v6;
  CmpAttachToRegistryProcess((__int64)v27);
  v8 = 0;
  v9 = 0;
  if ( !v6 )
  {
LABEL_28:
    KiUnstackDetachProcess((__int64)v27, 0LL);
    return 1;
  }
  v10 = (__int64 *)(v4 + 16);
  while ( 1 )
  {
    if ( a4 )
      CmpLockHashEntryByIndexExclusive(a2, v9);
    v11 = *v10;
    v12 = v10;
    if ( *v10 )
      break;
LABEL_25:
    if ( a4 )
      CmpUnlockHashEntryByIndex((PVOID)a2);
    ++v9;
    v10 += 3;
    if ( v9 >= v6 )
      goto LABEL_28;
  }
  while ( 1 )
  {
    v13 = v11 - 8;
    if ( a4 )
      CmpLockKcbExclusive(v11 - 8);
    if ( !*(_DWORD *)v13 )
    {
      CmpRemoveFromDelayedClose(v13);
      CmpCleanUpKcbCacheWithLock(v13, 0LL);
      if ( a4 )
      {
        CmpUnlockKcb(v13, v14, v15, v16);
      }
      else if ( (*(_DWORD *)(v13 + 4) & 0x80000) != 0 )
      {
        CmpFreeKeyControlBlock(v13);
      }
      v12 = (__int64 *)(v4 + 24LL * v9 + 16);
      goto LABEL_23;
    }
    v26 = *(_QWORD *)(v13 + 16);
    v17 = a1(v13, a2, a3);
    if ( v17 == 1 )
      break;
    if ( v17 == 3 )
    {
      if ( a4 )
        CmpUnlockKcb(v13, v18, v19, v20);
      goto LABEL_34;
    }
    if ( v17 == 2 )
    {
      if ( a4 )
        CmpUnlockKcb(v13, v18, v19, v20);
      *v12 = v26;
    }
    else
    {
      v12 = (__int64 *)(v13 + 16);
      if ( a4 )
        CmpUnlockKcb(v13, v18, v19, v20);
    }
    v4 = v23;
LABEL_23:
    v11 = *v12;
    if ( !*v12 )
    {
      v6 = v22;
      goto LABEL_25;
    }
  }
  if ( a4 )
    CmpUnlockKcb(v13, v18, v19, v20);
  v8 = 1;
LABEL_34:
  CmpUnlockHashEntryByIndex((PVOID)a2);
  return v8;
}
