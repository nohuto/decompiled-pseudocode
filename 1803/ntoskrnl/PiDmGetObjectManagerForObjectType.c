/*
 * XREFs of PiDmGetObjectManagerForObjectType @ 0x14050784C
 * Callers:
 *     PiDmGetObject @ 0x1405074E8 (PiDmGetObject.c)
 *     PiDmEnumObjectsWithCallback @ 0x140509908 (PiDmEnumObjectsWithCallback.c)
 *     PiDmAddCacheReferenceForObject @ 0x1405D4DD0 (PiDmAddCacheReferenceForObject.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1405E06C0 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddList @ 0x1405E6AD0 (PiDmListAddList.c)
 *     PiDmListAddObject @ 0x1405EA250 (PiDmListAddObject.c)
 *     PiDmGetObjectCount @ 0x140728DFC (PiDmGetObjectCount.c)
 *     PiDmListRemoveList @ 0x140728E5C (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140728FBC (PiDmListRemoveObject.c)
 * Callees:
 *     <none>
 */

void *__fastcall PiDmGetObjectManagerForObjectType(int a1)
{
  __int64 v1; // rdx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v6; // ecx
  int v7; // ecx

  v1 = 0LL;
  v2 = a1 - 1;
  if ( !v2 )
    return &PiDmDeviceManager;
  v3 = v2 - 1;
  if ( !v3 )
    return &PiDmDeviceInstallerClassManager;
  v4 = v3 - 1;
  if ( !v4 )
    return &PiDmDeviceInterfaceManager;
  v6 = v4 - 1;
  if ( !v6 )
    return &PiDmDeviceInterfaceClassManager;
  v7 = v6 - 1;
  if ( !v7 )
    return &PiDmDeviceContainerManager;
  if ( v7 == 1 )
    return &PiDmDevicePanelManager;
  return (void *)v1;
}
