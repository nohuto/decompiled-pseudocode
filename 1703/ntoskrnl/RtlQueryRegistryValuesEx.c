/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x1405563F0
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140122760 (RtlCheckPortableOperatingSystem.c)
 *     RtlpFindRegTziForCurrentYear @ 0x140154D60 (RtlpFindRegTziForCurrentYear.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1402567B0 (EtwpGetAutoLoggerEventNameFilter.c)
 *     CmIsLastKnownGoodBoot @ 0x14080CDF0 (CmIsLastKnownGoodBoot.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1408137A4 (IopInitCrashDumpDuringSysInit.c)
 *     SmQueryRegistry @ 0x14081FB34 (SmQueryRegistry.c)
 *     EtwpReadConfigParameters @ 0x140823B7C (EtwpReadConfigParameters.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x14055642C (RtlpQueryRegistryValues.c)
 */

NTSTATUS __cdecl RtlQueryRegistryValuesEx(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return RtlpQueryRegistryValues(RelativeTo, Path, QueryTable);
}
