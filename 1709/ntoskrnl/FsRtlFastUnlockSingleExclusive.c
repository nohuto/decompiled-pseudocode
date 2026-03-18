/*
 * XREFs of FsRtlFastUnlockSingleExclusive @ 0x140106010
 * Callers:
 *     FsRtlFastUnlockSingle @ 0x140105F30 (FsRtlFastUnlockSingle.c)
 *     FsRtlPrivateRemoveLock @ 0x1401E78D0 (FsRtlPrivateRemoveLock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 *     RtlRealSuccessor @ 0x140105680 (RtlRealSuccessor.c)
 *     RtlDelete @ 0x140106520 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x140106964 (FsRtlPrivateResetLowestLockOffset.c)
 *     FsRtlFindFirstOverlappingExclusiveNode @ 0x140106A70 (FsRtlFindFirstOverlappingExclusiveNode.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140106C24 (FsRtlPrivateCheckWaitingLocks.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
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
  __int64 v22; // r8
  __int64 v23; // [rsp+70h] [rbp+8h] BYREF
  _RTL_SPLAY_LINKS *v24; // [rsp+80h] [rbp+18h] BYREF
  _RTL_SPLAY_LINKS **v25; // [rsp+88h] [rbp+20h]

  v25 = a4;
  v9 = *a3;
  v10 = (KSPIN_LOCK *)(a1 + 24);
  v24 = *a3;
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 24));
  v15 = v10[2];
  v16 = 0;
  v17 = v14;
  if ( !v15
    || (v23 = (__int64)v9 + (_QWORD)*a4 - 1,
        (FirstOverlappingExclusiveNode = (PRTL_SPLAY_LINKS)FsRtlFindFirstOverlappingExclusiveNode(
                                                             v15,
                                                             (unsigned int)&v24,
                                                             (unsigned int)&v23,
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
      if ( FirstOverlappingExclusiveNode[1].LeftChild == *v25 )
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
    FsRtlPrivateResetLowestLockOffset(a1);
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
    LOBYTE(v22) = v17;
    FsRtlPrivateCheckWaitingLocks(a1, v10, v22);
  }
LABEL_3:
  KxReleaseSpinLock(v10);
  __writecr8(v17);
  return v16;
}
