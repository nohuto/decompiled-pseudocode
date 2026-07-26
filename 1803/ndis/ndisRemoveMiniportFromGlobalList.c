/*
 * XREFs of ndisRemoveMiniportFromGlobalList @ 0x1C0012768
 * Callers:
 *     ndisPnPIrpRemoveDevice @ 0x1C00B1B84 (ndisPnPIrpRemoveDevice.c)
 *     NdisLWMUninitializeNetworkInterface @ 0x1C00EBB10 (NdisLWMUninitializeNetworkInterface.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00EC2B0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisRemoveMiniportFromGlobalList(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // al
  struct _NDIS_MINIPORT_BLOCK *v3; // rdx
  struct _NDIS_MINIPORT_BLOCK **p_NextGlobalMiniport; // r8

  v2 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v3 = ndisMiniportList;
  p_NextGlobalMiniport = &ndisMiniportList;
  while ( v3 )
  {
    if ( v3 == a1 )
    {
      *p_NextGlobalMiniport = a1->NextGlobalMiniport;
      break;
    }
    p_NextGlobalMiniport = &v3->NextGlobalMiniport;
    v3 = v3->NextGlobalMiniport;
  }
  KeReleaseSpinLock(&ndisMiniportListLock, v2);
}
