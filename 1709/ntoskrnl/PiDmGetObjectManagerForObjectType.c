/*
 * XREFs of PiDmGetObjectManagerForObjectType @ 0x140523BF4
 * Callers:
 *     PiDmRemoveCacheReferenceForObject @ 0x14051804C (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddObject @ 0x140518388 (PiDmListAddObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140518534 (PiDmAddCacheReferenceForObject.c)
 *     PiDmGetObject @ 0x140523950 (PiDmGetObject.c)
 *     PiDmEnumObjectsWithCallback @ 0x140526100 (PiDmEnumObjectsWithCallback.c)
 *     PiDmListAddList @ 0x1405DF40C (PiDmListAddList.c)
 *     PiDmGetObjectCount @ 0x1406C2D0C (PiDmGetObjectCount.c)
 *     PiDmListRemoveList @ 0x1406C2D6C (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x1406C2EDC (PiDmListRemoveObject.c)
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
