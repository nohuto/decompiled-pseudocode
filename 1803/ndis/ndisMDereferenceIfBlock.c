/*
 * XREFs of ndisMDereferenceIfBlock @ 0x1C0019F1C
 * Callers:
 *     ndisIfDetachMiniportBlock @ 0x1C0011BB0 (ndisIfDetachMiniportBlock.c)
 *     ndisMSetGeneralAttributes @ 0x1C001690C (ndisMSetGeneralAttributes.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C0017990 (ndisIndicateInitialStateToBinding.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C0020524 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C00653F0 (NdisMReenumerateFailedAdapter.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00EB410 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisMiniportFatalError @ 0x1C00EDC6C (ndisMiniportFatalError.c)
 *     ndisQueuedReenumerateFailedAdapter @ 0x1C00EE540 (ndisQueuedReenumerateFailedAdapter.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EEE20 (ndisWmiChangeSingleInstance.c)
 *     ndisDevicePowerOn @ 0x1C0100560 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C0100A70 (ndisDevicePowerDown.c)
 *     ndisPmInitializeMiniport @ 0x1C010FEDC (ndisPmInitializeMiniport.c)
 * Callees:
 *     ?IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0019F74 (-IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 */

void __fastcall ndisMDereferenceIfBlock(__int64 a1, enum _NDIS_MPIF_REFTAG a2)
{
  KIRQL v4; // bl

  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  IFBLOCK_DEREFERENCE_MINIPORT_LINK(*(struct _NDIS_IF_BLOCK **)(a1 + 4064), a2);
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v4);
}
