/*
 * XREFs of xxxAddFontResourceW @ 0x1C003B590
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C000A1A0 (xxxLW_LoadFonts.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C003B5D0 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 * Callees:
 *     xxxClientAddFontResourceW @ 0x1C003B3C4 (xxxClientAddFontResourceW.c)
 */

__int64 __fastcall xxxAddFontResourceW(PCWSTR SourceString, unsigned int a2, __int64 a3)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  return xxxClientAddFontResourceW((char **)&DestinationString, a2, a3);
}
