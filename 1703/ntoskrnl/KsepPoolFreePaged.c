/*
 * XREFs of KsepPoolFreePaged @ 0x14006D8D8
 * Callers:
 *     KseAddHardwareId @ 0x1404B3594 (KseAddHardwareId.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1404B4D0C (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringFree @ 0x1404B4E70 (KsepStringFree.c)
 *     KsepDbFreeDriverShims @ 0x1404B5204 (KsepDbFreeDriverShims.c)
 *     KseDriverUnloadImage @ 0x1405846F8 (KseDriverUnloadImage.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14059873C (KsepResolveApplicableShimsForDriver.c)
 *     KsepStringSplitMultiString @ 0x140598F64 (KsepStringSplitMultiString.c)
 *     KsepDbGetShimInfo @ 0x140599338 (KsepDbGetShimInfo.c)
 *     KsepRegistryQuerySZ @ 0x14059BFD4 (KsepRegistryQuerySZ.c)
 *     KsepCacheInitialize @ 0x14059CFD4 (KsepCacheInitialize.c)
 *     KseRegisterShimEx @ 0x14059D610 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x14059D950 (KsepGetLoadedModulesList.c)
 *     KsepCacheDeviceFree @ 0x1405ACEF0 (KsepCacheDeviceFree.c)
 *     KseShimDatabaseBootRelease @ 0x1405C6260 (KseShimDatabaseBootRelease.c)
 *     KsepCacheDeviceInsertData @ 0x1405DA500 (KsepCacheDeviceInsertData.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1406AF8AC (KsepDbQueryRegistryDeviceDataList.c)
 *     KseUnregisterShim @ 0x1406AFC00 (KseUnregisterShim.c)
 *     KsepCacheUninitialize @ 0x1406B0194 (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x1406B0424 (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1406B0520 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x1406B05E4 (KsepRegistryQueryValue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreePaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement(&dword_14034F7E4);
  }
}
