/*
 * XREFs of PfxInsertPrefix @ 0x1406E82C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x14004DCD0 (RtlSplay.c)
 *     CompareNamesCaseSensitive @ 0x1406E7FA8 (CompareNamesCaseSensitive.c)
 *     ComputeNameLength @ 0x1406E8134 (ComputeNameLength.c)
 */

BOOLEAN __stdcall PfxInsertPrefix(PPREFIX_TABLE PrefixTable, PSTRING Prefix, PPREFIX_TABLE_ENTRY PrefixTableEntry)
{
  CSHORT v6; // ax
  RTL_SPLAY_LINKS *p_Links; // r14
  _PREFIX_TABLE *i; // rdi
  _PREFIX_TABLE *j; // rsi
  int v11; // eax
  PPREFIX_TABLE_ENTRY NextPrefixTree; // rax
  _RTL_SPLAY_LINKS *v13; // rcx
  _PREFIX_TABLE_ENTRY *v14; // rbx
  _PREFIX_TABLE_ENTRY *p_LeftChild; // rax

  v6 = ComputeNameLength(&Prefix->Length);
  PrefixTableEntry->NameLength = v6;
  p_Links = &PrefixTableEntry->Links;
  PrefixTableEntry->Prefix = Prefix;
  PrefixTableEntry->Links.LeftChild = 0LL;
  PrefixTableEntry->Links.RightChild = 0LL;
  PrefixTableEntry->Links.Parent = &PrefixTableEntry->Links;
  for ( i = (_PREFIX_TABLE *)PrefixTable->NextPrefixTree; i->NameLength > v6; i = (_PREFIX_TABLE *)i->NextPrefixTree )
    PrefixTable = i;
  if ( i->NameLength == v6 )
  {
    for ( j = i; ; j = (_PREFIX_TABLE *)&NextPrefixTree[-1].Links.RightChild )
    {
      v11 = CompareNamesCaseSensitive((unsigned __int16 *)j[2].NextPrefixTree, &Prefix->Length);
      if ( v11 == 2 )
        break;
      if ( v11 == 3 )
      {
        NextPrefixTree = j[1].NextPrefixTree;
        if ( !NextPrefixTree )
        {
          PrefixTableEntry->NextPrefixTree = 0LL;
          v13 = (_RTL_SPLAY_LINKS *)&j[1];
          PrefixTableEntry->NodeTypeCode = 514;
          j[1].NextPrefixTree = (PPREFIX_TABLE_ENTRY)p_Links;
LABEL_15:
          p_Links->Parent = v13;
          v14 = i->NextPrefixTree;
          i->NextPrefixTree = 0LL;
          i->NodeTypeCode = 514;
          p_LeftChild = (_PREFIX_TABLE_ENTRY *)&RtlSplay(v13)[-1].LeftChild;
          p_LeftChild->NodeTypeCode = 513;
          PrefixTable->NextPrefixTree = p_LeftChild;
          p_LeftChild->NextPrefixTree = v14;
          return 1;
        }
      }
      else
      {
        NextPrefixTree = *(PPREFIX_TABLE_ENTRY *)&j[2].NodeTypeCode;
        if ( !NextPrefixTree )
        {
          PrefixTableEntry->NextPrefixTree = 0LL;
          v13 = (_RTL_SPLAY_LINKS *)&j[1];
          PrefixTableEntry->NodeTypeCode = 514;
          *(_QWORD *)&j[2].NodeTypeCode = p_Links;
          goto LABEL_15;
        }
      }
    }
    return 0;
  }
  else
  {
    PrefixTable->NextPrefixTree = PrefixTableEntry;
    PrefixTableEntry->NodeTypeCode = 513;
    PrefixTableEntry->NextPrefixTree = (_PREFIX_TABLE_ENTRY *)i;
    return 1;
  }
}
