/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x1800A3B10
 * Callers:
 *     RtlpAllocateDebugInfo @ 0x180009CCC (RtlpAllocateDebugInfo.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180014AA8 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpFreeUserBlock @ 0x180015054 (RtlpFreeUserBlock.c)
 *     EtwpAllocateRegistration @ 0x1800368CC (EtwpAllocateRegistration.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180041A70 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x180046890 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpAllocateUserBlock @ 0x180049994 (RtlpAllocateUserBlock.c)
 *     RtlpStdGetSpaceForTrace @ 0x1800FA804 (RtlpStdGetSpaceForTrace.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x180112010 (RtlAllocateMemoryBlockLookaside.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPopEntrySList(PSLIST_HEADER ListHead)
{
  _SLIST_ENTRY *v1; // r8
  unsigned __int64 Alignment; // rbx
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
