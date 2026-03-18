/*
 * XREFs of MmPrefetchPages @ 0x14048E070
 * Callers:
 *     <none>
 * Callees:
 *     MmPrefetchPagesEx @ 0x14048E088 (MmPrefetchPagesEx.c)
 */

NTSTATUS __stdcall MmPrefetchPages(ULONG NumberOfLists, PREAD_LIST *ReadLists)
{
  return MmPrefetchPagesEx(NumberOfLists, ReadLists, 0LL);
}
