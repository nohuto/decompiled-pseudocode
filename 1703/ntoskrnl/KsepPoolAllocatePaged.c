/*
 * XREFs of KsepPoolAllocatePaged @ 0x14006D900
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x140153258 (KsepEvntLogShimsApplied.c)
 *     KseAddHardwareId @ 0x1404B3594 (KseAddHardwareId.c)
 *     KsepGetShimsForDriver @ 0x1404B45D8 (KsepGetShimsForDriver.c)
 *     KsepStringConcatenate @ 0x1404B4884 (KsepStringConcatenate.c)
 *     KsepStringDuplicate @ 0x1404B4AAC (KsepStringDuplicate.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1404B4D0C (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringDuplicateUnicode @ 0x1404B4EA8 (KsepStringDuplicateUnicode.c)
 *     KsepDbGetDriverShims @ 0x1404B502C (KsepDbGetDriverShims.c)
 *     KsepStringSplitMultiString @ 0x140598F64 (KsepStringSplitMultiString.c)
 *     KsepDbGetShimInfo @ 0x140599338 (KsepDbGetShimInfo.c)
 *     KsepRegistryQuerySZ @ 0x14059BFD4 (KsepRegistryQuerySZ.c)
 *     KsepCacheInitialize @ 0x14059CFD4 (KsepCacheInitialize.c)
 *     KseRegisterShimEx @ 0x14059D610 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x14059D950 (KsepGetLoadedModulesList.c)
 *     KsepDbCacheReadDevice @ 0x1405ACD7C (KsepDbCacheReadDevice.c)
 *     KsepCacheDeviceInsertData @ 0x1405DA500 (KsepCacheDeviceInsertData.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1406AF8AC (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepRegistryEnumValue @ 0x1406B0424 (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1406B0520 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x1406B05E4 (KsepRegistryQueryValue.c)
 *     KseShimDatabaseBootInitialize @ 0x1408251EC (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KsepPoolAllocatePaged(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x6145534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_14034F7E0);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_14034F7F0);
  }
  return v3;
}
