/*
 * XREFs of _PnpIsValidGuidString @ 0x14050A93C
 * Callers:
 *     _CmValidateInstallerClassName @ 0x1404930D8 (_CmValidateInstallerClassName.c)
 *     _CmValidateDeviceContainerName @ 0x140586F0C (_CmValidateDeviceContainerName.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x140637840 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x140508E70 (RtlGUIDFromString.c)
 */

bool __fastcall PnpIsValidGuidString(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  GUID Guid; // [rsp+30h] [rbp-28h] BYREF

  return RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
      && (DestinationString.MaximumLength & 0xFFFE) == 0x4E
      && RtlGUIDFromString(&DestinationString, &Guid) >= 0;
}
