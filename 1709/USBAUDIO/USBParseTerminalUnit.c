/*
 * XREFs of USBParseTerminalUnit @ 0x1C001DAB0
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildTerminalFunctionUnit @ 0x1C001A79C (BusApiBuildTerminalFunctionUnit.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C001D070 (USBParseGetMicArrayDescriptor.c)
 *     USBParseGetPinIndexForStreamingTerminal @ 0x1C001D520 (USBParseGetPinIndexForStreamingTerminal.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C001D7B4 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C001D858 (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetUnitString @ 0x1C001D8FC (USBParseGetUnitString.c)
 */

__int64 __fastcall USBParseTerminalUnit(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int MicArrayDescriptor; // edx
  int PinIndexForStreamingTerminal; // r14d
  __int64 v7; // r15
  unsigned int v8; // r12d
  int v9; // ebx
  int ChannelConfigForUnit; // edi
  int v11; // eax
  int v13; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+10h] BYREF
  const WCHAR *v15; // [rsp+B0h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  MicArrayDescriptor = 0;
  PinIndexForStreamingTerminal = -1;
  v15 = 0LL;
  v14 = 0LL;
  v7 = *(_QWORD *)(v2 + 72);
  if ( *(_BYTE *)(a2 + 2) != 2 )
  {
    v8 = 1;
    v13 = *(unsigned __int8 *)(a2 + 7);
    goto LABEL_6;
  }
  v8 = 0;
  v13 = -1;
  if ( *(_WORD *)(a2 + 4) == 517 )
  {
    MicArrayDescriptor = USBParseGetMicArrayDescriptor(a1, a2, &v14);
    if ( MicArrayDescriptor == -1073741275 )
      MicArrayDescriptor = 0;
LABEL_6:
    if ( MicArrayDescriptor < 0 )
      return (unsigned int)MicArrayDescriptor;
  }
  MicArrayDescriptor = USBParseGetUnitString(a1, (unsigned __int8 *)a2, &v15);
  if ( MicArrayDescriptor >= 0 )
  {
    if ( *(_WORD *)(a2 + 4) == 257 )
      PinIndexForStreamingTerminal = USBParseGetPinIndexForStreamingTerminal(v7, (unsigned __int8 *)a2, 0);
    v9 = *(unsigned __int16 *)(a2 + 4);
    ChannelConfigForUnit = USBParseGetChannelConfigForUnit(
                             *(unsigned __int16 **)(v7 + 40),
                             *(char **)(v7 + 48),
                             *(unsigned __int8 *)(a2 + 3));
    v11 = USBParseCountOutputChannelsForUnit(
            *(unsigned __int16 **)(v7 + 40),
            *(char **)(v7 + 48),
            *(unsigned __int8 *)(a2 + 3));
    return (unsigned int)BusApiBuildTerminalFunctionUnit(
                           a1,
                           *(unsigned __int8 *)(a2 + 3),
                           v8,
                           v11,
                           ChannelConfigForUnit,
                           v8,
                           &v13,
                           v15,
                           v14,
                           v9,
                           1,
                           PinIndexForStreamingTerminal);
  }
  return (unsigned int)MicArrayDescriptor;
}
