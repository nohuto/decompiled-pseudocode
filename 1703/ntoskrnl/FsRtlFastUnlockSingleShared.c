/*
 * XREFs of FsRtlFastUnlockSingleShared @ 0x14004E064
 * Callers:
 *     FsRtlFastUnlockSingle @ 0x14004F070 (FsRtlFastUnlockSingle.c)
 *     FsRtlPrivateRemoveLock @ 0x1401E3610 (FsRtlPrivateRemoveLock.c)
 * Callees:
 *     FsRtlPrivateCheckWaitingLocks @ 0x14000CC5C (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlSplitLocks @ 0x14000CF00 (FsRtlSplitLocks.c)
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x14004DB2C (FsRtlPrivateResetLowestLockOffset.c)
 *     RtlDelete @ 0x14004DBB0 (RtlDelete.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlFindFirstOverlappingSharedNode @ 0x140051B5C (FsRtlFindFirstOverlappingSharedNode.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FsRtlFastUnlockSingleShared(
        __int64 a1,
        _RTL_SPLAY_LINKS *a2,
        _RTL_SPLAY_LINKS **a3,
        _RTL_SPLAY_LINKS **a4,
        _RTL_SPLAY_LINKS *a5,
        int a6,
        __int64 a7,
        char a8,
        char a9)
{
  _RTL_SPLAY_LINKS *v9; // rbx
  KSPIN_LOCK *v10; // rbp
  KIRQL v13; // al
  KSPIN_LOCK v14; // rcx
  unsigned int v15; // edi
  KIRQL v16; // r12
  __int64 FirstOverlappingSharedNode; // rax
  _RTL_SPLAY_LINKS *v18; // r9
  _RTL_SPLAY_LINKS *v19; // r14
  _RTL_SPLAY_LINKS *v20; // rax
  _RTL_SPLAY_LINKS *Parent; // rsi
  _RTL_SPLAY_LINKS *v22; // r15
  bool v23; // cc
  _RTL_SPLAY_LINKS *v25; // [rsp+80h] [rbp+8h] BYREF
  _RTL_SPLAY_LINKS *v26; // [rsp+88h] [rbp+10h]
  _RTL_SPLAY_LINKS *v27; // [rsp+90h] [rbp+18h] BYREF
  _RTL_SPLAY_LINKS **v28; // [rsp+98h] [rbp+20h]

  v28 = a4;
  v26 = a2;
  v9 = *a3;
  v10 = (KSPIN_LOCK *)(a1 + 24);
  v27 = *a3;
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
  v25 = (_RTL_SPLAY_LINKS *)((char *)v9 + (_QWORD)*a4 - 1);
  FirstOverlappingSharedNode = FsRtlFindFirstOverlappingSharedNode(v14, (unsigned int)&v27, (unsigned int)&v25, 0, 0LL);
  v18 = (_RTL_SPLAY_LINKS *)FirstOverlappingSharedNode;
  if ( !FirstOverlappingSharedNode
    || (v19 = (_RTL_SPLAY_LINKS *)(FirstOverlappingSharedNode - 24),
        v20 = 0LL,
        Parent = v19->Parent,
        v22 = v19,
        v25 = 0LL,
        !Parent) )
  {
LABEL_32:
    v15 = -1073741698;
    goto LABEL_26;
  }
  while ( 1 )
  {
    if ( Parent[1].LeftChild == v26 && Parent[1].RightChild == a5 && HIDWORD(Parent[1].Parent) == a6 )
    {
      v23 = Parent->LeftChild <= v9;
      if ( Parent->LeftChild != v9 )
        goto LABEL_28;
      if ( Parent->RightChild == *v28 )
        break;
    }
    v23 = Parent->LeftChild <= v9;
LABEL_28:
    if ( v23 )
    {
      v22 = Parent;
      if ( v20 < Parent[2].Parent )
        v20 = Parent[2].Parent;
      Parent = Parent->Parent;
      v25 = v20;
      if ( Parent )
        continue;
    }
    goto LABEL_32;
  }
  if ( v26[5].Parent == (_RTL_SPLAY_LINKS *)&Parent->LeftChild )
    v26[5].Parent = 0LL;
  if ( v22->Parent == v19[2].Parent )
    v19[2].Parent = v22;
  v22->Parent = Parent->Parent;
  if ( v22 == v19 )
  {
    if ( !v19->Parent )
    {
      v10[1] = (KSPIN_LOCK)RtlDelete(v18);
      ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, v19);
      v19 = 0LL;
    }
    if ( *(_RTL_SPLAY_LINKS **)a1 == Parent->LeftChild )
      FsRtlPrivateResetLowestLockOffset((_QWORD *)a1);
  }
  if ( v19 )
    FsRtlSplitLocks((__int64)v19, v22, (unsigned __int64 *)&Parent[2], &v25);
  if ( !a8 && *(_QWORD *)(a1 + 16) )
  {
    KxReleaseSpinLock(v10);
    __writecr8(v16);
    (*(void (__fastcall **)(__int64, _RTL_SPLAY_LINKS **))(a1 + 16))(a7, &Parent->LeftChild);
    v16 = KeAcquireSpinLockRaiseToDpc(v10);
  }
  ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, Parent);
  if ( a9 )
  {
    if ( v10[3] )
      FsRtlPrivateCheckWaitingLocks(a1, v10, v16);
  }
LABEL_26:
  KxReleaseSpinLock(v10);
  __writecr8(v16);
  return v15;
}
