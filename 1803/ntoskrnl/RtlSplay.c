/*
 * XREFs of RtlSplay @ 0x140069AC0
 * Callers:
 *     FsRtlPrivateInsertSharedLock @ 0x140068340 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1400699C4 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     RtlLookupElementGenericTable @ 0x140069A40 (RtlLookupElementGenericTable.c)
 *     RtlDelete @ 0x140069CC0 (RtlDelete.c)
 *     RtlInsertElementGenericTableFull @ 0x1400B9340 (RtlInsertElementGenericTableFull.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1400BA854 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     RtlEnumerateGenericTable @ 0x14016E4E0 (RtlEnumerateGenericTable.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x140224C1C (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlCheckNoSharedConflict @ 0x140224CD8 (FsRtlCheckNoSharedConflict.c)
 *     RtlLookupElementGenericTableFull @ 0x14028C610 (RtlLookupElementGenericTableFull.c)
 *     RtlInsertUnicodePrefix @ 0x14055E640 (RtlInsertUnicodePrefix.c)
 *     RtlFindUnicodePrefix @ 0x14055E7A0 (RtlFindUnicodePrefix.c)
 *     PfxFindPrefix @ 0x140783690 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x140783790 (PfxInsertPrefix.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlSplay(PRTL_SPLAY_LINKS Links)
{
  _RTL_SPLAY_LINKS *i; // r8
  _RTL_SPLAY_LINKS *LeftChild; // rax
  _RTL_SPLAY_LINKS *Parent; // r9
  _RTL_SPLAY_LINKS *v5; // rax
  _RTL_SPLAY_LINKS *v6; // rax
  __int64 v7; // rax
  _RTL_SPLAY_LINKS *v8; // rax
  _RTL_SPLAY_LINKS *v9; // rax
  __int64 v10; // rax
  _RTL_SPLAY_LINKS *v11; // rax
  _RTL_SPLAY_LINKS *v12; // rax
  _RTL_SPLAY_LINKS *v13; // rax
  __int64 v14; // rax
  _RTL_SPLAY_LINKS *v15; // rax
  _RTL_SPLAY_LINKS *RightChild; // rax
  __int64 v17; // rax

  for ( i = Links->Parent; Links->Parent != Links; i = Links->Parent )
  {
    LeftChild = i->LeftChild;
    Parent = i->Parent;
    if ( LeftChild == Links )
    {
      if ( Parent != i )
      {
        if ( Parent->LeftChild != i )
        {
          v15 = Links->LeftChild;
          Parent->RightChild = v15;
          if ( v15 )
            v15->Parent = Parent;
          RightChild = Links->RightChild;
          i->LeftChild = RightChild;
          if ( RightChild )
            RightChild->Parent = i;
          if ( Parent->Parent == Parent )
          {
            Links->Parent = Links;
          }
          else
          {
            Links->Parent = Parent->Parent;
            v17 = 8LL;
            if ( Parent->Parent->LeftChild != Parent )
              v17 = 16LL;
            *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent->Parent + v17) = Links;
          }
          Links->LeftChild = Parent;
          Parent->Parent = Links;
          Links->RightChild = i;
          i->Parent = Links;
          continue;
        }
        v8 = Links->RightChild;
        i->LeftChild = v8;
        if ( v8 )
          v8->Parent = i;
        v9 = i->RightChild;
        Parent->LeftChild = v9;
        if ( v9 )
          v9->Parent = Parent;
        if ( Parent->Parent == Parent )
        {
          Links->Parent = Links;
        }
        else
        {
          Links->Parent = Parent->Parent;
          v10 = 8LL;
          if ( Parent->Parent->LeftChild != Parent )
            v10 = 16LL;
          *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent->Parent + v10) = Links;
        }
        Links->RightChild = i;
        i->RightChild = Parent;
        goto LABEL_22;
      }
      v5 = Links->RightChild;
      i->LeftChild = v5;
      if ( v5 )
        v5->Parent = i;
      Links->RightChild = i;
    }
    else
    {
      if ( Parent != i )
      {
        if ( Parent->RightChild != i )
        {
          v12 = Links->LeftChild;
          i->RightChild = v12;
          if ( v12 )
            v12->Parent = i;
          v13 = Links->RightChild;
          Parent->LeftChild = v13;
          if ( v13 )
            v13->Parent = Parent;
          if ( Parent->Parent == Parent )
          {
            Links->Parent = Links;
          }
          else
          {
            Links->Parent = Parent->Parent;
            v14 = 8LL;
            if ( Parent->Parent->LeftChild != Parent )
              v14 = 16LL;
            *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent->Parent + v14) = Links;
          }
          Links->LeftChild = i;
          i->Parent = Links;
          Links->RightChild = Parent;
          Parent->Parent = Links;
          continue;
        }
        Parent->RightChild = LeftChild;
        if ( LeftChild )
          LeftChild->Parent = Parent;
        v6 = Links->LeftChild;
        i->RightChild = v6;
        if ( v6 )
          v6->Parent = i;
        if ( Parent->Parent == Parent )
        {
          Links->Parent = Links;
        }
        else
        {
          Links->Parent = Parent->Parent;
          v7 = 8LL;
          if ( Parent->Parent->LeftChild != Parent )
            v7 = 16LL;
          *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent->Parent + v7) = Links;
        }
        Links->LeftChild = i;
        i->LeftChild = Parent;
LABEL_22:
        i->Parent = Links;
        Parent->Parent = i;
        continue;
      }
      v11 = Links->LeftChild;
      i->RightChild = v11;
      if ( v11 )
        v11->Parent = i;
      Links->LeftChild = i;
    }
    i->Parent = Links;
    Links->Parent = Links;
  }
  return Links;
}
