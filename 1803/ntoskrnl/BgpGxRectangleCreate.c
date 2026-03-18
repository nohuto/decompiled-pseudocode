/*
 * XREFs of BgpGxRectangleCreate @ 0x14083C2B0
 * Callers:
 *     BgpGxConvertRectangleEx @ 0x1401739C0 (BgpGxConvertRectangleEx.c)
 *     AnFwDisplayFade @ 0x14083B548 (AnFwDisplayFade.c)
 *     BgpTxtCreateRegion @ 0x14083C0D0 (BgpTxtCreateRegion.c)
 *     BgpGxParseBitmap @ 0x14083D624 (BgpGxParseBitmap.c)
 *     BgpGxBlendRectangle @ 0x140840A84 (BgpGxBlendRectangle.c)
 *     BgpGxFindSubRectangle @ 0x140840DEC (BgpGxFindSubRectangle.c)
 *     BgpGxReadRectangle @ 0x140841048 (BgpGxReadRectangle.c)
 *     BgpTxtDisplayString @ 0x140841398 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x1401655A0 (BgpFwAllocateMemory.c)
 *     GxpBitsToBytes @ 0x14016571C (GxpBitsToBytes.c)
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
