/*
 * XREFs of GreCreateFontIndirectW @ 0x1C002B45C
 * Callers:
 *     FinishStockFontInit @ 0x1C000A820 (FinishStockFontInit.c)
 *     xxxSetNCFonts @ 0x1C000BBE4 (xxxSetNCFonts.c)
 *     CreateFontFromWinIni @ 0x1C000C5F8 (CreateFontFromWinIni.c)
 *     UserSetAltScaleFont @ 0x1C000C71C (UserSetAltScaleFont.c)
 *     DrawFrameControl @ 0x1C002B024 (DrawFrameControl.c)
 *     CreateScaledFont @ 0x1C01C3F3C (CreateScaledFont.c)
 * Callees:
 *     vConvertLogFontW @ 0x1C002B400 (vConvertLogFontW.c)
 *     hfontCreate @ 0x1C002B4D0 (hfontCreate.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall GreCreateFontIndirectW(__int64 a1)
{
  _BYTE Src[432]; // [rsp+20h] [rbp-1C8h] BYREF

  memset(Src, 0, 0x1A4uLL);
  vConvertLogFontW((__int64)Src, a1);
  return hfontCreate(Src);
}
