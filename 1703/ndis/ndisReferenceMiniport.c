/*
 * XREFs of ndisReferenceMiniport @ 0x1C0011BCC
 * Callers:
 *     ndisReferenceMiniportByHandle @ 0x1C0015E38 (ndisReferenceMiniportByHandle.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001741C (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisIndicateStatusInternal @ 0x1C00185E4 (ndisIndicateStatusInternal.c)
 *     ndisQueueRequestWorkItem @ 0x1C001AEE0 (ndisQueueRequestWorkItem.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C001D1C4 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisAllocateIoWorkItem @ 0x1C0022C60 (NdisAllocateIoWorkItem.c)
 *     ndisCreatePMRejectWorkItem @ 0x1C00232DC (ndisCreatePMRejectWorkItem.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C0023B5C (ndisSetMediaDisconnectTimer.c)
 *     ndisAllocateReceiveQueue @ 0x1C003CC6C (ndisAllocateReceiveQueue.c)
 *     ndisSetReceiveFilter @ 0x1C003EB5C (ndisSetReceiveFilter.c)
 *     NdisMAllocatePort @ 0x1C003F280 (NdisMAllocatePort.c)
 *     ndisDoDirectOidRequest @ 0x1C0046784 (ndisDoDirectOidRequest.c)
 *     ndisQueueRequestOnTopAsync @ 0x1C0049D3C (ndisQueueRequestOnTopAsync.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C0049E40 (ndisQueueRestoreRequestsOnTop.c)
 *     ndisCreatePMAddRemoveWorkItem @ 0x1C004ADD4 (ndisCreatePMAddRemoveWorkItem.c)
 *     ndisCreatePMPdcTaskClientWorkItem @ 0x1C004AE8C (ndisCreatePMPdcTaskClientWorkItem.c)
 *     ndisSetPdcTaskClientExpiryTimer @ 0x1C004CE70 (ndisSetPdcTaskClientExpiryTimer.c)
 *     ndisDmaAddCpuNotify @ 0x1C004D53C (ndisDmaAddCpuNotify.c)
 *     ndisCsResiliencyCallback @ 0x1C0050620 (ndisCsResiliencyCallback.c)
 *     ndisEnableWppTracingCallback @ 0x1C0050710 (ndisEnableWppTracingCallback.c)
 *     ndisMapOpenByName @ 0x1C00509FC (ndisMapOpenByName.c)
 *     ndisReferenceMiniportByGuid @ 0x1C0050DB8 (ndisReferenceMiniportByGuid.c)
 *     ndisWnfPdcCallback @ 0x1C0051340 (ndisWnfPdcCallback.c)
 *     NdisMCmRegisterAddressFamilyEx @ 0x1C0052EA0 (NdisMCmRegisterAddressFamilyEx.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005BB50 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     NdisMResetMiniport @ 0x1C005E760 (NdisMResetMiniport.c)
 *     NdisMAllocateSharedMemoryAsync @ 0x1C0061260 (NdisMAllocateSharedMemoryAsync.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C0064270 (NdisMReenumerateFailedAdapter.c)
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C00653C4 (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ?ndisNblTrackerReportStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C00663A8 (-ndisNblTrackerReportStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ndisNdkPcwAddCounter @ 0x1C0067038 (ndisNdkPcwAddCounter.c)
 *     ndisNdkPcwEnumerateInstances @ 0x1C00671A8 (ndisNdkPcwEnumerateInstances.c)
 *     ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C006997C (-ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C0069A68 (-ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C0069BA4 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ndisSSIdleTimerDpc @ 0x1C006F2F0 (ndisSSIdleTimerDpc.c)
 *     ndisSubmitIdleRequest @ 0x1C0070060 (ndisSubmitIdleRequest.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0070D5C (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00722C4 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C007269C (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00B2380 (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ndisRequestWaitWake @ 0x1C00BDE48 (ndisRequestWaitWake.c)
 *     ndisMStartInitMode @ 0x1C00BDF20 (ndisMStartInitMode.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00DF620 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisPnPIrpStopDevice @ 0x1C00E16DC (ndisPnPIrpStopDevice.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00E4B5C (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00EF250 (ndisOidPrePDOpenProvider.c)
 *     ndisReferenceMiniportByName @ 0x1C00F5008 (ndisReferenceMiniportByName.c)
 *     ndisMOpenAdapter @ 0x1C00F7CE4 (ndisMOpenAdapter.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00F821C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisReferenceNextUnprocessedMiniport @ 0x1C010284C (ndisReferenceNextUnprocessedMiniport.c)
 *     NdisMCmRegisterAddressFamily @ 0x1C0102CE0 (NdisMCmRegisterAddressFamily.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C001B270 (NdisReferenceWithTag.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001EF4C (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001EFE0 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006C854 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

char __fastcall ndisReferenceMiniport(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rsi
  char v5; // di
  KIRQL v6; // r15
  struct _NDIS_REFCOUNT_BLOCK *v7; // rbx
  _NDIS_REFCOUNT_TAGGED_ENTRY *v8; // rdx
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // r11
  unsigned __int8 v12; // r8
  unsigned __int8 v13; // r10
  unsigned __int8 v14; // r9
  _NDIS_REFCOUNT_TAGGED_ENTRY *v15; // rcx
  unsigned __int8 NumOverflowTaggedEntries; // cl

  v2 = a1 + 4464;
  v5 = 1;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4464));
  if ( *(_BYTE *)(v2 + 12) )
    goto LABEL_29;
  v7 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4920);
  if ( v7 )
  {
    if ( v7->Type )
    {
      if ( v7->Type == 1 )
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)&v7->8 + a2, 1u);
    }
    else
    {
      v8 = 0LL;
      if ( _bittestandset((signed __int32 *)v7->TaggedRefCounts.RefMask, a2) )
      {
        Tags = v7->TaggedRefCounts.Tags;
        v12 = -1;
        if ( Tags && (v13 = v7->NumOverflowTaggedEntries, v14 = 0, v13) )
        {
          do
          {
            v15 = &Tags[v14];
            if ( v15->Tag == a2 )
            {
              if ( v15->RefCount != 0xFF )
              {
                ++v15->RefCount;
                goto LABEL_5;
              }
            }
            else if ( !v15->RefCount )
            {
              v8 = &Tags[v14];
            }
            ++v14;
          }
          while ( v14 < v13 );
          if ( !v8 )
            goto LABEL_19;
          v8->Tag = a2;
          v8->RefCount = 1;
        }
        else
        {
LABEL_19:
          if ( !v7->Type )
          {
            NumOverflowTaggedEntries = v7->NumOverflowTaggedEntries;
            if ( NumOverflowTaggedEntries == 0xFF )
            {
              ndisFreeRefCountAuxiliaryMemory(v7);
              v7->Type = 2;
            }
            else
            {
              if ( (unsigned int)NumOverflowTaggedEntries + 2 <= 0xFF )
                v12 = NumOverflowTaggedEntries + 2;
              ndisResizeRefCountBlockTagged(v7, v12);
            }
          }
          NdisReferenceWithTag(v7);
        }
      }
    }
  }
LABEL_5:
  if ( (*(_DWORD *)(v2 + 8))++ == -1 )
  {
    *(_DWORD *)(v2 + 8) = -1;
LABEL_29:
    v5 = 0;
  }
  if ( (unsigned __int8)byte_1C009261B >= 4u )
    WPP_SF_qD(12LL, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, a1, *(unsigned int *)(a1 + 4472));
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v6);
  return v5;
}
