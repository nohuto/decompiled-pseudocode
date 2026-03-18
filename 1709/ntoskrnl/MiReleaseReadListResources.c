/*
 * XREFs of MiReleaseReadListResources @ 0x1404D1DC8
 * Callers:
 *     MmWaitForCacheManagerPrefetch @ 0x140020718 (MmWaitForCacheManagerPrefetch.c)
 *     MmPrefetchPagesEx @ 0x14048E088 (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x140492FC0 (MmPrefetchForCacheManager.c)
 *     MiPfPrepareReadList @ 0x140494BE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140495440 (MiPfPrepareSequentialReadList.c)
 *     MiPrefetchControlArea @ 0x1404F605C (MiPrefetchControlArea.c)
 * Callees:
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400A4E10 (MiRemoveViewsFromSectionWithPfn.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MiFreeReadListPages @ 0x1404D1E58 (MiFreeReadListPages.c)
 */

void __fastcall MiReleaseReadListResources(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbx
  _DWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi

  v1 = *(_QWORD *)(a1 + 8);
  MiFreeReadListPages(a1);
  if ( (*(_DWORD *)(v1 + 56) & 0x20) == 0 )
  {
    v3 = a1 + 24;
    while ( *(_QWORD *)v3 != v3 )
    {
      v4 = *(_DWORD **)v3;
      if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = *(_QWORD *)v4, *(_DWORD **)(*(_QWORD *)v4 + 8LL) != v4) )
        __fastfail(3u);
      *(_QWORD *)v3 = v5;
      v6 = 0LL;
      for ( *(_QWORD *)(v5 + 8) = v3; (unsigned int)v6 < v4[4]; v6 = (unsigned int)(v6 + 1) )
        MiRemoveViewsFromSectionWithPfn(
          *(__int64 **)&v4[2 * v6 + 6],
          *(unsigned int *)(*(_QWORD *)&v4[2 * v6 + 6] + 44LL),
          4u);
      ExFreePoolWithTag(v4, 0);
    }
  }
}
