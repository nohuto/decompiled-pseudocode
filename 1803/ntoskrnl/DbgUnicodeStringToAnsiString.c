/*
 * XREFs of DbgUnicodeStringToAnsiString @ 0x1401612B4
 * Callers:
 *     DbgUnLoadImageSymbolsUnicode @ 0x140160C04 (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgLoadImageSymbolsUnicode @ 0x14016120C (DbgLoadImageSymbolsUnicode.c)
 *     MiLoadUserSymbols @ 0x140652AFC (MiLoadUserSymbols.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlUnicodeStringToAnsiString @ 0x140518490 (RtlUnicodeStringToAnsiString.c)
 *     RtlxUnicodeStringToOemSize @ 0x1407817D0 (RtlxUnicodeStringToOemSize.c)
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
