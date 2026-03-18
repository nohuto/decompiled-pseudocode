/*
 * XREFs of PiDmGetCacheKeys @ 0x1405079F8
 * Callers:
 *     PiDmObjectRelease @ 0x1405078AC (PiDmObjectRelease.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1405078E8 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140507E74 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1405772A0 (PiDmObjectGetCachedObjectReference.c)
 *     PiDmObjectProcessPropertyChange @ 0x1405D2E6C (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectCreate @ 0x1405D3AB4 (PiDmObjectCreate.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x1405EA3FC (PiDmListUpdateAggregationCountWorker.c)
 * Callees:
 *     <none>
 */

DEVPROPKEY **__fastcall PiDmGetCacheKeys(int a1, DEVPROPKEY ***a2, _DWORD *a3)
{
  int v3; // ecx
  DEVPROPKEY **result; // rax
  int v5; // ecx

  v3 = a1 - 1;
  if ( v3 )
  {
    v5 = v3 - 2;
    if ( v5 )
    {
      if ( v5 == 2 )
      {
        *a3 = 3;
        result = &PiDmCachedDeviceContainerKeys;
      }
      else
      {
        result = 0LL;
        *a3 = 0;
      }
    }
    else
    {
      *a3 = 1;
      result = &PiDmCachedDeviceInterfaceKeys;
    }
  }
  else
  {
    *a3 = 10;
    result = &PiDmCachedDeviceKeys;
  }
  *a2 = result;
  return result;
}
