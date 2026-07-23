/*
 * XREFs of RtlLookupElementGenericTableFull @ 0x1800F2D80
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x180065CB0 (RtlSplay.c)
 *     sub_180065EBC @ 0x180065EBC (sub_180065EBC.c)
 */

PVOID __cdecl RtlLookupElementGenericTableFull(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  TABLE_SEARCH_RESULT v7; // eax

  v7 = (unsigned int)sub_180065EBC((__int64 *)Table, (__int64)Buffer, NodeOrParent);
  *SearchResult = v7;
  if ( v7 != TableFoundNode )
    return 0LL;
  Table->TableRoot = RtlSplay((PRTL_SPLAY_LINKS)*NodeOrParent);
  return (char *)*NodeOrParent + 40;
}
