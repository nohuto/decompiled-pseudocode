/*
 * XREFs of RtlInterlockedPushEntrySList_0 @ 0x1800A8DC0
 * Callers:
 *     sub_180006554 @ 0x180006554 (sub_180006554.c)
 *     sub_180006A0C @ 0x180006A0C (sub_180006A0C.c)
 *     sub_180008E24 @ 0x180008E24 (sub_180008E24.c)
 *     sub_18001F7A8 @ 0x18001F7A8 (sub_18001F7A8.c)
 *     sub_180022088 @ 0x180022088 (sub_180022088.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180024AD0 @ 0x180024AD0 (sub_180024AD0.c)
 *     sub_180025780 @ 0x180025780 (sub_180025780.c)
 *     sub_18002BA00 @ 0x18002BA00 (sub_18002BA00.c)
 *     sub_18005FE1C @ 0x18005FE1C (sub_18005FE1C.c)
 *     RtlInterlockedPushEntrySList @ 0x180072EB0 (RtlInterlockedPushEntrySList.c)
 *     sub_1800F8F80 @ 0x1800F8F80 (sub_1800F8F80.c)
 *     sub_1801003C4 @ 0x1801003C4 (sub_1801003C4.c)
 *     RtlFreeMemoryBlockLookaside @ 0x18010F160 (RtlFreeMemoryBlockLookaside.c)
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
