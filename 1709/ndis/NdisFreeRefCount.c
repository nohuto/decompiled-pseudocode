/*
 * XREFs of NdisFreeRefCount @ 0x1C00013F0
 * Callers:
 *     ndisIfDetachMiniportBlock @ 0x1C0001008 (ndisIfDetachMiniportBlock.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C00036EC (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisDereferenceRef @ 0x1C0004F50 (ndisDereferenceRef.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0005B84 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C000634C (IFBLOCK_DECREMENT_REF.c)
 *     ndisFIndicateStatusInternal @ 0x1C00064EC (ndisFIndicateStatusInternal.c)
 *     ndisDereferenceProtocol @ 0x1C0006BC0 (ndisDereferenceProtocol.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C0009C2C (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisMTimerDpcX @ 0x1C0009FC0 (ndisMTimerDpcX.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C000A160 (ndisFOidRequestCompleteInternal.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000A970 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ndisQueueOidRequest @ 0x1C000B550 (ndisQueueOidRequest.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000BC90 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisOidRequestComplete @ 0x1C000C470 (ndisOidRequestComplete.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000D6B0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000E3F0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisDoOidRequests @ 0x1C001A290 (ndisDoOidRequests.c)
 *     ndisMTimerObjectDpc @ 0x1C0023190 (ndisMTimerObjectDpc.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00AAA48 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ndisDeinitializeZeroBasedRef @ 0x1C00AADE8 (ndisDeinitializeZeroBasedRef.c)
 *     ndisFreeOpenBlock @ 0x1C00AAED8 (ndisFreeOpenBlock.c)
 * Callees:
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C000141C (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 */

void __fastcall NdisFreeRefCount(struct _NDIS_REFCOUNT_BLOCK *P)
{
  if ( P )
  {
    ndisFreeRefCountAuxiliaryMemory(P);
    ExFreePoolWithTag(P, 0);
  }
}
