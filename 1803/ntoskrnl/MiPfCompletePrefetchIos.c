/*
 * XREFs of MiPfCompletePrefetchIos @ 0x14003F2B0
 * Callers:
 *     MmWaitForCacheManagerPrefetch @ 0x140046654 (MmWaitForCacheManagerPrefetch.c)
 *     MiPrefetchVirtualMemory @ 0x14007F6B0 (MiPrefetchVirtualMemory.c)
 *     MmPrefetchPagesEx @ 0x1404BBAC8 (MmPrefetchPagesEx.c)
 *     MiPrefetchControlArea @ 0x14053E190 (MiPrefetchControlArea.c)
 * Callees:
 *     MiPfCompleteInPageSupport @ 0x14003F1DC (MiPfCompleteInPageSupport.c)
 *     MiPfCoalesceAndIssueIOs @ 0x1400C5F28 (MiPfCoalesceAndIssueIOs.c)
 *     MiPfCompleteCoalescedIo @ 0x140257C70 (MiPfCompleteCoalescedIo.c)
 */

__int64 __fastcall MiPfCompletePrefetchIos(ULONG_PTR *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  ULONG_PTR v6; // rcx
  ULONG_PTR v7; // rax
  int v8; // eax

  if ( a2 )
    MiPfCoalesceAndIssueIOs(a2, a1, 0LL);
  v5 = 0;
  while ( 1 )
  {
    v6 = *a1;
    if ( (ULONG_PTR *)*a1 == a1 )
      break;
    if ( *(ULONG_PTR **)(v6 + 8) != a1 || (v7 = *(_QWORD *)v6, *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6) )
      __fastfail(3u);
    *a1 = v7;
    *(_QWORD *)(v7 + 8) = a1;
    if ( (*(_BYTE *)(v6 + 191) & 0x40) != 0 )
      v8 = MiPfCompleteCoalescedIo(v6);
    else
      v8 = MiPfCompleteInPageSupport(v6, a3);
    if ( v8 < 0 && v8 != -1073740748 )
      v5 = v8;
  }
  return v5;
}
