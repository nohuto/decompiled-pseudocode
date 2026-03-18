/*
 * XREFs of MiScrubPage @ 0x140226824
 * Callers:
 *     MiScrubNodeLargePageList @ 0x140224CA4 (MiScrubNodeLargePageList.c)
 *     MiScrubAweMappedPage @ 0x140226064 (MiScrubAweMappedPage.c)
 *     MiScrubLargeMappedPage @ 0x14022617C (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x140226610 (MiScrubNode.c)
 *     MiScrubNonPagedPool @ 0x1406B6538 (MiScrubNonPagedPool.c)
 *     MiScrubProcesses @ 0x1406C0060 (MiScrubProcesses.c)
 * Callees:
 *     MiGetPteFromCopyList @ 0x14002C478 (MiGetPteFromCopyList.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     KeCopyPage @ 0x140185390 (KeCopyPage.c)
 *     RtlScrubMemory @ 0x14024108C (RtlScrubMemory.c)
 */

__int64 __fastcall MiScrubPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  unsigned __int64 PteFromCopyList; // rsi
  unsigned int v9; // r15d

  if ( a4 )
  {
    v7 = a4;
    PteFromCopyList = 0LL;
  }
  else
  {
    PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList((unsigned int *)a1, (a3 + 0x58000000000LL) / 48, -1LL);
    v7 = (__int64)(PteFromCopyList << 25) >> 16;
  }
  if ( a2 )
    KeCopyPage(a2, v7);
  v9 = RtlScrubMemory((PVOID)v7);
  if ( a2 )
    KeCopyPage(v7, a2);
  if ( !a4 )
  {
    *(_QWORD *)PteFromCopyList = 0LL;
    if ( MiPteInShadowRange(PteFromCopyList) )
      MiWritePteShadow();
  }
  ++*(_QWORD *)(a1 + 40);
  return v9;
}
