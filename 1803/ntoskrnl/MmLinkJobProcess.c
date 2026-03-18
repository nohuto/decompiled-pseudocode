/*
 * XREFs of MmLinkJobProcess @ 0x140531244
 * Callers:
 *     PspEstablishJobHierarchy @ 0x140530FA8 (PspEstablishJobHierarchy.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiInsertSharedCommitNode @ 0x140595350 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x140595640 (MiRemoveSharedCommitNode.c)
 */

__int64 __fastcall MmLinkJobProcess(__int64 a1, __int64 a2)
{
  int inserted; // r15d
  __int64 v4; // r13
  volatile signed __int64 *v5; // r12
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rsi
  _QWORD *v9; // r14
  __int64 v10; // r13
  _QWORD *PoolWithTag; // rax
  __int64 ***v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  __int64 *v16; // rax
  __int64 *v17; // rcx
  __int64 *v18; // rsi
  __int64 v19; // r14
  __int64 *v22; // rcx
  __int64 *v23; // rax
  __int64 i; // rsi
  __int64 *v25; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v26; // [rsp+28h] [rbp-8h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp+48h]

  inserted = 0;
  v26 = &v25;
  v25 = (__int64 *)&v25;
  v4 = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (volatile signed __int64 *)(a2 + 1928);
  ExAcquirePushLockExclusiveEx(a2 + 1928, 0LL);
  if ( (*(_DWORD *)(a2 + 1740) & 0x10) == 0 )
  {
    v8 = (_QWORD *)(a2 + 1936);
    v9 = *(_QWORD **)(a2 + 1936);
    if ( v9 != (_QWORD *)(a2 + 1936) )
    {
      while ( 1 )
      {
        v10 = v9[2];
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x6E53694Du);
        if ( !PoolWithTag )
          break;
        PoolWithTag[7] = v10;
        PoolWithTag[4] = *(v9 - 1);
        v12 = (__int64 ***)(PoolWithTag + 5);
        v13 = v26;
        if ( *v26 != (__int64 *)&v25 )
          __fastfail(3u);
        v12[1] = v26;
        *v12 = &v25;
        *v13 = v12;
        v26 = (__int64 **)v12;
        v9 = (_QWORD *)*v9;
        if ( v9 == v8 )
          goto LABEL_6;
      }
      inserted = -1073741670;
LABEL_6:
      v4 = a1;
    }
    while ( (_QWORD *)*v8 != v8 )
      MiRemoveSharedCommitNode(*(_QWORD *)(*v8 + 16LL), a2, 1LL);
    if ( inserted < 0 )
    {
      while ( 1 )
      {
        v22 = v25;
        if ( v25 == (__int64 *)&v25 )
          break;
        if ( (__int64 **)v25[1] != &v25 || (v23 = (__int64 *)*v25, *(__int64 **)(*v25 + 8) != v25) )
          __fastfail(3u);
        v25 = (__int64 *)*v25;
        v23[1] = (__int64)&v25;
        ExFreePoolWithTag(v22 - 5, 0);
      }
    }
    else if ( (*(_DWORD *)(a2 + 1740) & 8) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a2 + 1740), 8u);
    }
  }
  v14 = *(_QWORD **)(v4 + 48);
  v15 = (_QWORD *)(a2 + 1136);
  if ( *v14 != v4 + 40 )
    __fastfail(3u);
  *v15 = v4 + 40;
  *(_QWORD *)(a2 + 1144) = v14;
  *v14 = v15;
  *(_QWORD *)(v4 + 48) = v15;
  *(_QWORD *)(a2 + 944) = v4;
  while ( 1 )
  {
    v16 = v25;
    if ( v25 == (__int64 *)&v25 )
      break;
    if ( (__int64 **)v25[1] != &v25 || (v17 = (__int64 *)*v25, *(__int64 **)(*v25 + 8) != v25) )
      __fastfail(3u);
    v25 = (__int64 *)*v25;
    v17[1] = (__int64)&v25;
    v18 = v16 - 5;
    if ( inserted >= 0 )
    {
      v19 = v18[7];
      if ( v18[4] )
      {
        do
        {
          inserted = MiInsertSharedCommitNode(v19, a2, 1LL);
          if ( inserted < 0 )
            break;
        }
        while ( v18[4]-- != 1 );
      }
    }
    ExFreePoolWithTag(v18, 0);
  }
  if ( inserted < 0 )
  {
    for ( i = a2 + 1936; *(_QWORD *)i != i; MiRemoveSharedCommitNode(*(_QWORD *)(*(_QWORD *)i + 16LL), a2, 1LL) )
      ;
    _InterlockedAnd((volatile signed __int32 *)(a2 + 1740), 0xFFFFFFF7);
    _InterlockedOr((volatile signed __int32 *)(a2 + 1740), 0x10u);
  }
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5, (__int64)v14, v6, v7);
  KeAbPostRelease((ULONG_PTR)v5);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
