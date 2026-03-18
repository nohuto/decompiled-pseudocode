/*
 * XREFs of AslAlloc @ 0x1405FDD00
 * Callers:
 *     AslFileMappingCreate @ 0x1405FC418 (AslFileMappingCreate.c)
 *     AslStringDuplicate @ 0x1405FC890 (AslStringDuplicate.c)
 *     AslStringUpcaseToMultiByteN @ 0x1405FDA3C (AslStringUpcaseToMultiByteN.c)
 *     SdbpCreateSearchDBContext @ 0x1405FDB20 (SdbpCreateSearchDBContext.c)
 *     SdbpOpenDatabaseInMemory @ 0x1405FFAF0 (SdbpOpenDatabaseInMemory.c)
 *     SdbInitDatabaseInMemory @ 0x1405FFBD0 (SdbInitDatabaseInMemory.c)
 *     SdbpResolveMatchingFile @ 0x14061E914 (SdbpResolveMatchingFile.c)
 *     AslEnvExpandStrings2 @ 0x14061EB74 (AslEnvExpandStrings2.c)
 *     SdbpInitializeSearchDBContext @ 0x14061F27C (SdbpInitializeSearchDBContext.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x14061F6FC (SdbpCreateSearchPathPartsFromPath.c)
 *     AslPathToNetworkPathNt @ 0x14061F7E4 (AslPathToNetworkPathNt.c)
 *     AslRegistryBuildMachinePath @ 0x14061FC58 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x14061FD0C (AslRegistryBuildUserPath.c)
 *     AslFileMappingCreateFromImageView @ 0x140644174 (AslFileMappingCreateFromImageView.c)
 *     SdbOpenDatabaseEx @ 0x1407D4BA8 (SdbOpenDatabaseEx.c)
 *     SdbQueryDataExTagID @ 0x1407D4E20 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1407D5878 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingTextEntry @ 0x1407D5CE4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x1407D6AB4 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetProcessHistory @ 0x1407D73D8 (SdbpGetProcessHistory.c)
 *     SdbResolveDatabaseEx @ 0x1407D7C4C (SdbResolveDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x1407D8690 (SdbpOpenCompressedDatabase.c)
 *     SdbpCheckAllAttributes @ 0x1407D8878 (SdbpCheckAllAttributes.c)
 *     AslGuidToString_UStr @ 0x1407D8E24 (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x1407D8F74 (AslStringAnsiToUnicode.c)
 *     AslPathWildcardFindFirst @ 0x1407DA2FC (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1407DA8D8 (AslPathWildcardFindNext.c)
 *     AslRegWildcardFindFirst @ 0x1407DB388 (AslRegWildcardFindFirst.c)
 *     AslpAllocMatchNode @ 0x1407DB4C8 (AslpAllocMatchNode.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1407DB5F8 (AslpPathWildcardAllocMatchNode.c)
 *     AslpProcessMatchRegNode @ 0x1407DBB08 (AslpProcessMatchRegNode.c)
 *     AslpFileGetVersionBlock @ 0x1407DD710 (AslpFileGetVersionBlock.c)
 *     AslpFileLargeMapCreate @ 0x1407DF060 (AslpFileLargeMapCreate.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
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
