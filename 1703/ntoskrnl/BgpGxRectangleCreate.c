/*
 * XREFs of BgpGxRectangleCreate @ 0x140757D58
 * Callers:
 *     BgpGxConvertRectangleEx @ 0x14014141C (BgpGxConvertRectangleEx.c)
 *     BgpGxParseBitmap @ 0x140755FF4 (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x14075615C (BgpGxReadRectangle.c)
 *     BgpGxFindSubRectangle @ 0x140756374 (BgpGxFindSubRectangle.c)
 *     AnFwDisplayFade @ 0x14075651C (AnFwDisplayFade.c)
 *     BgpTxtCreateRegion @ 0x140756A9C (BgpTxtCreateRegion.c)
 *     BgpGxBlendRectangle @ 0x14075A828 (BgpGxBlendRectangle.c)
 *     BgpTxtDisplayString @ 0x14075AB90 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x140142DA8 (BgpFwAllocateMemory.c)
 *     GxpBitsToBytes @ 0x140143248 (GxpBitsToBytes.c)
 */

__int64 __fastcall BgpGxRectangleCreate(_DWORD *a1, int a2, __int64 *a3)
{
  unsigned int v4; // ebx
  int v7; // ebp
  __int64 Memory; // rax

  v4 = 0;
  v7 = GxpBitsToBytes(a1[1] * a2 * *a1);
  Memory = BgpFwAllocateMemory((unsigned int)(v7 + 72));
  if ( Memory )
  {
    *(_DWORD *)Memory = a1[1];
    *(_DWORD *)(Memory + 4) = *a1;
    *(_QWORD *)(Memory + 24) = Memory + 72;
    *(_DWORD *)(Memory + 8) = a2;
    *(_DWORD *)(Memory + 16) = 0;
    *(_DWORD *)(Memory + 12) = v7;
    *a3 = Memory;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
