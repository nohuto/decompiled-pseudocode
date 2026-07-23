/*
 * XREFs of RtlSplay @ 0x180069120
 * Callers:
 *     RtlEnumerateGenericTable @ 0x180068E30 (RtlEnumerateGenericTable.c)
 *     RtlInsertElementGenericTableFull @ 0x180068FA0 (RtlInsertElementGenericTableFull.c)
 *     RtlLookupElementGenericTable @ 0x1800690A0 (RtlLookupElementGenericTable.c)
 *     RtlDelete @ 0x1800693C0 (RtlDelete.c)
 *     RtlpTpIoLookup @ 0x1800900AC (RtlpTpIoLookup.c)
 *     PfxFindPrefix @ 0x1800E47A0 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x1800E48A0 (PfxInsertPrefix.c)
 *     RtlLookupElementGenericTableFull @ 0x1800F39F0 (RtlLookupElementGenericTableFull.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __cdecl RtlSplay(PRTL_SPLAY_LINKS Links)
{
  _RTL_SPLAY_LINKS *Parent; // r8
  _RTL_SPLAY_LINKS *v3; // r9
  _RTL_SPLAY_LINKS *v4; // rax
  _RTL_SPLAY_LINKS *v5; // rax
  _RTL_SPLAY_LINKS *v6; // rax
  _RTL_SPLAY_LINKS *v7; // rax
  _RTL_SPLAY_LINKS *v8; // rax
  _RTL_SPLAY_LINKS *v9; // rax
  __int64 v10; // rax
  _RTL_SPLAY_LINKS *LeftChild; // rax
  _RTL_SPLAY_LINKS *RightChild; // rax
  __int64 v13; // rax
  _RTL_SPLAY_LINKS *v14; // rax
  _RTL_SPLAY_LINKS *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  while ( Links->Parent != Links )
  {
    Parent = Links->Parent;
    v3 = Links->Parent->Parent;
    if ( Links->Parent->LeftChild == Links )
    {
      if ( v3 != Parent )
      {
        if ( v3->LeftChild != Parent )
        {
          LeftChild = Links->LeftChild;
          v3->RightChild = LeftChild;
          if ( LeftChild )
            LeftChild->Parent = v3;
          RightChild = Links->RightChild;
          Parent->LeftChild = RightChild;
          if ( RightChild )
            RightChild->Parent = Parent;
          if ( v3->Parent == v3 )
          {
            Links->Parent = Links;
          }
          else
          {
            Links->Parent = v3->Parent;
            v17 = 8LL;
            if ( v3->Parent->LeftChild != v3 )
              v17 = 16LL;
            *(_RTL_SPLAY_LINKS **)((char *)&v3->Parent->Parent + v17) = Links;
          }
          Links->LeftChild = v3;
          v3->Parent = Links;
          Links->RightChild = Parent;
          Parent->Parent = Links;
          continue;
        }
        v5 = Links->RightChild;
        Parent->LeftChild = v5;
        if ( v5 )
          v5->Parent = Parent;
        v6 = Parent->RightChild;
        v3->LeftChild = v6;
        if ( v6 )
          v6->Parent = v3;
        if ( v3->Parent == v3 )
        {
          Links->Parent = Links;
        }
        else
        {
          Links->Parent = v3->Parent;
          v13 = 8LL;
          if ( v3->Parent->LeftChild != v3 )
            v13 = 16LL;
          *(_RTL_SPLAY_LINKS **)((char *)&v3->Parent->Parent + v13) = Links;
        }
        Links->RightChild = Parent;
        Parent->RightChild = v3;
LABEL_20:
        Parent->Parent = Links;
        v3->Parent = Parent;
        continue;
      }
      v7 = Links->RightChild;
      Parent->LeftChild = v7;
      if ( v7 )
        v7->Parent = Parent;
      Links->RightChild = Parent;
    }
    else
    {
      if ( v3 != Parent )
      {
        if ( v3->RightChild != Parent )
        {
          v14 = Links->LeftChild;
          Parent->RightChild = v14;
          if ( v14 )
            v14->Parent = Parent;
          v15 = Links->RightChild;
          v3->LeftChild = v15;
          if ( v15 )
            v15->Parent = v3;
          if ( v3->Parent == v3 )
          {
            Links->Parent = Links;
          }
          else
          {
            Links->Parent = v3->Parent;
            v16 = 8LL;
            if ( v3->Parent->LeftChild != v3 )
              v16 = 16LL;
            *(_RTL_SPLAY_LINKS **)((char *)&v3->Parent->Parent + v16) = Links;
          }
          Links->LeftChild = Parent;
          Parent->Parent = Links;
          Links->RightChild = v3;
          v3->Parent = Links;
          continue;
        }
        v8 = Parent->LeftChild;
        v3->RightChild = v8;
        if ( v8 )
          v8->Parent = v3;
        v9 = Links->LeftChild;
        Parent->RightChild = v9;
        if ( v9 )
          v9->Parent = Parent;
        if ( v3->Parent == v3 )
        {
          Links->Parent = Links;
        }
        else
        {
          Links->Parent = v3->Parent;
          v10 = 8LL;
          if ( v3->Parent->LeftChild != v3 )
            v10 = 16LL;
          *(_RTL_SPLAY_LINKS **)((char *)&v3->Parent->Parent + v10) = Links;
        }
        Links->LeftChild = Parent;
        Parent->LeftChild = v3;
        goto LABEL_20;
      }
      v4 = Links->LeftChild;
      Parent->RightChild = v4;
      if ( v4 )
        v4->Parent = Parent;
      Links->LeftChild = Parent;
    }
    Parent->Parent = Links;
    Links->Parent = Links;
  }
  return Links;
}
