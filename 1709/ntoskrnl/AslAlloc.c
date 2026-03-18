/*
 * XREFs of AslAlloc @ 0x140548100
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x1404F5948 (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x1404F5A30 (SdbpOpenDatabaseInMemory.c)
 *     AslPathToNetworkPathNt @ 0x140541914 (AslPathToNetworkPathNt.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x140541990 (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbpInitializeSearchDBContext @ 0x140541D04 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x140542220 (SdbpResolveMatchingFile.c)
 *     AslEnvExpandStrings2 @ 0x1405426EC (AslEnvExpandStrings2.c)
 *     AslFileMappingCreate @ 0x140545E54 (AslFileMappingCreate.c)
 *     AslStringDuplicate @ 0x140547940 (AslStringDuplicate.c)
 *     SdbpCreateSearchDBContext @ 0x140547F20 (SdbpCreateSearchDBContext.c)
 *     AslStringUpcaseToMultiByteN @ 0x140548148 (AslStringUpcaseToMultiByteN.c)
 *     AslFileMappingCreateFromImageView @ 0x1405DAF64 (AslFileMappingCreateFromImageView.c)
 *     SdbOpenDatabaseEx @ 0x14076DA64 (SdbOpenDatabaseEx.c)
 *     SdbQueryDataExTagID @ 0x14076DCDC (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14076E53C (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpCheckMatchingTextEntry @ 0x14076EAE4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x14076F4D4 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetProcessHistory @ 0x140770114 (SdbpGetProcessHistory.c)
 *     SdbResolveDatabaseEx @ 0x140770970 (SdbResolveDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x1407713B0 (SdbpOpenCompressedDatabase.c)
 *     SdbpCheckAllAttributes @ 0x140771748 (SdbpCheckAllAttributes.c)
 *     AslGuidToString_UStr @ 0x140771DCC (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x140771F1C (AslStringAnsiToUnicode.c)
 *     AslRegistryBuildMachinePath @ 0x1407722CC (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x140772374 (AslRegistryBuildUserPath.c)
 *     AslpFileGetVersionBlock @ 0x1407749CC (AslpFileGetVersionBlock.c)
 *     AslpFileLargeMapCreate @ 0x1407762FC (AslpFileLargeMapCreate.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
