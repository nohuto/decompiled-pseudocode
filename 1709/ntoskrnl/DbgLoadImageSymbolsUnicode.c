/*
 * XREFs of DbgLoadImageSymbolsUnicode @ 0x1400F9718
 * Callers:
 *     MiDriverLoadSucceeded @ 0x140543B6C (MiDriverLoadSucceeded.c)
 *     MiReloadBootLoadedDrivers @ 0x140837458 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     DbgLoadImageSymbols @ 0x1400F9770 (DbgLoadImageSymbols.c)
 *     DbgUnicodeStringToAnsiString @ 0x1400F97C4 (DbgUnicodeStringToAnsiString.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgLoadImageSymbolsUnicode(PCUNICODE_STRING UnicodeString, PVOID Base)
{
  STRING Name; // [rsp+20h] [rbp-18h] BYREF

  if ( !(unsigned int)DbgUnicodeStringToAnsiString(&Name, UnicodeString) )
    return 0LL;
  DbgLoadImageSymbols(&Name, Base, 0xFFFFFFFFFFFFFFFFuLL);
  ExFreePoolWithTag(Name.Buffer, 0);
  return 1LL;
}
