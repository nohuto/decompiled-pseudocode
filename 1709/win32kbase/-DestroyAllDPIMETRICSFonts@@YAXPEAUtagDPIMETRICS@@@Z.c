/*
 * XREFs of ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x1C009A43C
 * Callers:
 *     CleanupGDI @ 0x1C006398C (CleanupGDI.c)
 * Callees:
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C0063C84 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 */

void __fastcall DestroyAllDPIMETRICSFonts(HBRUSH *a1)
{
  DestroyFont(a1 + 4);
  DestroyFont(a1);
  DestroyFont(a1 + 6);
  DestroyFont(a1 + 7);
  DestroyFont(a1 + 8);
}
