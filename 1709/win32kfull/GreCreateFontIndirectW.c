/*
 * XREFs of GreCreateFontIndirectW @ 0x1C00B1984
 * Callers:
 *     DrawFrameControl @ 0x1C007E640 (DrawFrameControl.c)
 *     ValidateExternalLogFont @ 0x1C00812F0 (ValidateExternalLogFont.c)
 *     xxxSetNCFonts @ 0x1C0081880 (xxxSetNCFonts.c)
 *     CreateFontFromUserProfile @ 0x1C0082080 (CreateFontFromUserProfile.c)
 *     UserSetAltScaleFont @ 0x1C00821F4 (UserSetAltScaleFont.c)
 *     FinishStockFontInit @ 0x1C00C02A0 (FinishStockFontInit.c)
 *     CreateScaledFont @ 0x1C01A1438 (CreateScaledFont.c)
 * Callees:
 *     hfontCreate @ 0x1C00B1A10 (hfontCreate.c)
 *     vConvertLogFontW @ 0x1C00B24B0 (vConvertLogFontW.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall GreCreateFontIndirectW(__int64 a1, unsigned int a2)
{
  _BYTE Src[432]; // [rsp+30h] [rbp-1C8h] BYREF

  memset(Src, 0, 0x1A4uLL);
  vConvertLogFontW(Src, a1);
  return hfontCreate(Src, a2);
}
