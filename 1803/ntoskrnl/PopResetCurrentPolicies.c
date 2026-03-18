/*
 * XREFs of PopResetCurrentPolicies @ 0x14062625C
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 *     PopEnableHiberFile @ 0x140624E34 (PopEnableHiberFile.c)
 *     PopCreateHiberFile @ 0x140625404 (PopCreateHiberFile.c)
 *     PdcPoReportButton @ 0x140625B10 (PdcPoReportButton.c)
 *     PopNotifyPolicyDevice @ 0x140626B50 (PopNotifyPolicyDevice.c)
 *     PopThermalZoneAdd @ 0x140626F60 (PopThermalZoneAdd.c)
 *     PopThermalZoneRemove @ 0x140763260 (PopThermalZoneRemove.c)
 *     PopBatteryAdd @ 0x140763890 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x1407640B0 (PopBatteryRemove.c)
 *     PopBatteryUpdateCompositeInformation @ 0x14076430C (PopBatteryUpdateCompositeInformation.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x14016EC0C (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopApplyPolicy @ 0x140626324 (PopApplyPolicy.c)
 *     PopDefaultPolicy @ 0x140653A24 (PopDefaultPolicy.c)
 */

__int64 PopResetCurrentPolicies()
{
  __int64 result; // rax
  NTSTATUS v1; // ebx
  __int64 v2; // r9
  ULONG ResultLength; // [rsp+30h] [rbp-138h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-130h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-128h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+50h] [rbp-118h] BYREF

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
