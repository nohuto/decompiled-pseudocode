/*
 * XREFs of RtlWriteRegistryValue @ 0x140556350
 * Callers:
 *     RtlSetPortableOperatingSystem @ 0x14023DE90 (RtlSetPortableOperatingSystem.c)
 *     WmipSecurityMethod @ 0x1404575E0 (WmipSecurityMethod.c)
 *     EtwStartAutoLogger @ 0x140555730 (EtwStartAutoLogger.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140578618 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1405A5EB4 (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x1405A60DC (RtlSetActiveTimeBias.c)
 *     EtwpEnableKeyProviders @ 0x1405AE660 (EtwpEnableKeyProviders.c)
 *     EtwpEnableAutoLoggerProviders @ 0x1405AE838 (EtwpEnableAutoLoggerProviders.c)
 *     EtwpInitializeAutoLoggers @ 0x1405B059C (EtwpInitializeAutoLoggers.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1406EB080 (RtlpSetTimeZoneInformationWorker.c)
 *     WheapCommitPolicy @ 0x140723A84 (WheapCommitPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwSetValueKey @ 0x14017EB40 (ZwSetValueKey.c)
 *     RtlpGetRegistryHandle @ 0x140556BB8 (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlWriteRegistryValue(
        ULONG RelativeTo,
        PCWSTR Path,
        PCWSTR ValueName,
        ULONG ValueType,
        PVOID ValueData,
        ULONG ValueLength)
{
  const WCHAR *v7; // rsi
  NTSTATUS result; // eax
  NTSTATUS v10; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  v7 = ValueName;
  LOBYTE(ValueName) = 1;
  result = RtlpGetRegistryHandle(RelativeTo, Path, ValueName, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, v7);
    v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, ValueType & 0xFFFFFF, ValueData, ValueLength);
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(KeyHandle);
    return v10;
  }
  return result;
}
