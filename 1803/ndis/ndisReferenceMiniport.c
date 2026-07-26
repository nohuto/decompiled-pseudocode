/*
 * XREFs of ndisReferenceMiniport @ 0x1C000977C
 * Callers:
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C001167C (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C0016890 (ndisSetMediaDisconnectTimer.c)
 *     ndisIndicateStatusInternal @ 0x1C0017E84 (ndisIndicateStatusInternal.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00197A4 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisReferenceMiniportByHandle @ 0x1C001A448 (ndisReferenceMiniportByHandle.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C001D470 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisQueueRequestWorkItem @ 0x1C001F230 (ndisQueueRequestWorkItem.c)
 *     NdisAllocateIoWorkItem @ 0x1C0024400 (NdisAllocateIoWorkItem.c)
 *     ndisCreatePMRejectWorkItem @ 0x1C0024B2C (ndisCreatePMRejectWorkItem.c)
 *     ndisAllocateReceiveQueue @ 0x1C003AA8C (ndisAllocateReceiveQueue.c)
 *     ndisSetReceiveFilter @ 0x1C003C958 (ndisSetReceiveFilter.c)
 *     NdisMAllocatePort @ 0x1C003D230 (NdisMAllocatePort.c)
 *     ndisDoDirectOidRequest @ 0x1C0044A5C (ndisDoDirectOidRequest.c)
 *     ndisQueueRequestOnTopAsync @ 0x1C00483A8 (ndisQueueRequestOnTopAsync.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C00484B0 (ndisQueueRestoreRequestsOnTop.c)
 *     ndisCreatePMAddRemoveWorkItem @ 0x1C0049C68 (ndisCreatePMAddRemoveWorkItem.c)
 *     ndisCreatePMPdcTaskClientWorkItem @ 0x1C0049D24 (ndisCreatePMPdcTaskClientWorkItem.c)
 *     ndisSetPdcTaskClientExpiryTimer @ 0x1C004B6FC (ndisSetPdcTaskClientExpiryTimer.c)
 *     ndisDmaAddCpuNotify @ 0x1C004BFF4 (ndisDmaAddCpuNotify.c)
 *     ndisCsResiliencyCallback @ 0x1C004FB30 (ndisCsResiliencyCallback.c)
 *     ndisEnableWppTracingCallback @ 0x1C004FC24 (ndisEnableWppTracingCallback.c)
 *     ndisMapOpenByName @ 0x1C004FF0C (ndisMapOpenByName.c)
 *     ndisReferenceMiniportByGuid @ 0x1C00502C8 (ndisReferenceMiniportByGuid.c)
 *     ndisWnfPdcCallback @ 0x1C0050860 (ndisWnfPdcCallback.c)
 *     NdisMCmRegisterAddressFamilyEx @ 0x1C0052650 (NdisMCmRegisterAddressFamilyEx.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005BDEC (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     NdisMResetMiniport @ 0x1C005EF20 (NdisMResetMiniport.c)
 *     NdisMAllocateSharedMemoryAsync @ 0x1C0061F80 (NdisMAllocateSharedMemoryAsync.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C00653F0 (NdisMReenumerateFailedAdapter.c)
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C0066528 (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ?ndisNblTrackerReportStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0067640 (-ndisNblTrackerReportStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ndisNdkPcwAddCounter @ 0x1C00683E8 (ndisNdkPcwAddCounter.c)
 *     ndisNdkPcwEnumerateInstances @ 0x1C0068558 (ndisNdkPcwEnumerateInstances.c)
 *     ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C006B80C (-ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C006B8F8 (-ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ndisSSIdleTimerDpc @ 0x1C00712C0 (ndisSSIdleTimerDpc.c)
 *     ndisSubmitIdleRequest @ 0x1C0072098 (ndisSubmitIdleRequest.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0072EAC (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0074684 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0074A60 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00B1284 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00BFEA8 (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ndisRequestWaitWake @ 0x1C00CA3B0 (ndisRequestWaitWake.c)
 *     ndisMStartInitMode @ 0x1C00CA514 (ndisMStartInitMode.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00EB410 (NdisIMDeInitializeDeviceInstance.c)
 *     NdisLWMStartNetworkInterface @ 0x1C00EBA00 (NdisLWMStartNetworkInterface.c)
 *     ndisPnPIrpStopDevice @ 0x1C00EE11C (ndisPnPIrpStopDevice.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00FB420 (ndisOidPrePDOpenProvider.c)
 *     ndisReferenceMiniportByName @ 0x1C01003B4 (ndisReferenceMiniportByName.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01036D4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisMOpenAdapter @ 0x1C01048C0 (ndisMOpenAdapter.c)
 *     ndisReferenceNextUnprocessedMiniport @ 0x1C010D76C (ndisReferenceNextUnprocessedMiniport.c)
 *     NdisMCmRegisterAddressFamily @ 0x1C010DC00 (NdisMCmRegisterAddressFamily.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000CF20 (NdisReferenceWithTag.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

char __fastcall ndisReferenceMiniport(__int64 a1)
{
  __int64 v1; // rbx
  char v3; // di
  KIRQL v4; // r14
  struct _NDIS_REFCOUNT_BLOCK *v5; // rcx
  int v6; // ecx

  v1 = a1 + 4464;
  v3 = 1;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4464));
  if ( *(_BYTE *)(v1 + 12) )
    goto LABEL_9;
  v5 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4920);
  if ( v5 )
    NdisReferenceWithTag(v5);
  v6 = *(_DWORD *)(v1 + 8);
  *(_DWORD *)(v1 + 8) = v6 + 1;
  if ( v6 == -1 )
  {
    *(_DWORD *)(v1 + 8) = -1;
LABEL_9:
    v3 = 0;
  }
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_qD(12LL, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, a1, *(unsigned int *)(a1 + 4472));
  KeReleaseSpinLock((PKSPIN_LOCK)v1, v4);
  return v3;
}
