/*
 * XREFs of NdisReferenceWithTag @ 0x1C000CF20
 * Callers:
 *     ndisInterruptDpc @ 0x1C0003D80 (ndisInterruptDpc.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C0007AB0 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisMWakeUpDpcX @ 0x1C0008990 (ndisMWakeUpDpcX.c)
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     ndisCreateHandler @ 0x1C00098C0 (ndisCreateHandler.c)
 *     ndisMOidRequest @ 0x1C000A070 (ndisMOidRequest.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000A2C0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000B050 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C000BD50 (ndisFOidRequestCompleteInternal.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C000C080 (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisQueueOidRequest @ 0x1C000C3B0 (ndisQueueOidRequest.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000CB30 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisIfReferenceMiniport @ 0x1C000DF28 (ndisIfReferenceMiniport.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000E630 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ndisMTimerDpcX @ 0x1C000F2F0 (ndisMTimerDpcX.c)
 *     ndisMTimerObjectDpc @ 0x1C0011410 (ndisMTimerObjectDpc.c)
 *     ndisFIndicateStatusInternal @ 0x1C00172BC (ndisFIndicateStatusInternal.c)
 *     ndisIndicateStatusInternal @ 0x1C0017E84 (ndisIndicateStatusInternal.c)
 *     ndisIfSetInterfaceState @ 0x1C0018DFC (ndisIfSetInterfaceState.c)
 *     ndisMReferenceIfBlock @ 0x1C0019FC4 (ndisMReferenceIfBlock.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C001A0DC (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     ndisReferenceProtocol @ 0x1C001AC14 (ndisReferenceProtocol.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001B848 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C001B8B0 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ndisReferenceOpenByHandle @ 0x1C001C400 (ndisReferenceOpenByHandle.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C001D500 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisQueueRequestWorkItem @ 0x1C001F230 (ndisQueueRequestWorkItem.c)
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0021158 (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisReferenceRefEx @ 0x1C0022014 (ndisReferenceRefEx.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C0024678 (ndisReferenceMiniportNoCheck.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C003FF00 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0040190 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0040C70 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisIfAliasChange @ 0x1C004232C (ndisIfAliasChange.c)
 *     ndisIfCreateOrUpdateInterface @ 0x1C00424F4 (ndisIfCreateOrUpdateInterface.c)
 *     ndisIfSetIfDescr @ 0x1C0042C6C (ndisIfSetIfDescr.c)
 *     ndisReferenceRefNoCheck @ 0x1C006E920 (ndisReferenceRefNoCheck.c)
 * Callees:
 *     ?ndisResizeRefCountBlock@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C002164C (-ndisResizeRefCountBlock@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006E6D4 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall NdisReferenceWithTag(struct _NDIS_REFCOUNT_BLOCK *a1, unsigned __int8 a2)
{
  _NDIS_REFCOUNT_TAGGED_ENTRY *v4; // rcx
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // r9
  unsigned __int8 NumOverflowTaggedEntries; // r10
  unsigned __int8 v7; // r8
  _NDIS_REFCOUNT_TAGGED_ENTRY *v8; // rdx
  unsigned __int8 RefCount; // al

  while ( (unsigned __int64)a1[-1].RefWithStack + 62 > 1 )
  {
    if ( (unsigned __int64)a1 < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, (ULONG_PTR)a1, 0LL);
    if ( a2 == 0xFF )
      ndisBugCheckEx(0x1EuLL, 1uLL, (ULONG_PTR)a1, 0xFFuLL);
    if ( a2 >= a1->NumRefTags )
      ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)a1, a2);
    if ( a1->Type )
    {
      if ( a1->Type == 1 )
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)&a1->8 + a2, 1u);
      return;
    }
    v4 = 0LL;
    if ( !_bittestandset((signed __int32 *)a1->TaggedRefCounts.RefMask, a2) )
      return;
    Tags = a1->TaggedRefCounts.Tags;
    if ( Tags )
    {
      NumOverflowTaggedEntries = a1->NumOverflowTaggedEntries;
      v7 = 0;
      if ( NumOverflowTaggedEntries )
      {
        do
        {
          v8 = &Tags[v7];
          RefCount = v8->RefCount;
          if ( v8->Tag == a2 )
          {
            if ( RefCount != 0xFF )
            {
              v8->RefCount = RefCount + 1;
              return;
            }
          }
          else if ( !RefCount )
          {
            v4 = &Tags[v7];
          }
          ++v7;
        }
        while ( v7 < NumOverflowTaggedEntries );
        if ( !v4 )
          goto LABEL_18;
        v4->Tag = a2;
        v4->RefCount = 1;
        return;
      }
    }
LABEL_18:
    ndisResizeRefCountBlock(a1);
  }
}
