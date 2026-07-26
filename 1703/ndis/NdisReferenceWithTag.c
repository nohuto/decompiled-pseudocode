/*
 * XREFs of NdisReferenceWithTag @ 0x1C001B270
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
 *     ndisIfSetInterfaceState @ 0x1C00194BC (ndisIfSetInterfaceState.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001AE78 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisQueueRequestWorkItem @ 0x1C001AEE0 (ndisQueueRequestWorkItem.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C001B330 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001C6A4 (ndisReferenceMiniportNoCheck.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C001D8D4 (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C001DD24 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisReferenceRefEx @ 0x1C001EE0C (ndisReferenceRefEx.c)
 *     ndisMReferenceIfBlock @ 0x1C0022560 (ndisMReferenceIfBlock.c)
 *     ndisMTimerObjectDpc @ 0x1C00247F0 (ndisMTimerObjectDpc.c)
 *     ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C0024AB0 (-ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00422E0 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0042570 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0043050 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisIfAliasChange @ 0x1C00446C8 (ndisIfAliasChange.c)
 *     ndisIfCreateOrUpdateInterface @ 0x1C0044894 (ndisIfCreateOrUpdateInterface.c)
 *     ndisIfSetIfDescr @ 0x1C0044FFC (ndisIfSetIfDescr.c)
 *     ndisReferenceRefNoCheck @ 0x1C006CA88 (ndisReferenceRefNoCheck.c)
 * Callees:
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001EF4C (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001EFE0 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006C854 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall NdisReferenceWithTag(struct _NDIS_REFCOUNT_BLOCK *a1, unsigned __int8 a2)
{
  _NDIS_REFCOUNT_TAGGED_ENTRY *v4; // rdx
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // r10
  unsigned __int8 NumOverflowTaggedEntries; // r9
  unsigned __int8 v7; // r8
  _NDIS_REFCOUNT_TAGGED_ENTRY *v8; // rcx
  unsigned __int8 v9; // dl
  unsigned __int8 v10; // dl

  while ( a1 )
  {
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
          if ( v8->Tag == a2 )
          {
            if ( v8->RefCount != 0xFF )
            {
              ++v8->RefCount;
              return;
            }
          }
          else if ( !v8->RefCount )
          {
            v4 = &Tags[v7];
          }
          ++v7;
        }
        while ( v7 < NumOverflowTaggedEntries );
        if ( !v4 )
          goto LABEL_15;
        v4->Tag = a2;
        v4->RefCount = 1;
        return;
      }
    }
LABEL_15:
    if ( !a1->Type )
    {
      v9 = a1->NumOverflowTaggedEntries;
      if ( v9 == 0xFF )
      {
        ndisFreeRefCountAuxiliaryMemory(a1);
        a1->Type = 2;
      }
      else
      {
        if ( (unsigned int)v9 + 2 > 0xFF )
          v10 = -1;
        else
          v10 = v9 + 2;
        ndisResizeRefCountBlockTagged(a1, v10);
      }
    }
  }
}
