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

__int64 __fastcall RtlQueryRegistryValuesEx(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4)
{
  return RtlpQueryRegistryValues(a1, a2, a3, a4);
}
