/*
 * XREFs of RtlSplay @ 0x1401065D0
 * Callers:
 *     RtlEnumerateGenericTable @ 0x14000F330 (RtlEnumerateGenericTable.c)
 *     RtlInsertElementGenericTableFull @ 0x140105850 (RtlInsertElementGenericTableFull.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x140105D68 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140105DE4 (FsRtlPrivateInsertSharedLock.c)
 *     RtlLookupElementGenericTable @ 0x1401064A0 (RtlLookupElementGenericTable.c)
 *     RtlDelete @ 0x140106520 (RtlDelete.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x140106B44 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x1401E75E0 (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlCheckNoSharedConflict @ 0x1401E769C (FsRtlCheckNoSharedConflict.c)
 *     RtlLookupElementGenericTableFull @ 0x140254530 (RtlLookupElementGenericTableFull.c)
 *     RtlInsertUnicodePrefix @ 0x140566110 (RtlInsertUnicodePrefix.c)
 *     RtlFindUnicodePrefix @ 0x140566270 (RtlFindUnicodePrefix.c)
 *     PfxFindPrefix @ 0x14071FFA0 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x1407200A0 (PfxInsertPrefix.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlSplay(PRTL_SPLAY_LINKS Links)
{
  _RTL_SPLAY_LINKS *Parent; // r8
  _RTL_SPLAY_LINKS *v2; // r9
  _RTL_SPLAY_LINKS *v3; // rax
  _RTL_SPLAY_LINKS *v4; // rax
  __int64 v5; // rax
  _RTL_SPLAY_LINKS *v7; // rax
  _RTL_SPLAY_LINKS *v8; // rax
  __int64 v9; // rax
  _RTL_SPLAY_LINKS *LeftChild; // rax
  _RTL_SPLAY_LINKS *v11; // rax
  __int64 v12; // rax
  _RTL_SPLAY_LINKS *v13; // rax
  _RTL_SPLAY_LINKS *v14; // rax
  __int64 v15; // rax
  _RTL_SPLAY_LINKS *RightChild; // rax
  _RTL_SPLAY_LINKS *v17; // rax

  while ( Links->Parent != Links )
  {
    Parent = Links->Parent;
    v2 = Links->Parent->Parent;
    if ( Links->Parent->LeftChild == Links )
    {
      if ( v2 == Parent )
      {
        RightChild = Links->RightChild;
        Parent->LeftChild = RightChild;
        if ( RightChild )
          RightChild->Parent = Parent;
        Links->RightChild = Parent;
        Parent->Parent = Links;
        Links->Parent = Links;
      }
      else if ( v2->LeftChild == Parent )
      {
        v3 = Links->RightChild;
        Parent->LeftChild = v3;
        if ( v3 )
          v3->Parent = Parent;
        v4 = Parent->RightChild;
        v2->LeftChild = v4;
        if ( v4 )
          v4->Parent = v2;
        if ( v2->Parent == v2 )
        {
          Links->Parent = Links;
        }
        else
        {
          Links->Parent = v2->Parent;
          v5 = 8LL;
          if ( v2->Parent->LeftChild != v2 )
            v5 = 16LL;
          *(_RTL_SPLAY_LINKS **)((char *)&v2->Parent->Parent + v5) = Links;
        }
        Links->RightChild = Parent;
        Parent->Parent = Links;
        Parent->RightChild = v2;
        v2->Parent = Parent;
      }
      else
      {
        LeftChild = Links->LeftChild;
        v2->RightChild = LeftChild;
        if ( LeftChild )
          LeftChild->Parent = v2;
        v11 = Links->RightChild;
        Parent->LeftChild = v11;
        if ( v11 )
          v11->Parent = Parent;
        if ( v2->Parent == v2 )
        {
          Links->Parent = Links;
          Links->LeftChild = v2;
          v2->Parent = Links;
          Links->RightChild = Parent;
          Parent->Parent = Links;
        }
        else
        {
          Links->Parent = v2->Parent;
          v12 = 8LL;
          if ( v2->Parent->LeftChild != v2 )
            v12 = 16LL;
          *(_RTL_SPLAY_LINKS **)((char *)&v2->Parent->Parent + v12) = Links;
          Links->LeftChild = v2;
          v2->Parent = Links;
          Links->RightChild = Parent;
          Parent->Parent = Links;
        }
      }
    }
    else if ( v2 == Parent )
    {
      v17 = Links->LeftChild;
      Parent->RightChild = v17;
      if ( v17 )
        v17->Parent = Parent;
      Links->LeftChild = Parent;
      Parent->Parent = Links;
      Links->Parent = Links;
    }
    else if ( v2->RightChild == Parent )
    {
      v7 = Parent->LeftChild;
      v2->RightChild = v7;
      if ( v7 )
        v7->Parent = v2;
      v8 = Links->LeftChild;
      Parent->RightChild = v8;
      if ( v8 )
        v8->Parent = Parent;
      if ( v2->Parent == v2 )
      {
        Links->Parent = Links;
        Links->LeftChild = Parent;
        Parent->Parent = Links;
        Parent->LeftChild = v2;
        v2->Parent = Parent;
      }
      else
      {
        Links->Parent = v2->Parent;
        v9 = 8LL;
        if ( v2->Parent->LeftChild != v2 )
          v9 = 16LL;
        *(_RTL_SPLAY_LINKS **)((char *)&v2->Parent->Parent + v9) = Links;
        Links->LeftChild = Parent;
        Parent->Parent = Links;
        Parent->LeftChild = v2;
        v2->Parent = Parent;
      }
    }
    else
    {
      v13 = Links->LeftChild;
      Parent->RightChild = v13;
      if ( v13 )
        v13->Parent = Parent;
      v14 = Links->RightChild;
      v2->LeftChild = v14;
      if ( v14 )
        v14->Parent = v2;
      if ( v2->Parent == v2 )
      {
        Links->Parent = Links;
        Links->LeftChild = Parent;
        Parent->Parent = Links;
        Links->RightChild = v2;
        v2->Parent = Links;
      }
      else
      {
        Links->Parent = v2->Parent;
        v15 = 8LL;
        if ( v2->Parent->LeftChild != v2 )
          v15 = 16LL;
        *(_RTL_SPLAY_LINKS **)((char *)&v2->Parent->Parent + v15) = Links;
        Links->LeftChild = Parent;
        Parent->Parent = Links;
        Links->RightChild = v2;
        v2->Parent = Links;
      }
    }
  }
  return Links;
}
