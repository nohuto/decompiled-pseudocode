/*
 * XREFs of MiPfCompletePrefetchIos @ 0x1400207A4
 * Callers:
 *     MmWaitForCacheManagerPrefetch @ 0x140020718 (MmWaitForCacheManagerPrefetch.c)
 *     MiPrefetchVirtualMemory @ 0x140109C80 (MiPrefetchVirtualMemory.c)
 *     MmPrefetchPagesEx @ 0x14048E088 (MmPrefetchPagesEx.c)
 *     MiPrefetchControlArea @ 0x1404F605C (MiPrefetchControlArea.c)
 * Callees:
 *     MiPfCompleteInPageSupport @ 0x14002083C (MiPfCompleteInPageSupport.c)
 *     MiPfCoalesceAndIssueIOs @ 0x140129B30 (MiPfCoalesceAndIssueIOs.c)
 *     MiPfCompleteCoalescedIo @ 0x14021BACC (MiPfCompleteCoalescedIo.c)
 */

__int64 __fastcall MiPfCompletePrefetchIos(_QWORD **a1, __int64 a2)
{
  unsigned int v3; // edi
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  int v6; // eax

  if ( a2 )
    MiPfCoalesceAndIssueIOs(a2, a1, 0LL);
  v3 = 0;
  while ( 1 )
  {
    v4 = *a1;
    if ( *a1 == a1 )
      break;
    if ( (_QWORD **)v4[1] != a1 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *a1 = v5;
    v5[1] = a1;
    if ( (*((_BYTE *)v4 + 191) & 0x40) != 0 )
      v6 = MiPfCompleteCoalescedIo(v4);
    else
      v6 = MiPfCompleteInPageSupport((ULONG_PTR)v4);
    if ( v6 < 0 && v6 != -1073740748 )
      v3 = v6;
  }
  return v3;
}
