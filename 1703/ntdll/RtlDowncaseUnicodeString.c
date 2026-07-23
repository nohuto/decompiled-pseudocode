/*
 * XREFs of RtlDowncaseUnicodeString @ 0x18007DB80
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 */

NTSTATUS __cdecl RtlDowncaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned int v5; // ebx
  unsigned int Length; // eax
  WCHAR *v7; // rax
  unsigned int v8; // r9d
  __int64 v9; // r11
  WCHAR v10; // r8
  WCHAR v11; // cx

  v5 = 0;
  if ( AllocateDestinationString )
  {
    Length = SourceString->Length;
    DestinationString->MaximumLength = Length;
    v7 = (WCHAR *)sub_180043FE0(Length);
    DestinationString->Buffer = v7;
    if ( !v7 )
      return -1073741801;
  }
  else if ( SourceString->Length > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v8 = SourceString->Length >> 1;
  v9 = qword_18015A1E8;
  while ( v5 < v8 )
  {
    v10 = SourceString->Buffer[v5];
    if ( v10 < 0x41u )
    {
      v11 = SourceString->Buffer[v5];
    }
    else if ( v10 <= 0x5Au )
    {
      v11 = v10 + 32;
    }
    else
    {
      v11 = v10
          + *(_WORD *)(v9
                     + 2
                     * ((v10 & 0xF)
                      + (unsigned __int64)*(unsigned __int16 *)(v9
                                                              + 2LL
                                                              * (((unsigned __int8)v10 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(v9 + 2LL * HIBYTE(v10))))));
    }
    DestinationString->Buffer[v5++] = v11;
  }
  DestinationString->Length = SourceString->Length;
  return 0;
}
