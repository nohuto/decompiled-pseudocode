/*
 * XREFs of NdisReferenceWithTag @ 0x1C000C060
 * Callers:
 *     ndisReferenceMiniportNoCheck @ 0x1C0002848 (ndisReferenceMiniportNoCheck.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C00036EC (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C0004954 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ndisReferenceOpenByHandle @ 0x1C000510C (ndisReferenceOpenByHandle.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0005B84 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisReferenceProtocol @ 0x1C00062A4 (ndisReferenceProtocol.c)
 *     ndisFIndicateStatusInternal @ 0x1C00064EC (ndisFIndicateStatusInternal.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C0006CE8 (ndisIndicateInitialStateToBinding.c)
 *     ndisIndicateStatusInternal @ 0x1C0007254 (ndisIndicateStatusInternal.c)
 *     ndisIfSetInterfaceState @ 0x1C0008250 (ndisIfSetInterfaceState.c)
 *     ndisCreateHandler @ 0x1C0008A80 (ndisCreateHandler.c)
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     ndisMOidRequest @ 0x1C00094B0 (ndisMOidRequest.c)
 *     ndisMWakeUpDpcX @ 0x1C00096F0 (ndisMWakeUpDpcX.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C0009C2C (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisIfReferenceMiniport @ 0x1C0009F38 (ndisIfReferenceMiniport.c)
 *     ndisMTimerDpcX @ 0x1C0009FC0 (ndisMTimerDpcX.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C000A160 (ndisFOidRequestCompleteInternal.c)
 *     ndisInterruptDpc @ 0x1C000A480 (ndisInterruptDpc.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000A970 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ndisQueueOidRequest @ 0x1C000B550 (ndisQueueOidRequest.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000BC90 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000D6B0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000E3F0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisReferenceFilterDriver @ 0x1C000F228 (ndisReferenceFilterDriver.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0010048 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C0018B70 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisQueueRequestWorkItem @ 0x1C0019FD4 (ndisQueueRequestWorkItem.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C001D998 (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     ndisReferenceRefEx @ 0x1C001E3C8 (ndisReferenceRefEx.c)
 *     ndisMReferenceIfBlock @ 0x1C001F6AC (ndisMReferenceIfBlock.c)
 *     ndisMTimerObjectDpc @ 0x1C0023190 (ndisMTimerObjectDpc.c)
 *     ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C0023888 (-ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C003EE20 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C003F0B0 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C003FB90 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisIfAliasChange @ 0x1C00411E0 (ndisIfAliasChange.c)
 *     ndisIfCreateOrUpdateInterface @ 0x1C00413AC (ndisIfCreateOrUpdateInterface.c)
 *     ndisIfSetIfDescr @ 0x1C0041CD8 (ndisIfSetIfDescr.c)
 *     ndisReferenceRefNoCheck @ 0x1C006E0A8 (ndisReferenceRefNoCheck.c)
 * Callees:
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C000141C (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006DDD8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006DE84 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall NdisReferenceWithTag(struct _NDIS_REFCOUNT_BLOCK *a1, unsigned __int8 a2)
{
  _NDIS_REFCOUNT_TAGGED_ENTRY *v4; // rcx
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // r10
  unsigned __int8 NumOverflowTaggedEntries; // r9
  unsigned __int8 v7; // dl
  _NDIS_REFCOUNT_TAGGED_ENTRY *v8; // r8
  unsigned __int8 RefCount; // al
  unsigned __int8 v10; // si
  unsigned __int8 v11; // si
  _NDIS_REFCOUNT_TAGGED_ENTRY *PoolWithTag; // rax
  _NDIS_REFCOUNT_TAGGED_ENTRY *v13; // rbp
  _NDIS_REFCOUNT_TAGGED_ENTRY *v14; // rdx
  _NDIS_REFCOUNT_TAGGED_ENTRY *v15; // rcx
  unsigned __int16 i; // r14

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
            RefCount = v8->RefCount;
            if ( RefCount != 0xFF )
            {
              v8->RefCount = RefCount + 1;
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
      v10 = a1->NumOverflowTaggedEntries;
      if ( v10 == 0xFF
        || ((unsigned int)v10 + 2 > 0xFF ? (v11 = -1) : (v11 = v10 + 2),
            PoolWithTag = (_NDIS_REFCOUNT_TAGGED_ENTRY *)ExAllocatePoolWithTag(
                                                           NonPagedPoolNx,
                                                           2 * (unsigned int)v11,
                                                           0x7872444Eu),
            (v13 = PoolWithTag) == 0LL) )
      {
        ndisFreeRefCountAuxiliaryMemory(a1);
        a1->Type = 2;
      }
      else
      {
        memset(PoolWithTag, 0, 2 * (unsigned int)v11);
        v14 = a1->TaggedRefCounts.Tags;
        if ( v14 )
          memmove(v13, v14, 2LL * a1->NumOverflowTaggedEntries);
        if ( a1->Type )
        {
          if ( a1->Type == 1 )
          {
            for ( i = 0; i < a1->NumRefTags; ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(&a1->8 + i++)) )
              ;
          }
        }
        else
        {
          v15 = a1->TaggedRefCounts.Tags;
          if ( v15 )
          {
            ExFreePoolWithTag(v15, 0);
            a1->TaggedRefCounts.Tags = 0LL;
            a1->NumOverflowTaggedEntries = 0;
          }
        }
        a1->TaggedRefCounts.Tags = v13;
        a1->NumOverflowTaggedEntries = v11;
      }
    }
  }
}
