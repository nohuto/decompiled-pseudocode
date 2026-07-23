/*
 * XREFs of RtlInterlockedPushEntrySList_0 @ 0x18009E590
 * Callers:
 *     sub_180008138 @ 0x180008138 (sub_180008138.c)
 *     sub_180013AC8 @ 0x180013AC8 (sub_180013AC8.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_180017430 @ 0x180017430 (sub_180017430.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 *     sub_180018770 @ 0x180018770 (sub_180018770.c)
 *     sub_180019A00 @ 0x180019A00 (sub_180019A00.c)
 *     sub_180029EA4 @ 0x180029EA4 (sub_180029EA4.c)
 *     sub_18005FF9C @ 0x18005FF9C (sub_18005FF9C.c)
 *     sub_180061148 @ 0x180061148 (sub_180061148.c)
 *     sub_180061610 @ 0x180061610 (sub_180061610.c)
 *     RtlInterlockedPushEntrySList @ 0x18006CE90 (RtlInterlockedPushEntrySList.c)
 *     sub_1800F6A80 @ 0x1800F6A80 (sub_1800F6A80.c)
 *     sub_1800FEEC4 @ 0x1800FEEC4 (sub_1800FEEC4.c)
 *     RtlFreeMemoryBlockLookaside @ 0x18010F190 (RtlFreeMemoryBlockLookaside.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __cdecl RtlInterlockedPushEntrySList_0(PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry)
{
  _SLIST_HEADER v5; // rax
  _SLIST_ENTRY *Region; // r8
  _SLIST_HEADER v7; // rt0
  unsigned __int8 v8; // tt

  _m_prefetchw(ListHead);
  v5 = *ListHead;
  do
  {
    Region = (_SLIST_ENTRY *)v5.Region;
    LOBYTE(Region) = *((_BYTE *)&v5.HeaderX64 + 8) & 0xF0;
    ListEntry->Next = Region;
    v7 = v5;
    v8 = _InterlockedCompareExchange128(
           (volatile signed __int64 *)ListHead,
           (signed __int64)ListEntry,
           v5.Alignment + 65537,
           (signed __int64 *)&v7);
    v5 = v7;
  }
  while ( !v8 );
  return Region;
}
