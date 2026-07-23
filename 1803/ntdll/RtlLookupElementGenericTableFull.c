/*
 * XREFs of RtlLookupElementGenericTableFull @ 0x1800EFE30
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x180066960 (RtlSplay.c)
 *     sub_180066B64 @ 0x180066B64 (sub_180066B64.c)
 */

PVOID __cdecl RtlLookupElementGenericTableFull(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  TABLE_SEARCH_RESULT v7; // eax

  v7 = (unsigned int)sub_180066B64((__int64 *)Table, (__int64)Buffer, NodeOrParent);
  *SearchResult = v7;
  if ( v7 != TableFoundNode )
    return 0LL;
  Table->TableRoot = RtlSplay((PRTL_SPLAY_LINKS)*NodeOrParent);
  return (char *)*NodeOrParent + 40;
}
