/*
 * XREFs of ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C00A8D54
 * Callers:
 *     ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x1C00A8D10 (-DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z.c)
 *     CleanupGDI @ 0x1C00A9D70 (CleanupGDI.c)
 * Callees:
 *     GreDeleteObject @ 0x1C001E0C0 (GreDeleteObject.c)
 */

void __fastcall DestroyFont(HBRUSH *a1)
{
  HBRUSH v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    GreDeleteObject(v2);
    *a1 = 0LL;
  }
}
