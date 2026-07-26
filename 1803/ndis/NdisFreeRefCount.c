/*
 * XREFs of NdisFreeRefCount @ 0x1C0011FA0
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000A2C0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000B050 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C000BD50 (ndisFOidRequestCompleteInternal.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C000C080 (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisQueueOidRequest @ 0x1C000C3B0 (ndisQueueOidRequest.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000CB30 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisOidRequestComplete @ 0x1C000D290 (ndisOidRequestComplete.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000E630 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ndisMTimerDpcX @ 0x1C000F2F0 (ndisMTimerDpcX.c)
 *     ndisMTimerObjectDpc @ 0x1C0011410 (ndisMTimerObjectDpc.c)
 *     ndisIfDetachMiniportBlock @ 0x1C0011BB0 (ndisIfDetachMiniportBlock.c)
 *     ndisFIndicateStatusInternal @ 0x1C00172BC (ndisFIndicateStatusInternal.c)
 *     ndisDereferenceRef @ 0x1C0019DB0 (ndisDereferenceRef.c)
 *     ndisDereferenceProtocol @ 0x1C001A8FC (ndisDereferenceProtocol.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001BE18 (IFBLOCK_DECREMENT_REF.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C001D500 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisDoOidRequests @ 0x1C001F670 (ndisDoOidRequests.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00B21A0 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ndisDeinitializeZeroBasedRef @ 0x1C00B257C (ndisDeinitializeZeroBasedRef.c)
 *     ndisFreeOpenBlock @ 0x1C00B2688 (ndisFreeOpenBlock.c)
 * Callees:
 *     ?ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1C0011FEC (-ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1C0012084 (-ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C0021704 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 */

void __fastcall NdisFreeRefCount(struct NDIS_REFCOUNT_HANDLE__ *BugCheckParameter3)
{
  unsigned int AnyActiveRefTag; // eax
  struct _NDIS_REFCOUNT_BLOCK *v3; // rax
  struct _NDIS_REFCOUNT_BLOCK *v4; // rbx

  if ( BugCheckParameter3 )
  {
    AnyActiveRefTag = ndisGetAnyActiveRefTag(BugCheckParameter3);
    if ( AnyActiveRefTag != -2 )
      ndisBugCheckEx(0x1EuLL, 4uLL, (ULONG_PTR)BugCheckParameter3, AnyActiveRefTag);
    v3 = ndisRefCountBlockFromRefCountHandle((ULONG_PTR)BugCheckParameter3);
    v4 = v3;
    if ( v3 )
    {
      ndisFreeRefCountAuxiliaryMemory(v3);
      ExFreePoolWithTag(v4, 0);
    }
  }
}
