/*
 * XREFs of RtlFindUnicodePrefix @ 0x140566270
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x1401065D0 (RtlSplay.c)
 *     CompareUnicodeStrings @ 0x140566380 (CompareUnicodeStrings.c)
 *     ComputeUnicodeNameLength @ 0x1405664F0 (ComputeUnicodeNameLength.c)
 */

PUNICODE_PREFIX_TABLE_ENTRY __stdcall RtlFindUnicodePrefix(
        PUNICODE_PREFIX_TABLE PrefixTable,
        PCUNICODE_STRING FullName,
        ULONG CaseInsensitiveIndex)
{
  CSHORT v6; // ax
  _UNICODE_PREFIX_TABLE *i; // rdi
  _RTL_SPLAY_LINKS *j; // rsi
  _UNICODE_PREFIX_TABLE_ENTRY *v10; // r14
  int v11; // eax
  _UNICODE_PREFIX_TABLE_ENTRY *v12; // rbx
  _UNICODE_PREFIX_TABLE_ENTRY *NextPrefixTree; // rbx

  v6 = ComputeUnicodeNameLength(FullName);
  for ( i = (_UNICODE_PREFIX_TABLE *)PrefixTable->NextPrefixTree;
        i->NameLength > v6;
        i = (_UNICODE_PREFIX_TABLE *)i->NextPrefixTree )
  {
    PrefixTable = i;
  }
LABEL_4:
  if ( i->NameLength <= 0 )
    return 0LL;
  for ( j = (_RTL_SPLAY_LINKS *)&i[1]; ; j = j->RightChild )
  {
    while ( 1 )
    {
      if ( !j )
      {
LABEL_16:
        PrefixTable = i;
        i = (_UNICODE_PREFIX_TABLE *)i->NextPrefixTree;
        goto LABEL_4;
      }
      v10 = (_UNICODE_PREFIX_TABLE_ENTRY *)&j[-1];
      v11 = CompareUnicodeStrings(j[1].Parent, FullName, 0LL);
      if ( v11 != 3 )
        break;
      j = j->LeftChild;
    }
    if ( v11 )
      break;
  }
  if ( CaseInsensitiveIndex )
  {
    v12 = (_UNICODE_PREFIX_TABLE_ENTRY *)&j[-1];
    while ( (unsigned int)CompareUnicodeStrings(v12->Prefix, FullName, CaseInsensitiveIndex) - 1 > 1 )
    {
      v12 = v12->CaseMatch;
      if ( v12 == v10 )
        goto LABEL_16;
    }
    return v12;
  }
  else
  {
    if ( v10->NodeTypeCode == 2050 )
    {
      NextPrefixTree = i->NextPrefixTree;
      i->NextPrefixTree = 0LL;
      i->NodeTypeCode = 2050;
      v10 = (_UNICODE_PREFIX_TABLE_ENTRY *)&RtlSplay(j)[-1];
      v10->NodeTypeCode = 2049;
      PrefixTable->NextPrefixTree = v10;
      v10->NextPrefixTree = NextPrefixTree;
    }
    return v10;
  }
}
