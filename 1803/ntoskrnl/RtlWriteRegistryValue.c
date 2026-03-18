/*
 * XREFs of RtlWriteRegistryValue @ 0x140579A30
 * Callers:
 *     RtlSetPortableOperatingSystem @ 0x1402892B0 (RtlSetPortableOperatingSystem.c)
 *     WmipSecurityMethod @ 0x14055D0F0 (WmipSecurityMethod.c)
 *     EtwpEnableKeyProviders @ 0x14062A460 (EtwpEnableKeyProviders.c)
 *     EtwpEnableAutoLoggerProviders @ 0x14062A638 (EtwpEnableAutoLoggerProviders.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1406300CC (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x1406302F4 (RtlSetActiveTimeBias.c)
 *     EtwpInitializeAutoLoggers @ 0x14063DCC0 (EtwpInitializeAutoLoggers.c)
 *     EtwStartAutoLogger @ 0x14063DF10 (EtwStartAutoLogger.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x14078689C (RtlpSetTimeZoneInformationWorker.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1407A115C (PerfDiagpSaveActiveDCLLogFileName.c)
 *     WheapCommitPolicy @ 0x1407CB22C (WheapCommitPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 *     RtlpGetRegistryHandle @ 0x140506008 (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlWriteRegistryValue(
        ULONG RelativeTo,
        PCWSTR Path,
        PCWSTR ValueName,
        ULONG ValueType,
        PVOID ValueData,
        ULONG ValueLength)
{
  NTSTATUS result; // eax
  NTSTATUS v10; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  result = RtlpGetRegistryHandle(RelativeTo, Path, 1, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, ValueName);
    v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, ValueType & 0xFFFFFF, ValueData, ValueLength);
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(KeyHandle);
    return v10;
  }
  return result;
}
