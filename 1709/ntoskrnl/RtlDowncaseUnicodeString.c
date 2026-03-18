/*
 * XREFs of RtlDowncaseUnicodeString @ 0x14056FC00
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePool @ 0x1402B3E80 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1404DF9E0 (ExpAllocateStringRoutine.c)
 */

NTSTATUS __stdcall RtlDowncaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned int v5; // ebx
  unsigned int v6; // r10d
  wchar_t v7; // r9
  unsigned int Length; // eax
  wchar_t *StringRoutine; // rax

  v5 = 0;
  if ( AllocateDestinationString )
  {
    Length = SourceString->Length;
    DestinationString->MaximumLength = Length;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(Length);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else if ( SourceString->Length > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v6 = SourceString->Length >> 1;
  while ( v5 < v6 )
  {
    v7 = SourceString->Buffer[v5];
    if ( v7 >= 0x41u )
    {
      if ( v7 <= 0x5Au )
        v7 += 32;
      else
        v7 += *(_WORD *)(Nls844UnicodeLowercaseTable
                       + 2LL
                       * ((v7 & 0xF)
                        + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeLowercaseTable
                                                            + 2LL
                                                            * (((v7 >> 4) & 0xF)
                                                             + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeLowercaseTable
                                                                                                 + 2
                                                                                                 * ((unsigned __int64)v7 >> 8))))));
    }
    DestinationString->Buffer[v5++] = v7;
  }
  DestinationString->Length = SourceString->Length;
  return 0;
}
