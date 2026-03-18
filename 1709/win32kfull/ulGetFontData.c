/*
 * XREFs of ulGetFontData @ 0x1C00F5B7C
 * Callers:
 *     NtGdiGetFontData @ 0x1C00F5A80 (NtGdiGetFontData.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C00F5BF4 (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 */

__int64 __fastcall ulGetFontData(HDC a1, unsigned int a2, unsigned int a3, unsigned __int8 *a4, unsigned int a5)
{
  unsigned int FontData2; // ebx
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  if ( v10[0] )
  {
    FontData2 = ulGetFontData2((struct DCOBJ *)v10, a2, a3, a4, a5);
  }
  else
  {
    EngSetLastError(6u);
    FontData2 = -1;
  }
  if ( v10[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  return FontData2;
}
