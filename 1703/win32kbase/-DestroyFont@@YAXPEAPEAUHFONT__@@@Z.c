/*
 * XREFs of ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C0078B10
 * Callers:
 *     CleanupGDI @ 0x1C00787E8 (CleanupGDI.c)
 *     ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x1C007B00C (-DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z.c)
 * Callees:
 *     GreDeleteObject @ 0x1C0041C00 (GreDeleteObject.c)
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
