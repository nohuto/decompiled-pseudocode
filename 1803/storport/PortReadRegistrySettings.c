/*
 * XREFs of PortReadRegistrySettings @ 0x1C0067EA8
 * Callers:
 *     PortGetRegistrySettings @ 0x1C0067D44 (PortGetRegistrySettings.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     PortpReadMaximumLogicalUnitEntry @ 0x1C006836C (PortpReadMaximumLogicalUnitEntry.c)
 *     PortpReadMaximumUCXAddressEntry @ 0x1C0068400 (PortpReadMaximumUCXAddressEntry.c)
 *     PortpReadMinimumUCXAddressEntry @ 0x1C0068498 (PortpReadMinimumUCXAddressEntry.c)
 *     PortpReadNumberOfRequestsEntry @ 0x1C0068538 (PortpReadNumberOfRequestsEntry.c)
 *     PortpReadUncachedExtAlignmentEntry @ 0x1C00685D8 (PortpReadUncachedExtAlignmentEntry.c)
 */

__int64 __fastcall PortReadRegistrySettings(HANDLE KeyHandle)
{
  _BYTE KeyValueInformation[512]; // [rsp+20h] [rbp-218h] BYREF

  PortpReadMaximumLogicalUnitEntry(KeyHandle, KeyValueInformation);
  PortpReadMaximumUCXAddressEntry(KeyHandle, KeyValueInformation);
  PortpReadMinimumUCXAddressEntry(KeyHandle, KeyValueInformation);
  PortpReadNumberOfRequestsEntry(KeyHandle, KeyValueInformation);
  return PortpReadUncachedExtAlignmentEntry(KeyHandle, KeyValueInformation);
}
