/*
 * XREFs of PopResetCurrentPolicies @ 0x1405B8D04
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 *     PopEnableHiberFile @ 0x1405AD8E0 (PopEnableHiberFile.c)
 *     PdcPoReportButton @ 0x1405B84C0 (PdcPoReportButton.c)
 *     PopCreateHiberFile @ 0x1406FB4BC (PopCreateHiberFile.c)
 *     PopBatteryAdd @ 0x1406FE010 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x1406FE840 (PopBatteryRemove.c)
 *     PopBatteryUpdateCompositeInformation @ 0x1406FEA9C (PopBatteryUpdateCompositeInformation.c)
 *     PopThermalZoneAdd @ 0x1407006D0 (PopThermalZoneAdd.c)
 *     PopThermalZoneRemove @ 0x140700820 (PopThermalZoneRemove.c)
 *     PopNotifyPolicyDevice @ 0x140706F40 (PopNotifyPolicyDevice.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x14013A270 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopApplyPolicy @ 0x1405B9210 (PopApplyPolicy.c)
 *     PopDefaultPolicy @ 0x1405F0898 (PopDefaultPolicy.c)
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
