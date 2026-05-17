/*
 * XREFs of RtlpHpLargeAllocGetMetadata @ 0x18006F598
 * Callers:
 *     RtlpQueryExtendedInformationHeap @ 0x180012E80 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpHpHeapWalk @ 0x1800619F0 (RtlpHpHeapWalk.c)
 *     RtlpHpLargeAllocSize @ 0x18006F39C (RtlpHpLargeAllocSize.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x18006F438 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeFree @ 0x18006F490 (RtlpHpLargeFree.c)
 *     RtlpHpLargeReAlloc @ 0x180107690 (RtlpHpLargeReAlloc.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpHpLargeAllocGetMetadata(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  int v3; // r8d
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx

  result = *(_QWORD *)(a1 + 80);
  v3 = *(_BYTE *)(a1 + 88) & 1;
  while ( result )
  {
    v4 = *(_QWORD *)(result + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 > v4 )
    {
      v5 = *(_QWORD *)(result + 8);
    }
    else
    {
      if ( a2 >= v4 )
        return result;
      v5 = *(_QWORD *)result;
    }
    if ( v3 && v5 )
      result ^= v5;
    else
      result = v5;
  }
  return result;
}
