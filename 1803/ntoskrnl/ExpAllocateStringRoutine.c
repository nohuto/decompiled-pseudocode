/*
 * XREFs of ExpAllocateStringRoutine @ 0x140518FA0
 * Callers:
 *     PnpDuplicateUnicodeString @ 0x140147994 (PnpDuplicateUnicodeString.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1402BE134 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x140518490 (RtlUnicodeStringToAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140518CB0 (RtlCreateUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x140518D58 (RtlStringFromGUIDEx.c)
 *     RtlDuplicateUnicodeString @ 0x140518E60 (RtlDuplicateUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140519C30 (RtlFormatCurrentUserKeyPath.c)
 *     RtlUpcaseUnicodeString @ 0x140539150 (RtlUpcaseUnicodeString.c)
 *     RtlDowncaseUnicodeString @ 0x14055E570 (RtlDowncaseUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x14055EDE0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x14055EED0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14055F150 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     CmpQueryNameString @ 0x140561CB8 (CmpQueryNameString.c)
 *     CmpInitCmRM @ 0x140561DC4 (CmpInitCmRM.c)
 *     RtlpQueryRegistryDirect @ 0x1405719B8 (RtlpQueryRegistryDirect.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1405D60B0 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1405D66A4 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x1405D6C60 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgBuildIndirectString @ 0x1405D8850 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405D91A0 (PiDevCfgQueryObjectProperties.c)
 *     RtlOemStringToUnicodeString @ 0x1405DD0D0 (RtlOemStringToUnicodeString.c)
 *     RtlUnicodeStringToOemString @ 0x140605CC0 (RtlUnicodeStringToOemString.c)
 *     PiDrvDbCreateNode @ 0x140622B38 (PiDrvDbCreateNode.c)
 *     PiDevCfgAppendMultiSz @ 0x14072ADB8 (PiDevCfgAppendMultiSz.c)
 *     PiDrvDbOverlayNodeHive @ 0x14073CE80 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x14073DAB4 (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14073DB74 (PiDrvDbResolveSystemFilePath.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14073F390 (PiCreateDriverSwDeviceCallback.c)
 *     RtlOemStringToCountedUnicodeString @ 0x1407813F0 (RtlOemStringToCountedUnicodeString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x140781680 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140785D38 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall ExpAllocateStringRoutine(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x67727453u);
}
