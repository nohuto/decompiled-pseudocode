/*
 * XREFs of FsRtlSplitLocks @ 0x14000CF00
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x14000C934 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlFastUnlockSingleShared @ 0x14004E064 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140051A14 (FsRtlPrivateInsertSharedLock.c)
 * Callees:
 *     RtlRealSuccessor @ 0x14000CC10 (RtlRealSuccessor.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14005302C (ExAllocateFromNPagedLookasideList.c)
 */

void __fastcall FsRtlSplitLocks(__int64 a1, _RTL_SPLAY_LINKS *a2, unsigned __int64 *a3, _RTL_SPLAY_LINKS **a4)
{
  _RTL_SPLAY_LINKS *v5; // rbx
  _RTL_SPLAY_LINKS *LeftChild; // rsi
  _RTL_SPLAY_LINKS *v7; // rbp
  int v8; // r13d
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  _RTL_SPLAY_LINKS *Parent; // r14
  unsigned __int64 v12; // rax
  _RTL_SPLAY_LINKS *v13; // rax
  _RTL_SPLAY_LINKS *v14; // rax
  _RTL_SPLAY_LINKS *v15; // r15
  _RTL_SPLAY_LINKS *v16; // r14
  PRTL_SPLAY_LINKS v17; // rax
  _RTL_SPLAY_LINKS *RightChild; // rax
  unsigned __int64 v19; // [rsp+50h] [rbp+8h]

  v5 = 0LL;
  LeftChild = 0LL;
  v7 = (_RTL_SPLAY_LINKS *)a1;
  v8 = 0;
  if ( *(_BYTE *)(a1 + 8) )
  {
    v9 = *(_QWORD *)(a1 + 16);
    a2 = (_RTL_SPLAY_LINKS *)a1;
    *(_BYTE *)(a1 + 8) = 0;
LABEL_5:
    v10 = *(_QWORD *)(a1 + 16);
    Parent = a2->Parent;
    v19 = v10;
    while ( 1 )
    {
      if ( !Parent )
      {
        v7->RightChild = v5;
        return;
      }
      if ( v7->Parent == a2->Parent )
      {
        v5 = Parent[2].Parent;
        LeftChild = Parent->LeftChild;
        if ( v10 <= v9 )
          v7->RightChild = v5;
      }
      else
      {
        v12 = (unsigned __int64)Parent->LeftChild;
        if ( v12 > (unsigned __int64)v5 && (Parent->RightChild || (_RTL_SPLAY_LINKS *)v12 != LeftChild) )
        {
          v14 = (_RTL_SPLAY_LINKS *)ExAllocateFromNPagedLookasideList(&FsRtlLockTreeNodeLookasideList);
          v15 = v14;
          if ( v14 )
          {
            v16 = v14 + 1;
            v14[1].Parent = v14 + 1;
            v14[1].LeftChild = 0LL;
            v14[1].RightChild = 0LL;
            LOBYTE(v14->LeftChild) = 0;
            if ( v7[1].RightChild )
            {
              v17 = RtlRealSuccessor(v7 + 1);
              v17->LeftChild = v16;
            }
            else
            {
              v17 = v7 + 1;
              v7[1].RightChild = v16;
            }
            v16->Parent = v17;
            Parent = v15;
            v15->Parent = a2->Parent;
            a2->Parent = 0LL;
            v15[2].Parent = v7[2].Parent;
            RightChild = v7->RightChild;
            v7[2].Parent = a2;
            v15->RightChild = RightChild;
            v7->RightChild = v5;
            if ( v8 )
              v8 = 0;
            else
              LOBYTE(v7->LeftChild) = 0;
            v10 = v19;
            v7 = v15;
            goto LABEL_11;
          }
          v10 = v19;
          if ( LOBYTE(v7->LeftChild) )
            v8 = 1;
          LOBYTE(v7->LeftChild) = 1;
        }
        if ( v10 > v9 && Parent->LeftChild > (_RTL_SPLAY_LINKS *)v9 )
          return;
        v13 = Parent[2].Parent;
        if ( v5 < v13 )
        {
          v5 = Parent[2].Parent;
          if ( v10 <= v9 )
            v7->RightChild = v13;
        }
      }
LABEL_11:
      a2 = Parent;
      Parent = Parent->Parent;
    }
  }
  v9 = *a3;
  v5 = *a4;
  if ( *a3 > (unsigned __int64)*a4 && *(_QWORD *)a1 )
    goto LABEL_5;
}
