/*
 * XREFs of RtlInterlockedFlushSList_0 @ 0x18009E5D0
 * Callers:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_180017430 @ 0x180017430 (sub_180017430.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 *     sub_1800605B4 @ 0x1800605B4 (sub_1800605B4.c)
 *     sub_180061148 @ 0x180061148 (sub_180061148.c)
 *     RtlInterlockedFlushSList @ 0x180072A10 (RtlInterlockedFlushSList.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __cdecl RtlInterlockedFlushSList_0(PSLIST_HEADER ListHead)
{
  _SLIST_HEADER v1; // rax
  signed __int64 Alignment; // rbx
  _SLIST_HEADER v3; // rt0
  unsigned __int8 v4; // tt

  _m_prefetchw(ListHead);
  v1 = *ListHead;
  do
  {
    Alignment = v1.Alignment;
    LOWORD(Alignment) = 0;
    v3 = v1;
    v4 = _InterlockedCompareExchange128((volatile signed __int64 *)ListHead, 0LL, Alignment, (signed __int64 *)&v3);
    v1 = v3;
  }
  while ( !v4 );
  v1.Alignment = v1.Region;
  LOBYTE(v1.Alignment) = *((_BYTE *)&v1.HeaderX64 + 8) & 0xF0;
  return (PSLIST_ENTRY)v1.Alignment;
}
