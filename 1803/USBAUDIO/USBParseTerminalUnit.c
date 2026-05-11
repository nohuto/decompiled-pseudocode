/*
 * XREFs of USBParseTerminalUnit @ 0x1C00225D0
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildTerminalFunctionUnit @ 0x1C001EB50 (BusApiBuildTerminalFunctionUnit.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C0021B90 (USBParseGetMicArrayDescriptor.c)
 *     USBParseGetPinIndexForStreamingTerminal @ 0x1C0022040 (USBParseGetPinIndexForStreamingTerminal.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C00222D8 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C002237C (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetUnitString @ 0x1C0022420 (USBParseGetUnitString.c)
 */

__int64 __fastcall USBParseTerminalUnit(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int MicArrayDescriptor; // edx
  int PinIndexForStreamingTerminal; // r14d
  __int64 v7; // r15
  unsigned int v8; // r12d
  unsigned __int16 v9; // ax
  int v10; // ebx
  int ChannelConfigForUnit; // edi
  int v12; // eax
  int v14; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+10h] BYREF
  const WCHAR *v16; // [rsp+B0h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  MicArrayDescriptor = 0;
  PinIndexForStreamingTerminal = -1;
  v16 = 0LL;
  v15 = 0LL;
  v7 = *(_QWORD *)(v2 + 72);
  if ( *(_BYTE *)(a2 + 2) != 2 )
  {
    v8 = 1;
    v14 = *(unsigned __int8 *)(a2 + 7);
    goto LABEL_6;
  }
  v8 = 0;
  v14 = -1;
  if ( *(_WORD *)(a2 + 4) == 517 )
  {
    MicArrayDescriptor = USBParseGetMicArrayDescriptor(a1, a2, &v15);
    if ( MicArrayDescriptor == -1073741275 )
      MicArrayDescriptor = 0;
LABEL_6:
    if ( MicArrayDescriptor < 0 )
      return (unsigned int)MicArrayDescriptor;
  }
  MicArrayDescriptor = USBParseGetUnitString(a1, (unsigned __int8 *)a2, &v16);
  if ( MicArrayDescriptor >= 0 )
  {
    v9 = *(_WORD *)(a2 + 4);
    if ( v9 == 257 )
    {
      PinIndexForStreamingTerminal = USBParseGetPinIndexForStreamingTerminal(v7, (unsigned __int8 *)a2, 0);
      v9 = *(_WORD *)(a2 + 4);
    }
    v10 = v9;
    ChannelConfigForUnit = USBParseGetChannelConfigForUnit(
                             *(unsigned __int16 **)(v7 + 40),
                             *(char **)(v7 + 48),
                             *(unsigned __int8 *)(a2 + 3));
    v12 = USBParseCountOutputChannelsForUnit(
            *(unsigned __int16 **)(v7 + 40),
            *(char **)(v7 + 48),
            *(unsigned __int8 *)(a2 + 3));
    return (unsigned int)BusApiBuildTerminalFunctionUnit(
                           a1,
                           *(unsigned __int8 *)(a2 + 3),
                           v8,
                           v12,
                           ChannelConfigForUnit,
                           v8,
                           &v14,
                           v16,
                           v15,
                           v10,
                           1,
                           PinIndexForStreamingTerminal);
  }
  return (unsigned int)MicArrayDescriptor;
}
