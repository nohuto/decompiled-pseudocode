/*
 * XREFs of ndisMDereferenceIfBlock @ 0x1C0019F9C
 * Callers:
 *     ndisMSetGeneralAttributes @ 0x1C0014630 (ndisMSetGeneralAttributes.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C0018100 (ndisIndicateInitialStateToBinding.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C001CCC8 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ndisIfDetachMiniportBlock @ 0x1C0025030 (ndisIfDetachMiniportBlock.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C0064270 (NdisMReenumerateFailedAdapter.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00DF620 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisMiniportFatalError @ 0x1C00E122C (ndisMiniportFatalError.c)
 *     ndisQueuedReenumerateFailedAdapter @ 0x1C00E1AE0 (ndisQueuedReenumerateFailedAdapter.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00E2244 (ndisWmiChangeSingleInstance.c)
 *     ndisDevicePowerOn @ 0x1C00F5400 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00F58C0 (ndisDevicePowerDown.c)
 *     ndisPmInitializeMiniport @ 0x1C0104FCC (ndisPmInitializeMiniport.c)
 * Callees:
 *     ?IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0019784 (-IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 */

void __fastcall ndisMDereferenceIfBlock(__int64 a1, unsigned __int8 a2)
{
  KIRQL v4; // bl

  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  IFBLOCK_DEREFERENCE_MINIPORT_LINK(*(struct _NDIS_IF_BLOCK **)(a1 + 4064), a2);
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v4);
}
