/*
 * XREFs of ExpAllocateStringRoutine @ 0x1404C1D30
 * Callers:
 *     PnpDuplicateUnicodeString @ 0x14014FD00 (PnpDuplicateUnicodeString.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14025F0DC (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlUnicodeStringToOemString @ 0x140433750 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x140433810 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x140433900 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x140433B50 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlDowncaseUnicodeString @ 0x14043C330 (RtlDowncaseUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x1404971A0 (RtlUpcaseUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1404C0410 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404C0A50 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404C1180 (RtlUnicodeStringToAnsiString.c)
 *     RtlDuplicateUnicodeString @ 0x1404C17D0 (RtlDuplicateUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x1404C1BA0 (RtlStringFromGUIDEx.c)
 *     RtlCreateUnicodeString @ 0x1404C1CA0 (RtlCreateUnicodeString.c)
 *     CmpInitCmRM @ 0x14054D650 (CmpInitCmRM.c)
 *     CmpQueryNameString @ 0x14054DFB4 (CmpQueryNameString.c)
 *     RtlpQueryRegistryDirect @ 0x140556DEC (RtlpQueryRegistryDirect.c)
 *     RtlOemStringToUnicodeString @ 0x140573F70 (RtlOemStringToUnicodeString.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x1405902EC (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgBuildIndirectString @ 0x14059187C (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140591DE0 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x140593720 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDrvDbCreateNode @ 0x14059E128 (PiDrvDbCreateNode.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405C7908 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgAppendMultiSz @ 0x140698BEC (PiDevCfgAppendMultiSz.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406AA480 (PiCreateDriverSwDeviceCallback.c)
 *     RtlOemStringToCountedUnicodeString @ 0x1406E5750 (RtlOemStringToCountedUnicodeString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1406E59E0 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1406EA6A0 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall ExpAllocateStringRoutine(SIZE_T a1)
{
  return ExAllocatePoolWithTag(PagedPool, a1, 0x67727453u);
}
