/*
 * XREFs of RtlUpcaseUnicodeString @ 0x180040B10
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x1800380F0 (RtlDeriveCapabilitySidsFromName.c)
 *     sub_180040650 @ 0x180040650 (sub_180040650.c)
 *     RtlCreateServiceSid @ 0x1800445F0 (RtlCreateServiceSid.c)
 *     RtlCreateVirtualAccountSid @ 0x180049350 (RtlCreateVirtualAccountSid.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  USHORT Length; // ax
  unsigned int v6; // ebx
  __int64 v7; // r11
  WCHAR v8; // r8
  WCHAR *v10; // rax

  Length = SourceString->Length;
  v6 = 0;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = Length;
    v10 = (WCHAR *)sub_18003B5E0(Length);
    DestinationString->Buffer = v10;
    if ( !v10 )
      return -1073741801;
    Length = SourceString->Length;
  }
  else if ( Length > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v7 = qword_18015B238;
  while ( v6 < Length >> 1 )
  {
    v8 = SourceString->Buffer[v6];
    if ( v8 >= 0x61u )
    {
      if ( v8 <= 0x7Au )
        v8 -= 32;
      else
        v8 += *(_WORD *)(v7
                       + 2LL
                       * ((v8 & 0xF)
                        + (unsigned int)*(unsigned __int16 *)(v7
                                                            + 2LL
                                                            * (((v8 >> 4) & 0xF)
                                                             + (unsigned int)*(unsigned __int16 *)(v7 + 2LL * HIBYTE(v8))))));
    }
    DestinationString->Buffer[v6++] = v8;
  }
  DestinationString->Length = SourceString->Length;
  return 0;
}
