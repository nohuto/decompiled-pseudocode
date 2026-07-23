/*
 * XREFs of FsRtlFastUnlockSingleShared @ 0x140068480
 * Callers:
 *     FsRtlFastUnlockSingle @ 0x140068A40 (FsRtlFastUnlockSingle.c)
 *     FsRtlPrivateRemoveLock @ 0x1402251F0 (FsRtlPrivateRemoveLock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlFindFirstOverlappingSharedNode @ 0x1400698E4 (FsRtlFindFirstOverlappingSharedNode.c)
 *     RtlDelete @ 0x140069CC0 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x140069D58 (FsRtlPrivateResetLowestLockOffset.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1400B0C34 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlSplitLocks @ 0x1400B1024 (FsRtlSplitLocks.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FsRtlFastUnlockSingleShared(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        char a8,
        char a9)
{
  unsigned __int64 v9; // rbx
  KSPIN_LOCK *v10; // rbp
  KIRQL v13; // al
  KSPIN_LOCK v14; // rcx
  unsigned int v15; // edi
  KIRQL v16; // r12
  __int64 FirstOverlappingSharedNode; // rax
  _RTL_SPLAY_LINKS *v18; // r10
  _QWORD *v19; // r14
  unsigned __int64 v20; // rax
  _QWORD *v21; // rsi
  _QWORD *v22; // r15
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  bool v26; // cc
  __int64 v27; // r8
  unsigned __int64 v29; // rcx
  __int64 v30; // [rsp+80h] [rbp+8h] BYREF
  __int64 v31; // [rsp+88h] [rbp+10h]
  unsigned __int64 v32; // [rsp+90h] [rbp+18h] BYREF
  _QWORD *v33; // [rsp+98h] [rbp+20h]

  v33 = a4;
  v31 = a2;
  v9 = *a3;
  v10 = (KSPIN_LOCK *)(a1 + 24);
  v32 = *a3;
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 24));
  v14 = v10[1];
  v15 = 0;
  v16 = v13;
  if ( !v14 )
  {
    KxReleaseSpinLock(v10);
    __writecr8(v16);
    return 3221225598LL;
  }
  v30 = *a4 + v9 - 1;
  FirstOverlappingSharedNode = FsRtlFindFirstOverlappingSharedNode(v14, (unsigned int)&v32, (unsigned int)&v30, 0, 0LL);
  v18 = (_RTL_SPLAY_LINKS *)FirstOverlappingSharedNode;
  if ( !FirstOverlappingSharedNode
    || (v19 = (_QWORD *)(FirstOverlappingSharedNode - 24), v20 = 0LL, v21 = (_QWORD *)*v19, v22 = v19, v30 = 0LL, !v21) )
  {
LABEL_33:
    v15 = -1073741698;
    goto LABEL_27;
  }
  v23 = a6;
  v24 = a5;
  v25 = v31;
  while ( 1 )
  {
    if ( v21[4] == v31 && v21[5] == a5 && *((_DWORD *)v21 + 7) == a6 )
    {
      v26 = v21[1] <= v9;
      if ( v21[1] != v9 )
        goto LABEL_29;
      if ( v21[2] == *v33 )
        break;
    }
    v26 = v21[1] <= v9;
LABEL_29:
    if ( v26 )
    {
      v29 = v21[6];
      v22 = v21;
      v21 = (_QWORD *)*v21;
      if ( v20 < v29 )
        v20 = v29;
      v30 = v20;
      if ( v21 )
        continue;
    }
    goto LABEL_33;
  }
  if ( *(_QWORD **)(v31 + 120) == v21 + 1 )
    *(_QWORD *)(v31 + 120) = 0LL;
  if ( *v22 == v19[6] )
    v19[6] = v22;
  *v22 = *v21;
  if ( v22 == v19 )
  {
    if ( !*v19 )
    {
      v10[1] = (KSPIN_LOCK)RtlDelete(v18);
      ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, v19);
      v19 = 0LL;
    }
    if ( *(_QWORD *)a1 == v21[1] )
      FsRtlPrivateResetLowestLockOffset(a1, v25, v23, v24);
  }
  if ( v19 )
    FsRtlSplitLocks(v19, v22, v21 + 6, &v30);
  if ( !a8 && *(_QWORD *)(a1 + 16) )
  {
    KxReleaseSpinLock(v10);
    __writecr8(v16);
    (*(void (__fastcall **)(__int64, _QWORD *))(a1 + 16))(a7, v21 + 1);
    v16 = KeAcquireSpinLockRaiseToDpc(v10);
  }
  ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, v21);
  if ( a9 )
  {
    if ( v10[3] )
    {
      LOBYTE(v27) = v16;
      FsRtlPrivateCheckWaitingLocks(a1, v10, v27);
    }
  }
LABEL_27:
  KxReleaseSpinLock(v10);
  __writecr8(v16);
  return v15;
}
