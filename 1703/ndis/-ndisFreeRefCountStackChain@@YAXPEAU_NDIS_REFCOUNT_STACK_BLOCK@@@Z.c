/*
 * XREFs of ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006C7A8
 * Callers:
 *     ndisInterruptDpc @ 0x1C00041C0 (ndisInterruptDpc.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0006B60 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00075D0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00084A0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C00093E0 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C0009870 (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisDereferenceMiniportForNsi @ 0x1C0009D78 (ndisDereferenceMiniportForNsi.c)
 *     ndisQueueOidRequest @ 0x1C000A240 (ndisQueueOidRequest.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C000B070 (ndisFOidRequestCompleteInternal.c)
 *     ndisOidRequestComplete @ 0x1C000B560 (ndisOidRequestComplete.c)
 *     NdisDereferenceWithTag @ 0x1C000C850 (NdisDereferenceWithTag.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C000E960 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisMTimerDpcX @ 0x1C000F9B0 (ndisMTimerDpcX.c)
 *     ndisQueuedCheckForHang @ 0x1C000FBD0 (ndisQueuedCheckForHang.c)
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisIndicateStatusInternal @ 0x1C00185E4 (ndisIndicateStatusInternal.c)
 *     ndisDoOidRequests @ 0x1C001E190 (ndisDoOidRequests.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001EFE0 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ndisMTimerObjectDpc @ 0x1C00247F0 (ndisMTimerObjectDpc.c)
 * Callees:
 *     ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006C7F8 (-ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 */

void __fastcall ndisFreeRefCountStackChain(struct _NDIS_REFCOUNT_STACK_BLOCK *a1)
{
  _NDIS_REFCOUNT_STACK_BLOCK *Next; // rbx
  struct _NDIS_REFCOUNT_STACK_BLOCK *v3; // rcx

  while ( a1->Next )
  {
    Next = a1->Next;
    v3 = a1->Next;
    a1->Next = a1->Next->Next;
    ndisFreeRefCountStacksInBlock(v3);
    ExFreePoolWithTag(Next, 0);
  }
  ndisFreeRefCountStacksInBlock(a1);
}
