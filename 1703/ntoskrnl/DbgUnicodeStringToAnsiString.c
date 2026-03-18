/*
 * XREFs of DbgUnicodeStringToAnsiString @ 0x14006FCD0
 * Callers:
 *     DbgLoadImageSymbolsUnicode @ 0x14007009C (DbgLoadImageSymbolsUnicode.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x140148EB4 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiLoadUserSymbols @ 0x1405D4CB0 (MiLoadUserSymbols.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404C1180 (RtlUnicodeStringToAnsiString.c)
 *     RtlxUnicodeStringToOemSize @ 0x1406E5B30 (RtlxUnicodeStringToOemSize.c)
 */

__int64 __fastcall DbgUnicodeStringToAnsiString(PANSI_STRING DestinationString, PCUNICODE_STRING UnicodeString)
{
  ULONG v4; // r8d
  char *PoolWithTag; // rax

  if ( (_BYTE)NlsMbCodePageTag )
    v4 = RtlxUnicodeStringToOemSize(UnicodeString);
  else
    v4 = ((unsigned int)UnicodeString->Length + 2) >> 1;
  if ( v4 <= 0xFFFF )
  {
    DestinationString->MaximumLength = v4;
    DestinationString->Length = v4 - 1;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x644C6D4Du);
    DestinationString->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( RtlUnicodeStringToAnsiString(DestinationString, UnicodeString, 0) >= 0 )
        return 1LL;
      ExFreePoolWithTag(DestinationString->Buffer, 0);
    }
  }
  return 0LL;
}
