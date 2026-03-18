/*
 * XREFs of PopResetCurrentPolicies @ 0x1405C3544
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 *     PopEnableHiberFile @ 0x1405A92A4 (PopEnableHiberFile.c)
 *     PdcPoReportButton @ 0x1405C2C10 (PdcPoReportButton.c)
 *     PopNotifyPolicyDevice @ 0x1405D6760 (PopNotifyPolicyDevice.c)
 *     PopThermalZoneAdd @ 0x1405D6970 (PopThermalZoneAdd.c)
 *     PopCreateHiberFile @ 0x1405D7378 (PopCreateHiberFile.c)
 *     PopBatteryAdd @ 0x1406CA1F0 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x1406CAA10 (PopBatteryRemove.c)
 *     PopBatteryUpdateCompositeInformation @ 0x1406CABEC (PopBatteryUpdateCompositeInformation.c)
 *     PopThermalZoneRemove @ 0x1406CBDD0 (PopThermalZoneRemove.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x14014CFA8 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14017E220 (ZwQueryValueKey.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PopApplyPolicy @ 0x1405C3850 (PopApplyPolicy.c)
 *     PopDefaultPolicy @ 0x1405D4578 (PopDefaultPolicy.c)
 */

__int64 PopResetCurrentPolicies()
{
  __int64 result; // rax
  NTSTATUS v1; // ebx
  __int64 v2; // r9
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+50h] [rbp-B0h] BYREF

  memset(KeyValueInformation, 0, 0xF8uLL);
  result = PopOpenPowerKey((__int64)&KeyHandle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"SystemPowerPolicy");
    v1 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0xF8u,
           &ResultLength);
    if ( v1 < 0 )
    {
      PopDefaultPolicy(&KeyValueInformation[12]);
      v2 = 232LL;
    }
    else
    {
      v2 = ResultLength - 12;
    }
    ResultLength = v2;
    PopApplyPolicy(0LL, 0LL, &KeyValueInformation[12], v2);
    ZwClose(KeyHandle);
    return (unsigned int)v1;
  }
  return result;
}
