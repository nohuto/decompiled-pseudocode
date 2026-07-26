/*
 * XREFs of ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006E628
 * Callers:
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C0007AB0 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisQueuedCheckForHang @ 0x1C0008280 (ndisQueuedCheckForHang.c)
 *     ndisCreateHandler @ 0x1C00098C0 (ndisCreateHandler.c)
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000A2C0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisDereferenceMiniportForNsi @ 0x1C000ABF0 (ndisDereferenceMiniportForNsi.c)
 *     NdisDereferenceWithTag @ 0x1C000AD90 (NdisDereferenceWithTag.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000B050 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C000BD50 (ndisFOidRequestCompleteInternal.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C000C080 (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisQueueOidRequest @ 0x1C000C3B0 (ndisQueueOidRequest.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000CB30 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisOidRequestComplete @ 0x1C000D290 (ndisOidRequestComplete.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000E630 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ndisMTimerDpcX @ 0x1C000F2F0 (ndisMTimerDpcX.c)
 *     ndisMTimerObjectDpc @ 0x1C0011410 (ndisMTimerObjectDpc.c)
 *     ndisIndicateStatusInternal @ 0x1C0017E84 (ndisIndicateStatusInternal.c)
 *     ndisDoOidRequests @ 0x1C001F670 (ndisDoOidRequests.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C0021704 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006E678 (-ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
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
