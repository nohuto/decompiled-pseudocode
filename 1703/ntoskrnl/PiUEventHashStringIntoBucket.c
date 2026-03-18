/*
 * XREFs of PiUEventHashStringIntoBucket @ 0x14003DC1C
 * Callers:
 *     PiUEventNotifyDeviceInstanceChange @ 0x140464EF4 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventHandleRegistration @ 0x1404A4F10 (PiUEventHandleRegistration.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1404A6744 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x1405D8300 (PiUEventNotifyDeviceInstancePropertyChange.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     RtlHashUnicodeString @ 0x1404E5D70 (RtlHashUnicodeString.c)
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
