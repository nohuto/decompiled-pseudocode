/*
 * XREFs of ndisReferenceMiniportNoCheck @ 0x1C0024678
 * Callers:
 *     ndisSetDevicePowerOnComplete @ 0x1C0010020 (ndisSetDevicePowerOnComplete.c)
 *     NdisMFreeSharedMemory @ 0x1C0012ED0 (NdisMFreeSharedMemory.c)
 *     ndisIndicateStatusInternal @ 0x1C0017E84 (ndisIndicateStatusInternal.c)
 *     ndisQueueRequestWorkItem @ 0x1C001F230 (ndisQueueRequestWorkItem.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0045BB0 (ndisMOidRequestCompleteInternal.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004B788 (ndisUpdateAndIndicatePMCapabilities.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C0051C90 (NdisClOpenAddressFamilyEx.c)
 *     NdisMPromoteMiniport @ 0x1C005EC10 (NdisMPromoteMiniport.c)
 *     ndis5InterruptDpc @ 0x1C0062DC0 (ndis5InterruptDpc.c)
 *     ndisQueuePowerIrp @ 0x1C0066490 (ndisQueuePowerIrp.c)
 *     ?ndisQueuePeriodicReceivesWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0069934 (-ndisQueuePeriodicReceivesWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisSriovInterfaceReference @ 0x1C006E250 (ndisSriovInterfaceReference.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00B1B84 (ndisPnPIrpRemoveDevice.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C00B25B0 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     NdisLWMUninitializeNetworkInterface @ 0x1C00EBB10 (NdisLWMUninitializeNetworkInterface.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00EE2C8 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisWdfPreReleaseHardware @ 0x1C00EE6D8 (ndisWdfPreReleaseHardware.c)
 *     ndisMFinishClose @ 0x1C0102F48 (ndisMFinishClose.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000CF20 (NdisReferenceWithTag.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

void __fastcall ndisReferenceMiniportNoCheck(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rbx
  KIRQL v5; // al
  struct _NDIS_REFCOUNT_BLOCK *v6; // rcx
  KIRQL v7; // si

  v2 = a1 + 4464;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4464));
  v6 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4920);
  v7 = v5;
  if ( v6 )
    NdisReferenceWithTag(v6, a2);
  ++*(_DWORD *)(v2 + 8);
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_qD(13LL, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, a1, *(unsigned int *)(a1 + 4472));
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v7);
}
