/*
 * XREFs of RtlLookupElementGenericTableFullAvl @ 0x180069170
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006938C @ 0x18006938C (sub_18006938C.c)
 */

PVOID __cdecl RtlLookupElementGenericTableFullAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  TABLE_SEARCH_RESULT v6; // eax

  v6 = (unsigned int)sub_18006938C(Table, Buffer);
  *SearchResult = v6;
  if ( v6 == TableFoundNode )
    return (char *)*NodeOrParent + 32;
  else
    return 0LL;
}
