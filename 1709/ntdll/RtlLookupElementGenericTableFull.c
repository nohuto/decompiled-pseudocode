/*
 * XREFs of RtlLookupElementGenericTableFull @ 0x1800F39F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x180069120 (RtlSplay.c)
 *     FindNodeOrParent @ 0x180069328 (FindNodeOrParent.c)
 */

PVOID __cdecl RtlLookupElementGenericTableFull(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  TABLE_SEARCH_RESULT v7; // eax

  v7 = (unsigned int)FindNodeOrParent((__int64 *)Table, (__int64)Buffer, NodeOrParent);
  *SearchResult = v7;
  if ( v7 != TableFoundNode )
    return 0LL;
  Table->TableRoot = RtlSplay((PRTL_SPLAY_LINKS)*NodeOrParent);
  return (char *)*NodeOrParent + 40;
}
