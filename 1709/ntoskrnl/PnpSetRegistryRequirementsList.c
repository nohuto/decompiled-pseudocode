/*
 * XREFs of PnpSetRegistryRequirementsList @ 0x1406C13C4
 * Callers:
 *     IoReportDetectedDevice @ 0x1405DF730 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x14017E4C0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14017F2A0 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall PnpSetRegistryRequirementsList(HANDLE KeyHandle, __int64 a2, _DWORD *a3)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, L"BasicConfigVector");
  if ( a3 )
    return ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xAu, a3, *a3);
  else
    return ZwDeleteValueKey(KeyHandle, &DestinationString);
}
