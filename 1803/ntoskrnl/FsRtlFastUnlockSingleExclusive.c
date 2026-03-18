/*
 * XREFs of FsRtlFastUnlockSingleExclusive @ 0x140068B20
 * Callers:
 *     FsRtlFastUnlockSingle @ 0x140068A40 (FsRtlFastUnlockSingle.c)
 *     FsRtlPrivateRemoveLock @ 0x1402251F0 (FsRtlPrivateRemoveLock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlDelete @ 0x140069CC0 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x140069D58 (FsRtlPrivateResetLowestLockOffset.c)
 *     RtlRealSuccessor @ 0x1400B0BF0 (RtlRealSuccessor.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1400B0C34 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlFindFirstOverlappingExclusiveNode @ 0x1400BA9B0 (FsRtlFindFirstOverlappingExclusiveNode.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FsRtlFastUnlockSingleExclusive(
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
  KIRQL v14; // al
  KSPIN_LOCK v15; // rcx
  unsigned int v16; // edi
  KIRQL v17; // r12
  PRTL_SPLAY_LINKS FirstOverlappingExclusiveNode; // rsi
  int v20; // r13d
  bool v21; // cc
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // [rsp+70h] [rbp+8h] BYREF
  _RTL_SPLAY_LINKS *v27; // [rsp+80h] [rbp+18h] BYREF
  _RTL_SPLAY_LINKS **v28; // [rsp+88h] [rbp+20h]

  v28 = a4;
  v9 = *a3;
  v10 = (KSPIN_LOCK *)(a1 + 24);
  v27 = *a3;
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 24));
  v15 = v10[2];
  v16 = 0;
  v17 = v14;
  if ( !v15
    || (v26 = (__int64)v9 + (_QWORD)*a4 - 1,
        (FirstOverlappingExclusiveNode = (PRTL_SPLAY_LINKS)FsRtlFindFirstOverlappingExclusiveNode(
                                                             v15,
                                                             (unsigned int)&v27,
                                                             (unsigned int)&v26,
                                                             0,
                                                             0LL)) == 0LL) )
  {
LABEL_2:
    v16 = -1073741698;
    goto LABEL_3;
  }
  v20 = a6;
  while ( 1 )
  {
    if ( FirstOverlappingExclusiveNode[2].Parent == a2
      && FirstOverlappingExclusiveNode[2].LeftChild == a5
      && HIDWORD(FirstOverlappingExclusiveNode[1].RightChild) == v20 )
    {
      v21 = FirstOverlappingExclusiveNode[1].Parent <= v9;
      if ( FirstOverlappingExclusiveNode[1].Parent != v9 )
        goto LABEL_22;
      if ( FirstOverlappingExclusiveNode[1].LeftChild == *v28 )
        break;
    }
    v21 = FirstOverlappingExclusiveNode[1].Parent <= v9;
LABEL_22:
    if ( v21 )
    {
      FirstOverlappingExclusiveNode = RtlRealSuccessor(FirstOverlappingExclusiveNode);
      if ( FirstOverlappingExclusiveNode )
        continue;
    }
    goto LABEL_2;
  }
  if ( a2[5].Parent == &FirstOverlappingExclusiveNode[1] )
    a2[5].Parent = 0LL;
  v10[2] = (KSPIN_LOCK)RtlDelete(FirstOverlappingExclusiveNode);
  if ( *(_RTL_SPLAY_LINKS **)a1 == FirstOverlappingExclusiveNode[1].Parent )
    FsRtlPrivateResetLowestLockOffset(a1, v22, v23, v24);
  if ( !a8 && *(_QWORD *)(a1 + 16) )
  {
    KxReleaseSpinLock(v10);
    __writecr8(v17);
    (*(void (__fastcall **)(__int64, PRTL_SPLAY_LINKS))(a1 + 16))(a7, FirstOverlappingExclusiveNode + 1);
    v17 = KeAcquireSpinLockRaiseToDpc(v10);
  }
  ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, FirstOverlappingExclusiveNode);
  if ( a9 && v10[3] )
  {
    LOBYTE(v25) = v17;
    FsRtlPrivateCheckWaitingLocks(a1, v10, v25);
  }
LABEL_3:
  KxReleaseSpinLock(v10);
  __writecr8(v17);
  return v16;
}
