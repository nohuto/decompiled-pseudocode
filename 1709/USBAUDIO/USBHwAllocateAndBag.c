/*
 * XREFs of USBHwAllocateAndBag @ 0x1C001B7EC
 * Callers:
 *     USBHwSelectAudioConfiguration @ 0x1C001BE9C (USBHwSelectAudioConfiguration.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C001C338 (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C001D070 (USBParseGetMicArrayDescriptor.c)
 *     USBParseGetUnitString @ 0x1C001D8FC (USBParseGetUnitString.c)
 *     USBParseMixerUnit @ 0x1C001DC00 (USBParseMixerUnit.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x1C001E55C (USBParseGetMIDIJackStringFromDeviceID.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C001F358 (USBParseGetMIDIStreamingDatarange.c)
 *     USBType1AsyncEndpointInitialize @ 0x1C00201F4 (USBType1AsyncEndpointInitialize.c)
 *     USBType1Create1MsecBuffers @ 0x1C0020760 (USBType1Create1MsecBuffers.c)
 *     USBMidiInPipePrimer @ 0x1C0021534 (USBMidiInPipePrimer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall USBHwAllocateAndBag(PVOID *a1, void *a2)
{
  NTSTATUS v3; // ebx

  v3 = KsAddItemToObjectBag(a2, *a1, ExFreePool);
  if ( v3 < 0 )
    ExFreePool(*a1);
  return (unsigned int)v3;
}
