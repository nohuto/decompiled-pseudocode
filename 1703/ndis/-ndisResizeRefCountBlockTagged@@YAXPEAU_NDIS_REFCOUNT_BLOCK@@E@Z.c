/*
 * XREFs of ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001EF4C
 * Callers:
 *     ndisInterruptDpc @ 0x1C00041C0 (ndisInterruptDpc.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0006B60 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00075D0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00084A0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C00093E0 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C0009870 (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisQueueOidRequest @ 0x1C000A240 (ndisQueueOidRequest.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C000B070 (ndisFOidRequestCompleteInternal.c)
 *     ndisMOidRequest @ 0x1C000C330 (ndisMOidRequest.c)
 *     ?ndisReferenceWithTagCompact@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C000CD84 (-ndisReferenceWithTagCompact@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C000E960 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisMTimerDpcX @ 0x1C000F9B0 (ndisMTimerDpcX.c)
 *     ndisMWakeUpDpcX @ 0x1C00102D0 (ndisMWakeUpDpcX.c)
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     ndisIndicateStatusInternal @ 0x1C00185E4 (ndisIndicateStatusInternal.c)
 *     ndisQueueRequestWorkItem @ 0x1C001AEE0 (ndisQueueRequestWorkItem.c)
 *     NdisReferenceWithTag @ 0x1C001B270 (NdisReferenceWithTag.c)
 *     ndisReferenceRefEx @ 0x1C001EE0C (ndisReferenceRefEx.c)
 *     ndisMTimerObjectDpc @ 0x1C00247F0 (ndisMTimerObjectDpc.c)
 *     ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C0024AB0 (-ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z.c)
 * Callees:
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001EFE0 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 */

void __fastcall ndisResizeRefCountBlockTagged(struct _NDIS_REFCOUNT_BLOCK *a1, unsigned __int8 a2)
{
  SIZE_T v4; // rbp
  _NDIS_REFCOUNT_TAGGED_ENTRY *PoolWithTag; // rax
  _NDIS_REFCOUNT_TAGGED_ENTRY *v6; // rdi
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // rdx

  v4 = 2 * (unsigned int)a2;
  PoolWithTag = (_NDIS_REFCOUNT_TAGGED_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x7872444Eu);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)v4);
    Tags = a1->TaggedRefCounts.Tags;
    if ( Tags )
      memmove(v6, Tags, 2LL * a1->NumOverflowTaggedEntries);
    ndisFreeRefCountAuxiliaryMemory(a1);
    a1->TaggedRefCounts.Tags = v6;
    a1->NumOverflowTaggedEntries = a2;
  }
  else
  {
    ndisFreeRefCountAuxiliaryMemory(a1);
    a1->Type = 2;
  }
}
