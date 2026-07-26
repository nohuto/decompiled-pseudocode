/*
 * XREFs of ?ndisFindMiniportByPdo@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0020DBC
 * Callers:
 *     ?ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z @ 0x1C00C6320 (-ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall ndisFindMiniportByPdo(struct _DEVICE_OBJECT *a1)
{
  KIRQL v2; // al
  struct _NDIS_MINIPORT_BLOCK *i; // rbx

  v2 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  for ( i = ndisMiniportList; i && i->PhysicalDeviceObject != a1; i = i->NextGlobalMiniport )
    ;
  KeReleaseSpinLock(&ndisMiniportListLock, v2);
  return i;
}
