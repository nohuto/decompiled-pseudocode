/*
 * XREFs of MiReferencePagePartition @ 0x14021F8B4
 * Callers:
 *     MiMoveEccPagesToFreeList @ 0x1402149CC (MiMoveEccPagesToFreeList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140214CE0 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReferencePagePartition(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  v2 = *(_QWORD *)(v1 + 168);
  _m_prefetchw((const void *)(v2 + 24));
  v3 = *(_QWORD *)(v2 + 24);
  while ( (unsigned __int64)(v3 + 1) > 1 )
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 24), v3 + 1, v3);
    if ( v4 == v3 )
      return v1;
  }
  if ( v3 )
    __fastfail(0xEu);
  return 0LL;
}
