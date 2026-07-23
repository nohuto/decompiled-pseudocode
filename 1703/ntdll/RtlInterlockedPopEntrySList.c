/*
 * XREFs of RtlInterlockedPopEntrySList @ 0x1800A8D80
 * Callers:
 *     sub_180006A0C @ 0x180006A0C (sub_180006A0C.c)
 *     sub_18000EF18 @ 0x18000EF18 (sub_18000EF18.c)
 *     sub_18000F3FC @ 0x18000F3FC (sub_18000F3FC.c)
 *     sub_18001B610 @ 0x18001B610 (sub_18001B610.c)
 *     sub_180022088 @ 0x180022088 (sub_180022088.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 *     sub_18002BA00 @ 0x18002BA00 (sub_18002BA00.c)
 *     sub_18002F644 @ 0x18002F644 (sub_18002F644.c)
 *     sub_1800F93DC @ 0x1800F93DC (sub_1800F93DC.c)
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
