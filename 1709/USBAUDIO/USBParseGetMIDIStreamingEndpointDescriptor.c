/*
 * XREFs of USBParseGetMIDIStreamingEndpointDescriptor @ 0x1C001D708
 * Callers:
 *     USBParseGetMIDIStreamingDatarange @ 0x1C001F358 (USBParseGetMIDIStreamingDatarange.c)
 *     USBMidiInPipePrimer @ 0x1C0021534 (USBMidiInPipePrimer.c)
 * Callees:
 *     USBParseFindDescriptorInConfiguration @ 0x1C001CC1C (USBParseFindDescriptorInConfiguration.c)
 */

PUSB_COMMON_DESCRIPTOR __fastcall USBParseGetMIDIStreamingEndpointDescriptor(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned int a3)
{
  unsigned __int8 *v4; // rdi
  unsigned __int8 *v7; // r10
  PUSB_COMMON_DESCRIPTOR DescriptorInConfiguration; // rbx
  __int64 v10; // rcx
  bool v11; // cf
  PUSB_COMMON_DESCRIPTOR v12; // rax

  v4 = *(unsigned __int8 **)(a2 + 24);
  v7 = *(unsigned __int8 **)(*(_QWORD *)(a2 + 48) + 8LL * a3);
  DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(a1, (char *)&v7[*v7], 37, 4uLL);
  if ( !DescriptorInConfiguration )
    return 0LL;
  v10 = a3 + 1;
  if ( (unsigned int)v10 >= v4[4] )
  {
    v12 = USBParseFindDescriptorInConfiguration(a1, (char *)&v4[*v4], 4, 9uLL);
    if ( !v12 )
      return DescriptorInConfiguration;
    v11 = DescriptorInConfiguration < v12;
  }
  else
  {
    v11 = (unsigned __int64)DescriptorInConfiguration < *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v10);
  }
  if ( !v11 )
    return 0LL;
  return DescriptorInConfiguration;
}
