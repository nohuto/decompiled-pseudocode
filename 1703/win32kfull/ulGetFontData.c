/*
 * XREFs of ulGetFontData @ 0x1C00E510C
 * Callers:
 *     NtGdiGetFontData @ 0x1C00E5010 (NtGdiGetFontData.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C00E517C (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
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
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v10);
  return FontData2;
}
