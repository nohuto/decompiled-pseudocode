/*
 * XREFs of RtlNextUnicodePrefix @ 0x140586590
 * Callers:
 *     <none>
 * Callees:
 *     RtlRealSuccessor @ 0x14000CC10 (RtlRealSuccessor.c)
 */

PUNICODE_PREFIX_TABLE_ENTRY __stdcall RtlNextUnicodePrefix(PUNICODE_PREFIX_TABLE PrefixTable, BOOLEAN Restart)
{
  PUNICODE_PREFIX_TABLE_ENTRY NextPrefixTree; // rax
  PUNICODE_PREFIX_TABLE_ENTRY result; // rax
  PUNICODE_PREFIX_TABLE_ENTRY LastNextEntry; // rbx
  _RTL_SPLAY_LINKS *LeftChild; // rcx
  PRTL_SPLAY_LINKS p_Links; // rax
  RTL_SPLAY_LINKS *v8; // rax
  _RTL_SPLAY_LINKS *i; // rcx
  _RTL_SPLAY_LINKS *v10; // rax
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
  }
  else
  {
    result = LastNextEntry->CaseMatch;
    if ( result->NodeTypeCode == 2051 )
      goto LABEL_9;
    p_Links = RtlRealSuccessor(&result->Links);
    if ( !p_Links )
    {
      v8 = &LastNextEntry->Links;
      for ( i = LastNextEntry->Links.Parent; i != v8; i = i->Parent )
        v8 = i;
      v10 = v8[-1].LeftChild;
      if ( SWORD1(v10->Parent) > 0 )
      {
        v11 = v10[1].LeftChild;
        p_Links = v10 + 1;
        while ( v11 )
        {
          p_Links = v11;
          v11 = v11->LeftChild;
        }
        goto LABEL_8;
      }
      return 0LL;
    }
  }
LABEL_8:
  result = (PUNICODE_PREFIX_TABLE_ENTRY)&p_Links[-1];
LABEL_9:
  PrefixTable->LastNextEntry = result;
  return result;
}
