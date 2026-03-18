/*
 * XREFs of RaspAllocateMemory @ 0x14013E2C0
 * Callers:
 *     RaspLoadEmptyGlyph @ 0x14013B894 (RaspLoadEmptyGlyph.c)
 *     RaspGetXExtent @ 0x14013C930 (RaspGetXExtent.c)
 *     RaspScanConvert @ 0x14013CED0 (RaspScanConvert.c)
 *     RaspRectangleCreate @ 0x14013D700 (RaspRectangleCreate.c)
 *     RaspCreatePointList @ 0x14013D7D4 (RaspCreatePointList.c)
 *     RaspInitializeGlyphData @ 0x14013DAC0 (RaspInitializeGlyphData.c)
 *     RaspCreateSegmentList @ 0x14013DEDC (RaspCreateSegmentList.c)
 *     RaspInterpolatePoint @ 0x14013E23C (RaspInterpolatePoint.c)
 *     RaspGetCompositeGlyphList @ 0x140291B2C (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x140291E48 (RaspInitializeCompositeGlyphData.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x14013E320 (BgpFwAllocateMemory.c)
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
