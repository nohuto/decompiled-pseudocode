/*
 * XREFs of RaspAllocateMemory @ 0x140142D48
 * Callers:
 *     RaspLoadEmptyGlyph @ 0x1401405F4 (RaspLoadEmptyGlyph.c)
 *     RaspScanConvert @ 0x140141980 (RaspScanConvert.c)
 *     RaspRectangleCreate @ 0x1401421B0 (RaspRectangleCreate.c)
 *     RaspCreatePointList @ 0x140142284 (RaspCreatePointList.c)
 *     RaspInitializeGlyphData @ 0x140142574 (RaspInitializeGlyphData.c)
 *     RaspCreateSegmentList @ 0x140142980 (RaspCreateSegmentList.c)
 *     RaspInterpolatePoint @ 0x140142CC4 (RaspInterpolatePoint.c)
 *     RaspGetXExtent @ 0x14015DE2C (RaspGetXExtent.c)
 *     RaspGetCompositeGlyphList @ 0x1402677D4 (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x140267AF0 (RaspInitializeCompositeGlyphData.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x140142DA8 (BgpFwAllocateMemory.c)
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
