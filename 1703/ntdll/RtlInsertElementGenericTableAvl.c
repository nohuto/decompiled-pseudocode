/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x1800691F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x180069260 (RtlInsertElementGenericTableFullAvl.c)
 *     sub_18006938C @ 0x18006938C (sub_18006938C.c)
 */

PVOID __cdecl RtlInsertElementGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  TABLE_SEARCH_RESULT SearchResult; // eax
  PVOID NodeOrParent; // [rsp+30h] [rbp-18h]

  SearchResult = (unsigned int)sub_18006938C(Table, Buffer);
  return RtlInsertElementGenericTableFullAvl(Table, Buffer, BufferSize, NewElement, NodeOrParent, SearchResult);
}
