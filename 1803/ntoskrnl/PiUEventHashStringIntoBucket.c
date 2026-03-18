/*
 * XREFs of PiUEventHashStringIntoBucket @ 0x140075370
 * Callers:
 *     PiUEventNotifyTargetDeviceChange @ 0x14051F808 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventHandleRegistration @ 0x14058C23C (PiUEventHandleRegistration.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x1405E58A4 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140605498 (PiUEventNotifyDeviceInstancePropertyChange.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlHashUnicodeString @ 0x140507780 (RtlHashUnicodeString.c)
 */

__int64 __fastcall PiUEventHashStringIntoBucket(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  ULONG HashValue; // [rsp+48h] [rbp+10h] BYREF

  HashValue = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
  return HashValue % 0xD;
}
