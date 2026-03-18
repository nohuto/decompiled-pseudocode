/*
 * XREFs of PnpSetRegistryDword @ 0x1405DFE2C
 * Callers:
 *     IoReportDetectedDevice @ 0x1405DF730 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x14017E4C0 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall PnpSetRegistryDword(HANDLE KeyHandle, const WCHAR *a2)
{
  int Data; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  Data = 1;
  RtlInitUnicodeString(&DestinationString, a2);
  return ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
}
