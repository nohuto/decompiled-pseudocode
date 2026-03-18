/*
 * XREFs of KsepPoolFreePaged @ 0x1400F9FD8
 * Callers:
 *     KsepCacheDeviceFree @ 0x1404F5490 (KsepCacheDeviceFree.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140546714 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringFree @ 0x140546878 (KsepStringFree.c)
 *     KsepDbFreeDriverShims @ 0x140546CFC (KsepDbFreeDriverShims.c)
 *     KseAddHardwareId @ 0x140551E88 (KseAddHardwareId.c)
 *     KseDriverUnloadImage @ 0x14059E4D8 (KseDriverUnloadImage.c)
 *     KsepCacheInitialize @ 0x1405C5300 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x1405C54A8 (KsepRegistryQuerySZ.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1405C5620 (KsepResolveApplicableShimsForDriver.c)
 *     KseRegisterShimEx @ 0x1405C5910 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x1405C5C54 (KsepGetLoadedModulesList.c)
 *     KseShimDatabaseBootRelease @ 0x1405D9560 (KseShimDatabaseBootRelease.c)
 *     KsepDbGetShimInfo @ 0x1405E8B58 (KsepDbGetShimInfo.c)
 *     KsepStringSplitMultiString @ 0x1405EA860 (KsepStringSplitMultiString.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1406DAE38 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseUnregisterShim @ 0x1406DB230 (KseUnregisterShim.c)
 *     KsepCacheDeviceInsertData @ 0x1406DB788 (KsepCacheDeviceInsertData.c)
 *     KsepCacheUninitialize @ 0x1406DB940 (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x1406DBBD0 (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1406DBCCC (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x1406DBD90 (KsepRegistryQueryValue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreePaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement(&dword_14036A244);
  }
}
