/*
 * XREFs of FsRtlPrivateInsertSharedLock @ 0x140051A14
 * Callers:
 *     FsRtlPrivateInsertLock @ 0x140051274 (FsRtlPrivateInsertLock.c)
 * Callees:
 *     RtlRealSuccessor @ 0x14000CC10 (RtlRealSuccessor.c)
 *     RtlDeleteNoSplay @ 0x14000CE30 (RtlDeleteNoSplay.c)
 *     FsRtlSplitLocks @ 0x14000CF00 (FsRtlSplitLocks.c)
 *     RtlSplay @ 0x14004DCD0 (RtlSplay.c)
 *     FsRtlFindFirstOverlappingSharedNode @ 0x140051B5C (FsRtlFindFirstOverlappingSharedNode.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14005302C (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 */

char __fastcall FsRtlPrivateInsertSharedLock(__int64 a1, _RTL_SPLAY_LINKS *a2)
{
  _RTL_SPLAY_LINKS **p_Parent; // r15
  PRTL_SPLAY_LINKS *v4; // r14
  __int64 FirstOverlappingSharedNode; // rax
  _RTL_SPLAY_LINKS *v6; // rbp
  _RTL_SPLAY_LINKS *v7; // rax
  _RTL_SPLAY_LINKS *v8; // rcx
  _RTL_SPLAY_LINKS *v9; // rax
  __int64 v10; // rbx
  _RTL_SPLAY_LINKS *v11; // rax
  _RTL_SPLAY_LINKS **v12; // rcx
  _RTL_SPLAY_LINKS *LeftChild; // r8
  unsigned __int64 v14; // rdx
  PRTL_SPLAY_LINKS v15; // rdi
  PRTL_SPLAY_LINKS v16; // rax
  _RTL_SPLAY_LINKS *v17; // rsi
  char v19; // [rsp+60h] [rbp+8h] BYREF
  _RTL_SPLAY_LINKS *v20; // [rsp+68h] [rbp+10h] BYREF

  p_Parent = &a2[2].Parent;
  v4 = (PRTL_SPLAY_LINKS *)(a1 + 8);
  FirstOverlappingSharedNode = FsRtlFindFirstOverlappingSharedNode(
                                 *(_QWORD *)(a1 + 8),
                                 (int)a2 + 8,
                                 (int)a2 + 48,
                                 (unsigned int)&v20,
                                 (__int64)&v19);
  v6 = (_RTL_SPLAY_LINKS *)FirstOverlappingSharedNode;
  if ( FirstOverlappingSharedNode )
  {
    v10 = FirstOverlappingSharedNode - 24;
    v11 = *(_RTL_SPLAY_LINKS **)(FirstOverlappingSharedNode - 24);
    v12 = (_RTL_SPLAY_LINKS **)v10;
    if ( v11 )
    {
      LeftChild = a2->LeftChild;
      do
      {
        v14 = (unsigned __int64)v11->LeftChild;
        if ( (unsigned __int64)LeftChild < v14
          || LeftChild == (_RTL_SPLAY_LINKS *)v14 && (!a2->RightChild || v11->RightChild) )
        {
          break;
        }
        v12 = &v11->Parent;
        v11 = v11->Parent;
      }
      while ( v11 );
    }
    if ( !*v12 )
      *(_QWORD *)(v10 + 48) = a2;
    a2->Parent = *v12;
    *v12 = a2;
    *v4 = RtlSplay(v6);
    if ( (unsigned __int64)*p_Parent > *(_QWORD *)(v10 + 16) )
    {
      *(_QWORD *)(v10 + 16) = *p_Parent;
      while ( 1 )
      {
        v16 = RtlRealSuccessor(v6);
        v17 = v16;
        if ( !v16 )
          break;
        v15 = v16 - 1;
        if ( v16[-1].Parent->LeftChild > (_RTL_SPLAY_LINKS *)*(_QWORD *)(v10 + 16) )
          break;
        if ( !*(_BYTE *)(v10 + 8) && LOBYTE(v15->LeftChild) )
          FsRtlSplitLocks((__int64)&v16[-1], 0LL, 0LL, 0LL);
        **(_QWORD **)(v10 + 48) = v15->Parent;
        *(_QWORD *)(v10 + 48) = v15[2].Parent;
        if ( v15->RightChild > (_RTL_SPLAY_LINKS *)*(_QWORD *)(v10 + 16) )
        {
          if ( LOBYTE(v15->LeftChild) )
            *(_BYTE *)(v10 + 8) = 1;
          *(_QWORD *)(v10 + 16) = v15->RightChild;
        }
        RtlDeleteNoSplay(v17, v4);
        ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, &v17[-1]);
      }
    }
    if ( *(_BYTE *)(v10 + 8) )
      FsRtlSplitLocks(v10, 0LL, 0LL, 0LL);
  }
  else
  {
    v7 = (_RTL_SPLAY_LINKS *)ExAllocateFromNPagedLookasideList(&FsRtlLockTreeNodeLookasideList);
    if ( !v7 )
      return (char)v7;
    v8 = v7 + 1;
    v7[1].Parent = v7 + 1;
    v7[1].LeftChild = 0LL;
    v7[1].RightChild = 0LL;
    LOBYTE(v7->LeftChild) = 0;
    v7[2].Parent = a2;
    v7->Parent = a2;
    v7->RightChild = *p_Parent;
    v9 = v20;
    a2->Parent = 0LL;
    if ( v9 )
    {
      if ( v19 )
        v9->LeftChild = v8;
      else
        v9->RightChild = v8;
      v8->Parent = v9;
      *v4 = RtlSplay(v8);
    }
    else
    {
      *v4 = v8;
    }
  }
  LOBYTE(v7) = 1;
  return (char)v7;
}
