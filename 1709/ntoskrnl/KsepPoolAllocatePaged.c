/*
 * XREFs of KsepPoolAllocatePaged @ 0x1400FA000
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1401596AC (KsepEvntLogShimsApplied.c)
 *     KsepDbCacheReadDevice @ 0x1404F53B4 (KsepDbCacheReadDevice.c)
 *     KsepGetShimsForDriver @ 0x140545FD0 (KsepGetShimsForDriver.c)
 *     KsepStringConcatenate @ 0x140546278 (KsepStringConcatenate.c)
 *     KsepStringDuplicate @ 0x1405464B4 (KsepStringDuplicate.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140546714 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringDuplicateUnicode @ 0x1405468B0 (KsepStringDuplicateUnicode.c)
 *     KsepDbGetDriverShims @ 0x140546B28 (KsepDbGetDriverShims.c)
 *     KseAddHardwareId @ 0x140551E88 (KseAddHardwareId.c)
 *     KsepCacheInitialize @ 0x1405C5300 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x1405C54A8 (KsepRegistryQuerySZ.c)
 *     KseRegisterShimEx @ 0x1405C5910 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x1405C5C54 (KsepGetLoadedModulesList.c)
 *     KsepDbGetShimInfo @ 0x1405E8B58 (KsepDbGetShimInfo.c)
 *     KsepStringSplitMultiString @ 0x1405EA860 (KsepStringSplitMultiString.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1406DAE38 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepCacheDeviceInsertData @ 0x1406DB788 (KsepCacheDeviceInsertData.c)
 *     KsepRegistryEnumValue @ 0x1406DBBD0 (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1406DBCCC (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x1406DBD90 (KsepRegistryQueryValue.c)
 *     KseShimDatabaseBootInitialize @ 0x14083EFA4 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KsepPoolAllocatePaged(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x6145534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_14036A240);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_14036A250);
  }
  return v3;
}
