/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x18002E7D0
 * Callers:
 *     LdrpGetModuleName @ 0x1800170B8 (LdrpGetModuleName.c)
 * Callees:
 *     RtlUnicodeToMultiByteN @ 0x18002E8B0 (RtlUnicodeToMultiByteN.c)
 *     NtdllpAllocateStringRoutine @ 0x180031338 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x18004FA20 (NtdllpFreeStringRoutine.c)
 *     RtlxUnicodeStringToOemSize @ 0x1800E9110 (RtlxUnicodeStringToOemSize.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS v6; // esi
  unsigned int v7; // eax
  unsigned __int16 v8; // cx
  char *StringRoutine; // rax
  int v10; // edi
  bool v11; // sf
  unsigned __int16 MaximumLength; // ax
  ULONG BytesInMultiByteString; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  if ( NlsMbCodePageTag )
    v7 = RtlxUnicodeStringToOemSize(SourceString);
  else
    v7 = ((unsigned int)SourceString->Length + 2) >> 1;
  if ( v7 > 0xFFFF )
    return -1073741584;
  v8 = v7 - 1;
  DestinationString->Length = v7 - 1;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v7;
    StringRoutine = (char *)NtdllpAllocateStringRoutine(v7);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( v8 >= MaximumLength )
    {
      if ( !MaximumLength )
        return -2147483643;
      v6 = -2147483643;
      DestinationString->Length = MaximumLength - 1;
    }
  }
  v10 = RtlUnicodeToMultiByteN(
          DestinationString->Buffer,
          DestinationString->Length,
          &BytesInMultiByteString,
          SourceString->Buffer,
          SourceString->Length);
  if ( v10 >= 0 )
    DestinationString->Buffer[BytesInMultiByteString] = 0;
  v11 = v10 < 0;
  if ( v10 < 0 )
  {
    if ( AllocateDestinationString )
    {
      NtdllpFreeStringRoutine(DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
    }
    v11 = v10 < 0;
  }
  if ( !v11 )
    return v6;
  return v10;
}
