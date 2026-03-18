/*
 * XREFs of MiPfCompletePrefetchIos @ 0x14010B05C
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x140108070 (MiPrefetchVirtualMemory.c)
 *     MmWaitForCacheManagerPrefetch @ 0x14010AFD0 (MmWaitForCacheManagerPrefetch.c)
 *     MiPrefetchControlArea @ 0x140423A90 (MiPrefetchControlArea.c)
 *     MmPrefetchPagesEx @ 0x14053D370 (MmPrefetchPagesEx.c)
 * Callees:
 *     MiPfCoalesceAndIssueIOs @ 0x14002EF8C (MiPfCoalesceAndIssueIOs.c)
 *     MiPfCompleteInPageSupport @ 0x14010B0F0 (MiPfCompleteInPageSupport.c)
 *     MiPfCompleteCoalescedIo @ 0x140213BC8 (MiPfCompleteCoalescedIo.c)
 */

__int64 __fastcall MiPfCompletePrefetchIos(_QWORD *a1, __int64 **a2)
{
  unsigned int v2; // edi
  _BYTE *v4; // rcx
  __int64 v5; // rax
  int v6; // eax

  v2 = 0;
  if ( a2 )
    MiPfCoalesceAndIssueIOs(a2, (__int64)a1, 0LL);
  while ( 1 )
  {
    v4 = (_BYTE *)*a1;
    if ( (_QWORD *)*a1 == a1 )
      break;
    v5 = *(_QWORD *)v4;
    if ( *((_QWORD **)v4 + 1) != a1 || *(_BYTE **)(v5 + 8) != v4 )
      __fastfail(3u);
    *a1 = v5;
    *(_QWORD *)(v5 + 8) = a1;
    if ( (v4[191] & 0x40) != 0 )
      v6 = MiPfCompleteCoalescedIo(v4);
    else
      v6 = MiPfCompleteInPageSupport((ULONG_PTR)v4);
    if ( v6 < 0 && v6 != -1073740748 )
      v2 = v6;
  }
  return v2;
}
