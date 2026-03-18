/*
 * XREFs of DbgLoadImageSymbolsUnicode @ 0x14016120C
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1405FA544 (MiDriverLoadSucceeded.c)
 *     MiReloadBootLoadedDrivers @ 0x1408AD7F4 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     DbgLoadImageSymbols @ 0x140161260 (DbgLoadImageSymbols.c)
 *     DbgUnicodeStringToAnsiString @ 0x1401612B4 (DbgUnicodeStringToAnsiString.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
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
