/*
 * XREFs of ndisWdfDeviceObjectCleanup @ 0x1C0064A7C
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x1C00DFED0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ndisPnPCompleteRemoveDevice @ 0x1C00BE9A0 (ndisPnPCompleteRemoveDevice.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00BED60 (ndisMDeleteMiniportBlockOnRemove.c)
 */

__int64 __fastcall ndisWdfDeviceObjectCleanup(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // al
  struct _NDIS_MINIPORT_BLOCK **p_NextGlobalMiniport; // rcx
  struct _NDIS_MINIPORT_BLOCK *v4; // rdx

  ndisPnPCompleteRemoveDevice();
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  p_NextGlobalMiniport = &ndisMiniportList;
  if ( ndisMiniportList )
  {
    while ( 1 )
    {
      v4 = *p_NextGlobalMiniport;
      if ( *p_NextGlobalMiniport == a1 )
        break;
      p_NextGlobalMiniport = &v4->NextGlobalMiniport;
      if ( !v4->NextGlobalMiniport )
        goto LABEL_6;
    }
    *p_NextGlobalMiniport = a1->NextGlobalMiniport;
  }
LABEL_6:
  KeReleaseSpinLock(&ndisMiniportListLock, v2);
  ndisMDeleteMiniportBlockOnRemove(a1);
  a1->MiniportAdapterContext = 0LL;
  return 0LL;
}
