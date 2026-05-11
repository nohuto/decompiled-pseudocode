/*
 * XREFs of USBHwAllocateAndBag @ 0x1C001FC9C
 * Callers:
 *     USBHwSelectAudioConfiguration @ 0x1C002037C (USBHwSelectAudioConfiguration.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C0020EBC (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C0021B90 (USBParseGetMicArrayDescriptor.c)
 *     USBParseGetUnitString @ 0x1C0022420 (USBParseGetUnitString.c)
 *     USBParseMixerUnit @ 0x1C0022720 (USBParseMixerUnit.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x1C002306C (USBParseGetMIDIJackStringFromDeviceID.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C0023EA0 (USBParseGetMIDIStreamingDatarange.c)
 *     USBType1AsyncEndpointInitialize @ 0x1C0024D54 (USBType1AsyncEndpointInitialize.c)
 *     USBType1Create1MsecBuffers @ 0x1C00252C0 (USBType1Create1MsecBuffers.c)
 *     USBMidiInPipePrimer @ 0x1C0026068 (USBMidiInPipePrimer.c)
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
