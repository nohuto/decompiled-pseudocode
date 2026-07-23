/*
 * XREFs of RtlInterlockedPopEntrySList @ 0x18009E550
 * Callers:
 *     sub_180013AC8 @ 0x180013AC8 (sub_180013AC8.c)
 *     sub_180019A00 @ 0x180019A00 (sub_180019A00.c)
 *     sub_18001E320 @ 0x18001E320 (sub_18001E320.c)
 *     sub_1800225EC @ 0x1800225EC (sub_1800225EC.c)
 *     sub_1800244F8 @ 0x1800244F8 (sub_1800244F8.c)
 *     sub_1800298DC @ 0x1800298DC (sub_1800298DC.c)
 *     sub_180061610 @ 0x180061610 (sub_180061610.c)
 *     sub_1800F6EE0 @ 0x1800F6EE0 (sub_1800F6EE0.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x18010F010 (RtlAllocateMemoryBlockLookaside.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlInterlockedPopEntrySList(PSLIST_HEADER ListHead)
{
  _SLIST_ENTRY *v1; // r8
  ULONGLONG Alignment; // rbx
  _SLIST_HEADER v3; // rt0

  _m_prefetchw(ListHead);
  while ( 1 )
  {
    v1 = (_SLIST_ENTRY *)(ListHead->Region & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !v1 )
      break;
    Alignment = ListHead->Alignment;
    v3 = *ListHead;
    LOWORD(Alignment) = ListHead->Alignment - 1;
    if ( _InterlockedCompareExchange128(
           (volatile signed __int64 *)ListHead,
           (signed __int64)v1->Next,
           Alignment,
           (signed __int64 *)&v3) )
    {
      return v1;
    }
  }
  _InterlockedOr64((volatile signed __int64 *)ListHead, 0LL);
  return v1;
}
