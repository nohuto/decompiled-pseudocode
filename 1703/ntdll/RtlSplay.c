/*
 * XREFs of RtlSplay @ 0x180065CB0
 * Callers:
 *     RtlEnumerateGenericTable @ 0x1800659B0 (RtlEnumerateGenericTable.c)
 *     RtlInsertElementGenericTableFull @ 0x180065B20 (RtlInsertElementGenericTableFull.c)
 *     RtlLookupElementGenericTable @ 0x180065C30 (RtlLookupElementGenericTable.c)
 *     RtlDelete @ 0x180065F60 (RtlDelete.c)
 *     PfxFindPrefix @ 0x1800E4DC0 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x1800E4EC0 (PfxInsertPrefix.c)
 *     RtlLookupElementGenericTableFull @ 0x1800F2D80 (RtlLookupElementGenericTableFull.c)
 *     sub_180106250 @ 0x180106250 (sub_180106250.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __cdecl RtlSplay(PRTL_SPLAY_LINKS Links)
{
  _RTL_SPLAY_LINKS *Parent; // rax
  _RTL_SPLAY_LINKS *v3; // rdx
  _RTL_SPLAY_LINKS *v4; // rdx
  _RTL_SPLAY_LINKS *v5; // r8
  _RTL_SPLAY_LINKS *v6; // r8
  _RTL_SPLAY_LINKS *RightChild; // rdx
  _RTL_SPLAY_LINKS *v8; // r8
  _RTL_SPLAY_LINKS *v9; // r8
  _RTL_SPLAY_LINKS **v10; // r8
  _RTL_SPLAY_LINKS *LeftChild; // r8
  _RTL_SPLAY_LINKS *v12; // r8
  _RTL_SPLAY_LINKS **p_LeftChild; // r8
  _RTL_SPLAY_LINKS *v14; // r8
  _RTL_SPLAY_LINKS *v15; // r8
  _RTL_SPLAY_LINKS **v16; // r8
  _RTL_SPLAY_LINKS **p_RightChild; // r8

  while ( Links->Parent != Links )
  {
    Parent = Links->Parent;
    v3 = Links->Parent->Parent;
    if ( Links->Parent->LeftChild == Links )
    {
      if ( v3 == Parent )
      {
        RightChild = Links->RightChild;
        Parent->LeftChild = RightChild;
        if ( RightChild )
          RightChild->Parent = Parent;
        Links->RightChild = Parent;
LABEL_8:
        Parent->Parent = Links;
        Links->Parent = Links;
      }
      else if ( v3->LeftChild == Parent )
      {
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
          p_LeftChild = &v3->Parent->LeftChild;
          if ( *p_LeftChild != v3 )
            p_LeftChild = &v3->Parent->RightChild;
          *p_LeftChild = Links;
        }
        Links->RightChild = Parent;
        Parent->RightChild = v3;
LABEL_18:
        Parent->Parent = Links;
        v3->Parent = Parent;
      }
      else
      {
        LeftChild = Links->LeftChild;
        v3->RightChild = LeftChild;
        if ( LeftChild )
          LeftChild->Parent = v3;
        v12 = Links->RightChild;
        Parent->LeftChild = v12;
        if ( v12 )
          v12->Parent = Parent;
        if ( v3->Parent == v3 )
        {
          Links->Parent = Links;
        }
        else
        {
          Links->Parent = v3->Parent;
          p_RightChild = &v3->Parent->LeftChild;
          if ( *p_RightChild != v3 )
            p_RightChild = &v3->Parent->RightChild;
          *p_RightChild = Links;
        }
        Links->LeftChild = v3;
        v3->Parent = Links;
        Links->RightChild = Parent;
        Parent->Parent = Links;
      }
    }
    else
    {
      if ( v3 == Parent )
      {
        v4 = Links->LeftChild;
        Parent->RightChild = v4;
        if ( v4 )
          v4->Parent = Parent;
        Links->LeftChild = Parent;
        goto LABEL_8;
      }
      if ( v3->RightChild == Parent )
      {
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
          v10 = &v3->Parent->LeftChild;
          if ( *v10 != v3 )
            v10 = &v3->Parent->RightChild;
          *v10 = Links;
        }
        Links->LeftChild = Parent;
        Parent->LeftChild = v3;
        goto LABEL_18;
      }
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
        v16 = &v3->Parent->LeftChild;
        if ( *v16 != v3 )
          v16 = &v3->Parent->RightChild;
        *v16 = Links;
      }
      Links->LeftChild = Parent;
      Parent->Parent = Links;
      Links->RightChild = v3;
      v3->Parent = Links;
    }
  }
  return Links;
}
