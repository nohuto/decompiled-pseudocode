/*
 * XREFs of KsepPoolFreePaged @ 0x140161A40
 * Callers:
 *     KseAddHardwareId @ 0x1405E56F8 (KseAddHardwareId.c)
 *     KsepDbFreeDriverShims @ 0x1405FC854 (KsepDbFreeDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1405FE30C (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringFree @ 0x1405FE3B8 (KsepStringFree.c)
 *     KseDriverUnloadImage @ 0x140600748 (KseDriverUnloadImage.c)
 *     KsepCacheDeviceFree @ 0x14061DCD0 (KsepCacheDeviceFree.c)
 *     KsepCacheDeviceInsertData @ 0x14061DE00 (KsepCacheDeviceInsertData.c)
 *     KseRegisterShimEx @ 0x1406232A0 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x1406235DC (KsepGetLoadedModulesList.c)
 *     KsepCacheInitialize @ 0x140623678 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x140623820 (KsepRegistryQuerySZ.c)
 *     KseShimDatabaseBootRelease @ 0x140642D1C (KseShimDatabaseBootRelease.c)
 *     KsepDbGetShimInfo @ 0x140744DE8 (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140745064 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseUnregisterShim @ 0x1407453B0 (KseUnregisterShim.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140745B44 (KsepResolveApplicableShimsForDriver.c)
 *     KsepStringSplitMultiString @ 0x140746254 (KsepStringSplitMultiString.c)
 *     KsepCacheUninitialize @ 0x1407464DC (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x14074676C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x140746868 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x14074692C (KsepRegistryQueryValue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreePaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement(&dword_1403AD324);
  }
}
