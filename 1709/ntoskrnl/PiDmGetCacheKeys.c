/*
 * XREFs of PiDmGetCacheKeys @ 0x140523F38
 * Callers:
 *     PiDmObjectRelease @ 0x140523DEC (PiDmObjectRelease.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x140523E28 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140524280 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectProcessPropertyChange @ 0x140528FC4 (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectGetCachedObjectReference @ 0x140588424 (PiDmObjectGetCachedObjectReference.c)
 *     PiDmObjectCreate @ 0x1405CD66C (PiDmObjectCreate.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x1405D0504 (PiDmListUpdateAggregationCountWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall PiDmGetCacheKeys(int a1, DEVPROPKEY ***a2, _DWORD *a3)
{
  int v3; // ecx
  DEVPROPKEY **v4; // rax
  int v5; // ecx

  v3 = a1 - 1;
  if ( !v3 )
  {
    v4 = &PiDmCachedDeviceKeys;
    *a3 = 9;
LABEL_3:
    *a2 = v4;
    return;
  }
  v5 = v3 - 2;
  if ( !v5 )
  {
    v4 = &PiDmCachedDeviceInterfaceKeys;
    *a3 = 1;
    goto LABEL_3;
  }
  if ( v5 == 2 )
  {
    v4 = &PiDmCachedDeviceContainerKeys;
    *a3 = 3;
    goto LABEL_3;
  }
  *a2 = 0LL;
  *a3 = 0;
}
