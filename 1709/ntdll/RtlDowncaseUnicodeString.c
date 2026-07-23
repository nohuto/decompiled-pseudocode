/*
 * XREFs of RtlDowncaseUnicodeString @ 0x1800799A0
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180031338 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x18004FA20 (NtdllpFreeStringRoutine.c)
 */

NTSTATUS __cdecl RtlDowncaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned int v5; // ebx
  unsigned int v6; // r9d
  __int64 v7; // r11
  wchar_t v8; // r8
  unsigned int Length; // eax
  wchar_t *StringRoutine; // rax

  v5 = 0;
  if ( AllocateDestinationString )
  {
    Length = SourceString->Length;
    DestinationString->MaximumLength = Length;
    StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(Length);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else if ( SourceString->Length > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v6 = SourceString->Length >> 1;
  v7 = Nls844UnicodeLowercaseTable;
  while ( v5 < v6 )
  {
    v8 = SourceString->Buffer[v5];
    if ( v8 >= 0x41u )
    {
      if ( v8 <= 0x5Au )
        v8 += 32;
      else
        v8 += *(_WORD *)(v7
                       + 2LL
                       * ((v8 & 0xF)
                        + (unsigned int)*(unsigned __int16 *)(v7
                                                            + 2LL
                                                            * (((v8 >> 4) & 0xF)
                                                             + (unsigned int)*(unsigned __int16 *)(v7 + 2LL * HIBYTE(v8))))));
    }
    DestinationString->Buffer[v5++] = v8;
  }
  DestinationString->Length = SourceString->Length;
  return 0;
}
