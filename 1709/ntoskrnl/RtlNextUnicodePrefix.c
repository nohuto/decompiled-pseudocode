/*
 * XREFs of RtlNextUnicodePrefix @ 0x140565950
 * Callers:
 *     <none>
 * Callees:
 *     RtlRealSuccessor @ 0x140105680 (RtlRealSuccessor.c)
 */

PUNICODE_PREFIX_TABLE_ENTRY __stdcall RtlNextUnicodePrefix(PUNICODE_PREFIX_TABLE PrefixTable, BOOLEAN Restart)
{
  PUNICODE_PREFIX_TABLE_ENTRY NextPrefixTree; // rax
  PUNICODE_PREFIX_TABLE_ENTRY result; // rax
  PUNICODE_PREFIX_TABLE_ENTRY LastNextEntry; // rbx
  PRTL_SPLAY_LINKS p_Links; // rax
  RTL_SPLAY_LINKS *v7; // rax
  _RTL_SPLAY_LINKS *i; // rcx
  _RTL_SPLAY_LINKS *v9; // rax
  _RTL_SPLAY_LINKS *LeftChild; // rcx
  _RTL_SPLAY_LINKS *v11; // rcx

  if ( Restart || (LastNextEntry = PrefixTable->LastNextEntry) == 0LL )
  {
    NextPrefixTree = PrefixTable->NextPrefixTree;
    if ( NextPrefixTree->NodeTypeCode == 2048 )
      return 0LL;
    LeftChild = NextPrefixTree->Links.LeftChild;
    p_Links = &NextPrefixTree->Links;
    while ( LeftChild )
    {
      p_Links = LeftChild;
      LeftChild = LeftChild->LeftChild;
    }
    goto LABEL_13;
  }
  result = LastNextEntry->CaseMatch;
  if ( result->NodeTypeCode != 2051 )
  {
    p_Links = RtlRealSuccessor(&result->Links);
    if ( !p_Links )
    {
      v7 = &LastNextEntry->Links;
      for ( i = LastNextEntry->Links.Parent; i != v7; i = i->Parent )
        v7 = i;
      v9 = v7[-1].LeftChild;
      if ( SWORD1(v9->Parent) > 0 )
      {
        v11 = v9[1].LeftChild;
        p_Links = v9 + 1;
        while ( v11 )
        {
          p_Links = v11;
          v11 = v11->LeftChild;
        }
        goto LABEL_13;
      }
      return 0LL;
    }
LABEL_13:
    result = (PUNICODE_PREFIX_TABLE_ENTRY)&p_Links[-1];
  }
  PrefixTable->LastNextEntry = result;
  return result;
}
