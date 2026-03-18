/*
 * XREFs of PnpConcatenateUnicodeStrings @ 0x1405F5438
 * Callers:
 *     IoGetDeviceInstanceName @ 0x14015F4A0 (IoGetDeviceInstanceName.c)
 *     PiDeviceRegistration @ 0x1405CC58C (PiDeviceRegistration.c)
 *     IoGetDeviceDirectory @ 0x140724670 (IoGetDeviceDirectory.c)
 *     PiCreateDirectoryPath @ 0x14072497C (PiCreateDirectoryPath.c)
 *     PiCreateRegistryPath @ 0x140724DC8 (PiCreateRegistryPath.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140726F40 (PipServiceInstanceToDeviceInstance.c)
 *     PiInitializeDevice @ 0x14073B304 (PiInitializeDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140106C50 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x1405F5268 (IopAllocateUnicodeString.c)
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
