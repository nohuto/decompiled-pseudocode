/*
 * XREFs of AslAlloc @ 0x1404B5F00
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x1404AF9F8 (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x1404AFAE0 (SdbpOpenDatabaseInMemory.c)
 *     AslFileMappingCreate @ 0x1404B445C (AslFileMappingCreate.c)
 *     AslStringDuplicate @ 0x1404B523C (AslStringDuplicate.c)
 *     AslStringUpcaseToMultiByteN @ 0x1404B5C40 (AslStringUpcaseToMultiByteN.c)
 *     SdbpCreateSearchDBContext @ 0x1404B5D20 (SdbpCreateSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x1405BB78C (SdbpResolveMatchingFile.c)
 *     AslEnvExpandStrings2 @ 0x1405BB9F0 (AslEnvExpandStrings2.c)
 *     SdbpInitializeSearchDBContext @ 0x1405BC0F0 (SdbpInitializeSearchDBContext.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x1405BC56C (SdbpCreateSearchPathPartsFromPath.c)
 *     AslPathToNetworkPathNt @ 0x1405BC658 (AslPathToNetworkPathNt.c)
 *     AslFileMappingCreateFromImageView @ 0x1405C6FC4 (AslFileMappingCreateFromImageView.c)
 *     AslRegistryBuildMachinePath @ 0x1405D6EE0 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1405D6F60 (AslRegistryBuildUserPath.c)
 *     SdbOpenDatabaseEx @ 0x14072AD3C (SdbOpenDatabaseEx.c)
 *     SdbQueryDataExTagID @ 0x14072AFB4 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14072B80C (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpCheckMatchingTextEntry @ 0x14072BDB4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x14072C684 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetProcessHistory @ 0x14072CF3C (SdbpGetProcessHistory.c)
 *     SdbResolveDatabase @ 0x14072D64C (SdbResolveDatabase.c)
 *     SdbpOpenCompressedDatabase @ 0x14072DB9C (SdbpOpenCompressedDatabase.c)
 *     SdbpCheckAllAttributes @ 0x14072DD80 (SdbpCheckAllAttributes.c)
 *     AslGuidToString_UStr @ 0x14072E32C (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x14072E47C (AslStringAnsiToUnicode.c)
 *     AslpFileGetVersionBlock @ 0x1407308C8 (AslpFileGetVersionBlock.c)
 *     AslpFileLargeMapCreate @ 0x140732188 (AslpFileLargeMapCreate.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall AslAlloc(__int64 a1, SIZE_T a2)
{
  PVOID PoolWithTag; // rax
  PVOID v4; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a2, 0x74705041u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, a2);
  return v4;
}
