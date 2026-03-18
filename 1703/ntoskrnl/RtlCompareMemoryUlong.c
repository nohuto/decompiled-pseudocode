/*
 * XREFs of RtlCompareMemoryUlong @ 0x140189B80
 * Callers:
 *     RtlpCreateSplitBlock @ 0x14000EAF4 (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x14000F368 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAllocateHeap @ 0x14000F830 (RtlpAllocateHeap.c)
 *     MiFreeUnusedPfnPages @ 0x14015A8A0 (MiFreeUnusedPfnPages.c)
 *     RtlScrubMemory @ 0x14024108C (RtlScrubMemory.c)
 *     IopTrackLink @ 0x1404525A0 (IopTrackLink.c)
 *     MiSwitchToPfns @ 0x14080053C (MiSwitchToPfns.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall RtlCompareMemoryUlong(PVOID Source, SIZE_T Length, ULONG Pattern)
{
  bool v4; // zf
  SIZE_T v5; // rdx
  SIZE_T v6; // rcx

  v5 = Length >> 2;
  v4 = v5 == 0;
  if ( v5 )
  {
    v6 = v5;
    do
    {
      if ( !v6 )
        break;
      v4 = *(_DWORD *)Source == Pattern;
      Source = (char *)Source + 4;
      --v6;
    }
    while ( v4 );
    if ( !v4 )
      v5 -= v6 + 1;
  }
  return 4 * v5;
}
