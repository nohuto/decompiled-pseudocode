/*
 * XREFs of ndisReferenceMiniportNoCheck @ 0x1C0002848
 * Callers:
 *     NdisMFreeSharedMemory @ 0x1C0001D60 (NdisMFreeSharedMemory.c)
 *     ndisIndicateStatusInternal @ 0x1C0007254 (ndisIndicateStatusInternal.c)
 *     ndisQueueRequestWorkItem @ 0x1C0019FD4 (ndisQueueRequestWorkItem.c)
 *     ndisSetDevicePowerOnComplete @ 0x1C00200B0 (ndisSetDevicePowerOnComplete.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C00449E0 (ndisMOidRequestCompleteInternal.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004A7B0 (ndisUpdateAndIndicatePMCapabilities.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C0051340 (NdisClOpenAddressFamilyEx.c)
 *     NdisMPromoteMiniport @ 0x1C005E210 (NdisMPromoteMiniport.c)
 *     ndis5InterruptDpc @ 0x1C00622C0 (ndis5InterruptDpc.c)
 *     ndisQueuePowerIrp @ 0x1C0065978 (ndisQueuePowerIrp.c)
 *     ?ndisQueuePeriodicReceivesWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0068FC8 (-ndisQueuePeriodicReceivesWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisSriovInterfaceReference @ 0x1C006DA00 (ndisSriovInterfaceReference.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C00AAE00 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00EB720 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisWdfPreReleaseHardware @ 0x1C00EBB30 (ndisWdfPreReleaseHardware.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00FE008 (ndisPnPIrpRemoveDevice.c)
 *     ndisMFinishClose @ 0x1C00FF3D8 (ndisMFinishClose.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

void __fastcall ndisReferenceMiniportNoCheck(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v3; // al
  struct _NDIS_REFCOUNT_BLOCK *v4; // rcx
  KIRQL v5; // si

  v1 = a1 + 4464;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4464));
  v4 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4920);
  v5 = v3;
  if ( v4 )
    NdisReferenceWithTag(v4);
  ++*(_DWORD *)(v1 + 8);
  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_qD(13LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, a1, *(unsigned int *)(a1 + 4472));
  KeReleaseSpinLock((PKSPIN_LOCK)v1, v5);
}
