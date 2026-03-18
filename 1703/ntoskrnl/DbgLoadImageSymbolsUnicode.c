/*
 * XREFs of DbgLoadImageSymbolsUnicode @ 0x14007009C
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1404B317C (MiDriverLoadSucceeded.c)
 *     MiReloadBootLoadedDrivers @ 0x140815898 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     DbgUnicodeStringToAnsiString @ 0x14006FCD0 (DbgUnicodeStringToAnsiString.c)
 *     DbgLoadImageSymbols @ 0x1400700F0 (DbgLoadImageSymbols.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
