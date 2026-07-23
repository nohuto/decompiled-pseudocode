/*
 * XREFs of RtlInsertUnicodePrefix @ 0x140437B20
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x14004DCD0 (RtlSplay.c)
 *     CompareUnicodeStrings @ 0x140437D8C (CompareUnicodeStrings.c)
 *     ComputeUnicodeNameLength @ 0x140437F08 (ComputeUnicodeNameLength.c)
 */

BOOLEAN __stdcall RtlInsertUnicodePrefix(
        PUNICODE_PREFIX_TABLE PrefixTable,
        PUNICODE_STRING Prefix,
        PUNICODE_PREFIX_TABLE_ENTRY PrefixTableEntry)
{
  CSHORT v6; // ax
  RTL_SPLAY_LINKS *p_Links; // r14
  PUNICODE_PREFIX_TABLE_ENTRY i; // rsi
  PUNICODE_STRING Parent; // rcx
  PUNICODE_PREFIX_TABLE_ENTRY v10; // rdi
  _RTL_SPLAY_LINKS *LeftChild; // rax
  int v12; // eax
  _RTL_SPLAY_LINKS *v13; // rax
  _UNICODE_PREFIX_TABLE_ENTRY *NextPrefixTree; // rbx
  _UNICODE_PREFIX_TABLE_ENTRY *v15; // rax
  PUNICODE_PREFIX_TABLE_ENTRY v17; // rbp

  v6 = ComputeUnicodeNameLength(Prefix);
  PrefixTableEntry->NameLength = v6;
  p_Links = &PrefixTableEntry->Links;
  PrefixTableEntry->Prefix = Prefix;
  PrefixTableEntry->Links.LeftChild = 0LL;
  PrefixTableEntry->Links.RightChild = 0LL;
  PrefixTableEntry->Links.Parent = &PrefixTableEntry->Links;
  for ( i = PrefixTable->NextPrefixTree; i->NameLength > v6; i = i->NextPrefixTree )
    PrefixTable = (PUNICODE_PREFIX_TABLE)i;
  if ( i->NameLength == v6 )
  {
    Parent = i->Prefix;
    v10 = i;
    while ( 1 )
    {
      v12 = CompareUnicodeStrings(Parent, Prefix, 0LL);
      if ( v12 == 2 )
        break;
      if ( v12 == 3 )
      {
        LeftChild = v10->Links.LeftChild;
        if ( !LeftChild )
        {
          PrefixTableEntry->NextPrefixTree = 0LL;
          v13 = &v10->Links;
          PrefixTableEntry->NodeTypeCode = 2050;
          PrefixTableEntry->CaseMatch = PrefixTableEntry;
          v10->Links.LeftChild = p_Links;
LABEL_12:
          p_Links->Parent = v13;
          goto LABEL_13;
        }
      }
      else
      {
        LeftChild = v10->Links.RightChild;
        if ( !LeftChild )
        {
          PrefixTableEntry->NextPrefixTree = 0LL;
          v13 = &v10->Links;
          PrefixTableEntry->CaseMatch = PrefixTableEntry;
          PrefixTableEntry->NodeTypeCode = 2050;
          v10->Links.RightChild = p_Links;
          goto LABEL_12;
        }
      }
      v10 = (PUNICODE_PREFIX_TABLE_ENTRY)&LeftChild[-1];
      Parent = (PUNICODE_STRING)LeftChild[1].Parent;
    }
    v17 = v10;
    do
    {
      if ( (unsigned int)CompareUnicodeStrings(v17->Prefix, Prefix, 0xFFFFFFFFLL) == 2 )
        return 0;
      v17 = v17->CaseMatch;
    }
    while ( v17 != v10 );
    PrefixTableEntry->NextPrefixTree = 0LL;
    PrefixTableEntry->NodeTypeCode = 2051;
    PrefixTableEntry->CaseMatch = v10->CaseMatch;
    v10->CaseMatch = PrefixTableEntry;
LABEL_13:
    NextPrefixTree = i->NextPrefixTree;
    i->NextPrefixTree = 0LL;
    i->NodeTypeCode = 2050;
    v15 = (_UNICODE_PREFIX_TABLE_ENTRY *)&RtlSplay(&v10->Links)[-1];
    v15->NodeTypeCode = 2049;
    PrefixTable->NextPrefixTree = v15;
    v15->NextPrefixTree = NextPrefixTree;
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
