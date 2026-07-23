/*
 * XREFs of RtlInsertUnicodePrefix @ 0x14055E640
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x140069AC0 (RtlSplay.c)
 *     CompareUnicodeStrings @ 0x14055E8B0 (CompareUnicodeStrings.c)
 *     ComputeUnicodeNameLength @ 0x14055EA28 (ComputeUnicodeNameLength.c)
 */

BOOLEAN __stdcall RtlInsertUnicodePrefix(
        PUNICODE_PREFIX_TABLE PrefixTable,
        PUNICODE_STRING Prefix,
        PUNICODE_PREFIX_TABLE_ENTRY PrefixTableEntry)
{
  CSHORT v6; // ax
  RTL_SPLAY_LINKS *p_Links; // r14
  UNICODE_STRING *v8; // rcx
  PUNICODE_PREFIX_TABLE_ENTRY i; // rdi
  PUNICODE_STRING Parent; // rcx
  PUNICODE_PREFIX_TABLE_ENTRY v11; // rsi
  _RTL_SPLAY_LINKS *LeftChild; // rax
  int v13; // eax
  _RTL_SPLAY_LINKS *v14; // rax
  _UNICODE_PREFIX_TABLE_ENTRY *NextPrefixTree; // rbx
  _UNICODE_PREFIX_TABLE_ENTRY *v16; // rax
  PUNICODE_PREFIX_TABLE_ENTRY v18; // rbp

  v6 = ComputeUnicodeNameLength(Prefix);
  PrefixTableEntry->NameLength = v6;
  p_Links = &PrefixTableEntry->Links;
  PrefixTableEntry->Prefix = v8;
  PrefixTableEntry->Links.LeftChild = 0LL;
  PrefixTableEntry->Links.RightChild = 0LL;
  PrefixTableEntry->Links.Parent = &PrefixTableEntry->Links;
  for ( i = PrefixTable->NextPrefixTree; i->NameLength > v6; i = i->NextPrefixTree )
    PrefixTable = (PUNICODE_PREFIX_TABLE)i;
  if ( i->NameLength == v6 )
  {
    Parent = i->Prefix;
    v11 = i;
    while ( 1 )
    {
      v13 = CompareUnicodeStrings(Parent, Prefix, 0LL);
      if ( v13 == 2 )
        break;
      if ( v13 == 3 )
      {
        LeftChild = v11->Links.LeftChild;
        if ( !LeftChild )
        {
          PrefixTableEntry->NextPrefixTree = 0LL;
          v14 = &v11->Links;
          PrefixTableEntry->NodeTypeCode = 2050;
          PrefixTableEntry->CaseMatch = PrefixTableEntry;
          v11->Links.LeftChild = p_Links;
LABEL_12:
          p_Links->Parent = v14;
          goto LABEL_13;
        }
      }
      else
      {
        LeftChild = v11->Links.RightChild;
        if ( !LeftChild )
        {
          PrefixTableEntry->NextPrefixTree = 0LL;
          v14 = &v11->Links;
          PrefixTableEntry->CaseMatch = PrefixTableEntry;
          PrefixTableEntry->NodeTypeCode = 2050;
          v11->Links.RightChild = p_Links;
          goto LABEL_12;
        }
      }
      v11 = (PUNICODE_PREFIX_TABLE_ENTRY)&LeftChild[-1];
      Parent = (PUNICODE_STRING)LeftChild[1].Parent;
    }
    v18 = v11;
    do
    {
      if ( (unsigned int)CompareUnicodeStrings(v18->Prefix, Prefix, 0xFFFFFFFFLL) == 2 )
        return 0;
      v18 = v18->CaseMatch;
    }
    while ( v18 != v11 );
    PrefixTableEntry->NextPrefixTree = 0LL;
    PrefixTableEntry->NodeTypeCode = 2051;
    PrefixTableEntry->CaseMatch = v11->CaseMatch;
    v11->CaseMatch = PrefixTableEntry;
LABEL_13:
    NextPrefixTree = i->NextPrefixTree;
    i->NextPrefixTree = 0LL;
    i->NodeTypeCode = 2050;
    v16 = (_UNICODE_PREFIX_TABLE_ENTRY *)&RtlSplay(&v11->Links)[-1];
    v16->NodeTypeCode = 2049;
    PrefixTable->NextPrefixTree = v16;
    v16->NextPrefixTree = NextPrefixTree;
  }
  else
  {
    PrefixTable->NextPrefixTree = PrefixTableEntry;
    PrefixTableEntry->NodeTypeCode = 2049;
    PrefixTableEntry->NextPrefixTree = i;
    PrefixTableEntry->CaseMatch = PrefixTableEntry;
  }
  return 1;
}
