/*
 * XREFs of DbgUnicodeStringToAnsiString @ 0x1400F97C4
 * Callers:
 *     DbgUnLoadImageSymbolsUnicode @ 0x1400F96A8 (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgLoadImageSymbolsUnicode @ 0x1400F9718 (DbgLoadImageSymbolsUnicode.c)
 *     MiLoadUserSymbols @ 0x1405EF47C (MiLoadUserSymbols.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404DF110 (RtlUnicodeStringToAnsiString.c)
 *     RtlxUnicodeStringToOemSize @ 0x14071E040 (RtlxUnicodeStringToOemSize.c)
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
