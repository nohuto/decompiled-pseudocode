/*
 * XREFs of RtlLookupElementGenericTableFullAvl @ 0x180069A10
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent_0 @ 0x180069A44 (FindNodeOrParent_0.c)
 */

PVOID __cdecl RtlLookupElementGenericTableFullAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  TABLE_SEARCH_RESULT NodeOrParent_0; // eax

  NodeOrParent_0 = (unsigned int)FindNodeOrParent_0(Table, Buffer, NodeOrParent);
  *SearchResult = NodeOrParent_0;
  if ( NodeOrParent_0 == TableFoundNode )
    return (char *)*NodeOrParent + 32;
  else
    return 0LL;
}
