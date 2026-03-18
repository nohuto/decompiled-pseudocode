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

__int64 __fastcall RtlQueryRegistryValuesEx(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4)
{
  return RtlpQueryRegistryValues(a1, a2, a3, a4);
}
