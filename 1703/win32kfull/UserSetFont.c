/*
 * XREFs of UserSetFont @ 0x1C000C590
 * Callers:
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1C000B83C (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     xxxSetNCFonts @ 0x1C000BBE4 (xxxSetNCFonts.c)
 * Callees:
 *     CreateFontFromWinIni @ 0x1C000C5F8 (CreateFontFromWinIni.c)
 *     GreMarkDeletableFont @ 0x1C000C828 (GreMarkDeletableFont.c)
 */

__int64 __fastcall UserSetFont(__int64 a1, __int64 a2, __int64 a3, struct HLFONT__ **a4)
{
  __int64 result; // rax
  struct HLFONT__ *v6; // rdi

  result = CreateFontFromWinIni();
  v6 = (struct HLFONT__ *)result;
  if ( result )
  {
    if ( *a4
      && *a4 != *(struct HLFONT__ **)(GetSessionSystemDpiServerInfo() + 48)
      && *a4 != *(struct HLFONT__ **)(Get96DpiServerInfo() + 48) )
    {
      GreMarkDeletableFont(*a4);
      GreDeleteObject(*a4);
    }
    *a4 = v6;
    return 1LL;
  }
  return result;
}
