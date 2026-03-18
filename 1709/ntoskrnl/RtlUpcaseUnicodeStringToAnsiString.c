/*
 * XREFs of RtlUpcaseUnicodeStringToAnsiString @ 0x14071DEF0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePool @ 0x1402B3E80 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1404DF9E0 (ExpAllocateStringRoutine.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x14056AAA0 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlxUnicodeStringToOemSize @ 0x14071E040 (RtlxUnicodeStringToOemSize.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeStringToAnsiString(
        PANSI_STRING AnsiDest,
        PCUNICODE_STRING UniSource,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  char *StringRoutine; // rax
  int v9; // edi
  ULONG BytesInMultiByteString; // [rsp+78h] [rbp+20h] BYREF

  if ( (_BYTE)NlsMbCodePageTag )
    v6 = RtlxUnicodeStringToOemSize(UniSource);
  else
    v6 = ((unsigned int)UniSource->Length + 2) >> 1;
  if ( v6 > 0xFFFF )
    return -1073741584;
  AnsiDest->Length = v6 - 1;
  if ( AllocateDestinationString )
  {
    AnsiDest->MaximumLength = v6;
    StringRoutine = (char *)ExpAllocateStringRoutine(v6);
    AnsiDest->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else if ( (unsigned __int16)(v6 - 1) >= AnsiDest->MaximumLength )
  {
    return -2147483643;
  }
  v9 = RtlUpcaseUnicodeToMultiByteN(
         AnsiDest->Buffer,
         AnsiDest->Length,
         &BytesInMultiByteString,
         UniSource->Buffer,
         UniSource->Length);
  if ( v9 >= 0 )
  {
    AnsiDest->Buffer[BytesInMultiByteString] = 0;
    v9 = 0;
  }
  if ( v9 < 0 )
  {
    if ( AllocateDestinationString )
    {
      ExFreePool(AnsiDest->Buffer);
      AnsiDest->Buffer = 0LL;
    }
  }
  return v9;
}
