/*
 * XREFs of PnpConcatenateUnicodeStrings @ 0x140581138
 * Callers:
 *     IoGetDeviceInstanceName @ 0x1401477FC (IoGetDeviceInstanceName.c)
 *     PiDeviceRegistration @ 0x1404D9C6C (PiDeviceRegistration.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1406954A0 (PipServiceInstanceToDeviceInstance.c)
 *     PiInitializeDevice @ 0x1406A8758 (PiInitializeDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1400F1110 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x1404E48CC (IopAllocateUnicodeString.c)
 */

__int64 __fastcall PnpConcatenateUnicodeStrings(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  __int64 result; // rax

  result = IopAllocateUnicodeString((__int64)DestinationString, SourceString->Length);
  if ( (int)result >= 0 )
  {
    RtlCopyUnicodeString(DestinationString, SourceString);
    return 0LL;
  }
  return result;
}
