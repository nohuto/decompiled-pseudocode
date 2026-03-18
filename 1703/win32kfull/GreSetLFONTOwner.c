/*
 * XREFs of GreSetLFONTOwner @ 0x1C000C7F0
 * Callers:
 *     FinishStockFontInit @ 0x1C000A820 (FinishStockFontInit.c)
 *     FinishStockFontReinit @ 0x1C000B490 (FinishStockFontReinit.c)
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C000B910 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 *     xxxSetNCFonts @ 0x1C000BBE4 (xxxSetNCFonts.c)
 *     CreateFontFromWinIni @ 0x1C000C5F8 (CreateFontFromWinIni.c)
 *     UserSetAltScaleFont @ 0x1C000C71C (UserSetAltScaleFont.c)
 *     CreateScaledFont @ 0x1C01C3F3C (CreateScaledFont.c)
 *     bInitStockFontsInternal @ 0x1C038801C (bInitStockFontsInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreSetLFONTOwner(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // rax

  LODWORD(v3) = a2;
  if ( a2 == -2147483646 )
    v3 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  LOBYTE(a3) = 10;
  return HmgSetOwner(a1, (unsigned int)v3, a3);
}
