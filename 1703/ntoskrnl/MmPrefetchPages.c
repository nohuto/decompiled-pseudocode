/*
 * XREFs of MmPrefetchPages @ 0x14053D360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall MmPrefetchPages(ULONG NumberOfLists, PREAD_LIST *ReadLists)
{
  return MmPrefetchPagesEx(NumberOfLists, ReadLists, 0LL);
}
