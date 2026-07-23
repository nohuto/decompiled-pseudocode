/*
 * XREFs of RtlDowncaseUnicodeString @ 0x180078190
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 */

NTSTATUS __cdecl RtlDowncaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  USHORT Length; // ax
  unsigned int v6; // ebx
  WCHAR *v7; // rax
  __int64 v8; // r11
  WCHAR v9; // r8

  Length = SourceString->Length;
  v6 = 0;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = Length;
    v7 = (WCHAR *)sub_18003B5E0(Length);
    DestinationString->Buffer = v7;
    if ( !v7 )
      return -1073741801;
    Length = SourceString->Length;
  }
  else if ( Length > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v8 = qword_18015B228;
  while ( v6 < Length >> 1 )
  {
    v9 = SourceString->Buffer[v6];
    if ( v9 >= 0x41u )
    {
      if ( v9 <= 0x5Au )
        v9 += 32;
      else
        v9 += *(_WORD *)(v8
                       + 2LL
                       * ((v9 & 0xF)
                        + (unsigned int)*(unsigned __int16 *)(v8
                                                            + 2LL
                                                            * (((v9 >> 4) & 0xF)
                                                             + (unsigned int)*(unsigned __int16 *)(v8 + 2LL * HIBYTE(v9))))));
    }
    DestinationString->Buffer[v6++] = v9;
  }
  DestinationString->Length = SourceString->Length;
  return 0;
}
