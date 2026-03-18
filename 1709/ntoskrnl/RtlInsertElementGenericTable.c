/*
 * XREFs of RtlInsertElementGenericTable @ 0x1401057E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInsertElementGenericTableFull @ 0x140105850 (RtlInsertElementGenericTableFull.c)
 *     FindNodeOrParent_0 @ 0x1401069D8 (FindNodeOrParent_0.c)
 */

PVOID __stdcall RtlInsertElementGenericTable(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  TABLE_SEARCH_RESULT SearchResult; // eax
  PVOID NodeOrParent[3]; // [rsp+30h] [rbp-18h] BYREF

  SearchResult = (unsigned int)FindNodeOrParent_0(Table, Buffer, NodeOrParent);
  return RtlInsertElementGenericTableFull(Table, Buffer, BufferSize, NewElement, NodeOrParent[0], SearchResult);
}
