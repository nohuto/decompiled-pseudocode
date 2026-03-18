/*
 * XREFs of PiDmGetObjectManagerForObjectType @ 0x140485AA0
 * Callers:
 *     PiDmObjectGetCachedObjectProperty @ 0x1404854F0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmGetObject @ 0x140487390 (PiDmGetObject.c)
 *     PiDmEnumObjectsWithCallback @ 0x140488028 (PiDmEnumObjectsWithCallback.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404E4180 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddObject @ 0x1404E44B8 (PiDmListAddObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E4664 (PiDmAddCacheReferenceForObject.c)
 *     PiDmListAddList @ 0x140599268 (PiDmListAddList.c)
 *     PiDmGetObjectCount @ 0x140697544 (PiDmGetObjectCount.c)
 *     PiDmListRemoveList @ 0x1406975A4 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140697714 (PiDmListRemoveObject.c)
 * Callees:
 *     <none>
 */

void *__fastcall PiDmGetObjectManagerForObjectType(int a1)
{
  __int64 v1; // rdx
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  v1 = 0LL;
  v2 = a1 - 1;
  if ( !v2 )
    return &PiDmDeviceManager;
  v4 = v2 - 1;
  if ( !v4 )
    return &PiDmDeviceInstallerClassManager;
  v5 = v4 - 1;
  if ( !v5 )
    return &PiDmDeviceInterfaceManager;
  v6 = v5 - 1;
  if ( !v6 )
    return &PiDmDeviceInterfaceClassManager;
  if ( v6 == 1 )
    return &PiDmDeviceContainerManager;
  return (void *)v1;
}
