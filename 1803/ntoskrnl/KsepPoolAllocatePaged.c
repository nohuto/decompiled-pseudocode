/*
 * XREFs of KsepPoolAllocatePaged @ 0x140161A68
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x14024D0F8 (KsepEvntLogShimsApplied.c)
 *     KseAddHardwareId @ 0x1405E56F8 (KseAddHardwareId.c)
 *     KsepGetShimsForDriver @ 0x1405FC594 (KsepGetShimsForDriver.c)
 *     KsepDbGetDriverShims @ 0x1405FC67C (KsepDbGetDriverShims.c)
 *     KsepStringDuplicate @ 0x1405FDEBC (KsepStringDuplicate.c)
 *     KsepStringConcatenate @ 0x1405FDF70 (KsepStringConcatenate.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1405FE30C (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringDuplicateUnicode @ 0x1405FE3F0 (KsepStringDuplicateUnicode.c)
 *     KsepDbCacheReadDevice @ 0x14061DB54 (KsepDbCacheReadDevice.c)
 *     KsepCacheDeviceInsertData @ 0x14061DE00 (KsepCacheDeviceInsertData.c)
 *     KseRegisterShimEx @ 0x1406232A0 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x1406235DC (KsepGetLoadedModulesList.c)
 *     KsepCacheInitialize @ 0x140623678 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x140623820 (KsepRegistryQuerySZ.c)
 *     KsepDbGetShimInfo @ 0x140744DE8 (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140745064 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x140746254 (KsepStringSplitMultiString.c)
 *     KsepRegistryEnumValue @ 0x14074676C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x140746868 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x14074692C (KsepRegistryQueryValue.c)
 *     KseShimDatabaseBootInitialize @ 0x1408C89C4 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KsepPoolAllocatePaged(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x6145534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_1403AD320);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_1403AD330);
  }
  return v3;
}
