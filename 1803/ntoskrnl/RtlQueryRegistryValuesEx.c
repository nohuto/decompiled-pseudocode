/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x14057ECE0
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x1400CE5D0 (RtlCheckPortableOperatingSystem.c)
 *     RtlpFindRegTziForCurrentYear @ 0x140177404 (RtlpFindRegTziForCurrentYear.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x14017EEF0 (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpReadPerSiloConfigParameters @ 0x14017F110 (EtwpReadPerSiloConfigParameters.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1402B2230 (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1402B25C0 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1408989C8 (IopInitCrashDumpDuringSysInit.c)
 *     SmQueryRegistry @ 0x1408C1720 (SmQueryRegistry.c)
 *     CmIsLastKnownGoodBoot @ 0x1408C56A4 (CmIsLastKnownGoodBoot.c)
 *     EtwpReadConfigParameters @ 0x1408C742C (EtwpReadConfigParameters.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x140502B1C (RtlpQueryRegistryValues.c)
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
