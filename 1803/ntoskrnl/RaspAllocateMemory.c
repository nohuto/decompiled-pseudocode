/*
 * XREFs of RaspAllocateMemory @ 0x1401758F4
 * Callers:
 *     RaspLoadEmptyGlyph @ 0x1401736A0 (RaspLoadEmptyGlyph.c)
 *     RaspGetXExtent @ 0x140174074 (RaspGetXExtent.c)
 *     RaspScanConvert @ 0x140174560 (RaspScanConvert.c)
 *     RaspRectangleCreate @ 0x140174DC0 (RaspRectangleCreate.c)
 *     RaspCreatePointList @ 0x140174E34 (RaspCreatePointList.c)
 *     RaspInitializeGlyphData @ 0x140175110 (RaspInitializeGlyphData.c)
 *     RaspCreateSegmentList @ 0x14017550C (RaspCreateSegmentList.c)
 *     RaspInterpolatePoint @ 0x140175870 (RaspInterpolatePoint.c)
 *     RaspGetCompositeGlyphList @ 0x1402C7648 (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x1402C7964 (RaspInitializeCompositeGlyphData.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x1401655A0 (BgpFwAllocateMemory.c)
 */

__int64 __fastcall RaspAllocateMemory(unsigned __int64 a1, __int64 *a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 Memory; // rdx

  v3 = *a2;
  v4 = (a2[2] + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( *a2 )
  {
    if ( a1 > a2[1] - v4 )
    {
      return 0LL;
    }
    else
    {
      a2[2] = v4 + a1;
      return v3 + v4;
    }
  }
  else
  {
    Memory = BgpFwAllocateMemory(a1);
    if ( Memory )
      a2[2] = v4 + a1;
  }
  return Memory;
}
