/*
 * XREFs of BgpGxRectangleCreate @ 0x1407CFFBC
 * Callers:
 *     BgpGxConvertRectangleEx @ 0x14013C748 (BgpGxConvertRectangleEx.c)
 *     BgpGxParseBitmap @ 0x1407CE81C (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x1407CE960 (BgpGxReadRectangle.c)
 *     BgpGxFindSubRectangle @ 0x1407CEC18 (BgpGxFindSubRectangle.c)
 *     AnFwDisplayFade @ 0x1407CEDC0 (AnFwDisplayFade.c)
 *     BgpTxtCreateRegion @ 0x1407CF494 (BgpTxtCreateRegion.c)
 *     BgpGxBlendRectangle @ 0x1407D3F10 (BgpGxBlendRectangle.c)
 *     BgpTxtDisplayString @ 0x1407D4284 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x14013E320 (BgpFwAllocateMemory.c)
 *     GxpBitsToBytes @ 0x14013E740 (GxpBitsToBytes.c)
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
