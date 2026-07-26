/*
 * XREFs of NdisFreeRefCount @ 0x1C0025560
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0006B60 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00075D0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00084A0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C00093E0 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C0009870 (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisQueueOidRequest @ 0x1C000A240 (ndisQueueOidRequest.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C000B070 (ndisFOidRequestCompleteInternal.c)
 *     ndisOidRequestComplete @ 0x1C000B560 (ndisOidRequestComplete.c)
 *     ndisMTimerDpcX @ 0x1C000F9B0 (ndisMTimerDpcX.c)
 *     ndisDereferenceRef @ 0x1C001807C (ndisDereferenceRef.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001B868 (IFBLOCK_DECREMENT_REF.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C001DD24 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisDoOidRequests @ 0x1C001E190 (ndisDoOidRequests.c)
 *     ndisMTimerObjectDpc @ 0x1C00247F0 (ndisMTimerObjectDpc.c)
 *     ndisIfDetachMiniportBlock @ 0x1C0025030 (ndisIfDetachMiniportBlock.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00BED60 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ndisDeinitializeZeroBasedRef @ 0x1C00BF100 (ndisDeinitializeZeroBasedRef.c)
 *     ndisFreeOpenBlock @ 0x1C00BF1E8 (ndisFreeOpenBlock.c)
 * Callees:
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001EFE0 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 */

void __fastcall NdisFreeRefCount(struct _NDIS_REFCOUNT_BLOCK *P)
{
  if ( P )
  {
    ndisFreeRefCountAuxiliaryMemory(P);
    ExFreePoolWithTag(P, 0);
  }
}
