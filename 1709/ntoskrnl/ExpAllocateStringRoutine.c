/*
 * XREFs of ExpAllocateStringRoutine @ 0x1404DF9E0
 * Callers:
 *     PnpDuplicateUnicodeString @ 0x140133158 (PnpDuplicateUnicodeString.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x140288C94 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404DE910 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404DF110 (RtlUnicodeStringToAnsiString.c)
 *     RtlCreateUnicodeString @ 0x1404DF560 (RtlCreateUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x1404DF5F0 (RtlOemStringToUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x1404DF798 (RtlStringFromGUIDEx.c)
 *     RtlDuplicateUnicodeString @ 0x1404DF8A0 (RtlDuplicateUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1404E11A0 (RtlFormatCurrentUserKeyPath.c)
 *     CmpQueryNameString @ 0x14050A728 (CmpQueryNameString.c)
 *     CmpInitCmRM @ 0x14050A840 (CmpInitCmRM.c)
 *     RtlpQueryRegistryDirect @ 0x14051D340 (RtlpQueryRegistryDirect.c)
 *     RtlUpcaseUnicodeString @ 0x14054A990 (RtlUpcaseUnicodeString.c)
 *     RtlUnicodeStringToOemString @ 0x14056D7A0 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x14056D860 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x14056D950 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14056DBB0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlDowncaseUnicodeString @ 0x14056FC00 (RtlDowncaseUnicodeString.c)
 *     PiDevCfgQueryObjectProperties @ 0x14058ABD0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1405A26D0 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x1405A284C (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgBuildIndirectString @ 0x1405A38E0 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1405A3E50 (PiDevCfgLogDeviceConfigured.c)
 *     PiDrvDbCreateNode @ 0x1405C6554 (PiDrvDbCreateNode.c)
 *     PiDevCfgAppendMultiSz @ 0x1406C4A18 (PiDevCfgAppendMultiSz.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406D56F0 (PiCreateDriverSwDeviceCallback.c)
 *     RtlOemStringToCountedUnicodeString @ 0x14071DC70 (RtlOemStringToCountedUnicodeString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x14071DEF0 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140722598 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall ExpAllocateStringRoutine(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x67727453u);
}
