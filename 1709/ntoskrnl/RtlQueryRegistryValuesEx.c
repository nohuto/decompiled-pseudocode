/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x140590C10
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x14012AD80 (RtlCheckPortableOperatingSystem.c)
 *     RtlpFindRegTziForCurrentYear @ 0x140145678 (RtlpFindRegTziForCurrentYear.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x140152640 (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpReadPerSiloConfigParameters @ 0x140152860 (EtwpReadPerSiloConfigParameters.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x14027F384 (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x14027F714 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     IopInitCrashDumpDuringSysInit @ 0x14084DBF4 (IopInitCrashDumpDuringSysInit.c)
 *     SmQueryRegistry @ 0x140850394 (SmQueryRegistry.c)
 *     CmIsLastKnownGoodBoot @ 0x1408537F0 (CmIsLastKnownGoodBoot.c)
 *     EtwpReadConfigParameters @ 0x140855378 (EtwpReadConfigParameters.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x140520470 (RtlpQueryRegistryValues.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlQueryRegistryValuesEx(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return RtlpQueryRegistryValues(*(__int64 *)&RelativeTo, Path, (__int64)QueryTable, (__int64)Context);
}
