/*
 * XREFs of RtlUpcaseUnicodeString @ 0x18004A6F0
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x1800478B0 (RtlDeriveCapabilitySidsFromName.c)
 *     sub_18004A3B4 @ 0x18004A3B4 (sub_18004A3B4.c)
 *     RtlCreateServiceSid @ 0x18004D6F0 (RtlCreateServiceSid.c)
 *     RtlCreateVirtualAccountSid @ 0x180050760 (RtlCreateVirtualAccountSid.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned int v5; // ebx
  unsigned int v6; // r9d
  __int64 v7; // r11
  WCHAR v8; // r8
  WCHAR v9; // cx
  unsigned int Length; // eax
  WCHAR *v12; // rax

  v5 = 0;
  if ( AllocateDestinationString )
  {
    Length = SourceString->Length;
    DestinationString->MaximumLength = Length;
    v12 = (WCHAR *)sub_180043FE0(Length);
    DestinationString->Buffer = v12;
    if ( !v12 )
      return -1073741801;
  }
  else if ( SourceString->Length > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v6 = SourceString->Length >> 1;
  v7 = qword_180159D68;
  while ( v5 < v6 )
  {
    v8 = SourceString->Buffer[v5];
    if ( v8 < 0x61u )
    {
      v9 = SourceString->Buffer[v5];
    }
    else if ( v8 <= 0x7Au )
    {
      v9 = v8 - 32;
    }
    else
    {
      v9 = v8
         + *(_WORD *)(v7
                    + 2
                    * ((v8 & 0xF)
                     + (unsigned __int64)*(unsigned __int16 *)(v7
                                                             + 2LL
                                                             * (((unsigned __int8)v8 >> 4)
                                                              + (unsigned int)*(unsigned __int16 *)(v7 + 2LL * HIBYTE(v8))))));
    }
    DestinationString->Buffer[v5++] = v9;
  }
  DestinationString->Length = SourceString->Length;
  return 0;
}
