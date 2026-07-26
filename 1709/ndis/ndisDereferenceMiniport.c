/*
 * XREFs of ndisDereferenceMiniport @ 0x1C0009380
 * Callers:
 *     NdisFreeIoWorkItem @ 0x1C0002630 (NdisFreeIoWorkItem.c)
 *     ndisCreateHandler @ 0x1C0008A80 (ndisCreateHandler.c)
 *     ndisMWakeUpDpcX @ 0x1C00096F0 (ndisMWakeUpDpcX.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0010D44 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C0018B70 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisQueueRequestWorkItem @ 0x1C0019FD4 (ndisQueueRequestWorkItem.c)
 *     ndisDoOidRequests @ 0x1C001A290 (ndisDoOidRequests.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C001C504 (ndisCancelMediaDisconnectTimer.c)
 *     NdisAllocateIoWorkItem @ 0x1C001DF40 (NdisAllocateIoWorkItem.c)
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001E2D0 (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 *     ?ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z @ 0x1C001EB08 (-ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z.c)
 *     ndisCompleteWaitWake @ 0x1C001F254 (ndisCompleteWaitWake.c)
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C0023318 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C0023888 (-ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z.c)
 *     ndisAllocateReceiveQueue @ 0x1C00396F4 (ndisAllocateReceiveQueue.c)
 *     ndisDereferenceReceiveFilter @ 0x1C0039E14 (ndisDereferenceReceiveFilter.c)
 *     ndisDereferenceReceiveQueue @ 0x1C0039FEC (ndisDereferenceReceiveQueue.c)
 *     ndisSetReceiveFilter @ 0x1C003B5FC (ndisSetReceiveFilter.c)
 *     NdisMAllocatePort @ 0x1C003BEF0 (NdisMAllocatePort.c)
 *     NdisMFreePort @ 0x1C003C220 (NdisMFreePort.c)
 *     ndisDoDirectOidRequest @ 0x1C0043980 (ndisDoDirectOidRequest.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C00449E0 (ndisMOidRequestCompleteInternal.c)
 *     ndisProcessRequestAsync @ 0x1C0046C20 (ndisProcessRequestAsync.c)
 *     ndisPMPDCTaskClient @ 0x1C0049E50 (ndisPMPDCTaskClient.c)
 *     ndisSetPdcTaskClientExpiryTimer @ 0x1C004A724 (ndisSetPdcTaskClientExpiryTimer.c)
 *     ndisDmaAddCpuNotify @ 0x1C004B05C (ndisDmaAddCpuNotify.c)
 *     ndisCsResiliencyCallback @ 0x1C004F1F0 (ndisCsResiliencyCallback.c)
 *     ndisEnableWppTracingCallback @ 0x1C004F2E0 (ndisEnableWppTracingCallback.c)
 *     ndisWnfPdcCallback @ 0x1C004FF10 (ndisWnfPdcCallback.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C0051340 (NdisClOpenAddressFamilyEx.c)
 *     NdisMCmRegisterAddressFamilyEx @ 0x1C0051CE0 (NdisMCmRegisterAddressFamilyEx.c)
 *     NdisEnumerateFilterModules @ 0x1C0058060 (NdisEnumerateFilterModules.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005B698 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005C364 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisMResetMiniport @ 0x1C005E520 (NdisMResetMiniport.c)
 *     ndisQueuedResetMiniport @ 0x1C0060F90 (ndisQueuedResetMiniport.c)
 *     ndisMQueuedAllocateSharedHandler @ 0x1C0061BC0 (ndisMQueuedAllocateSharedHandler.c)
 *     ndis5QueuedMiniportDpcWorkItem @ 0x1C0062370 (ndis5QueuedMiniportDpcWorkItem.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C00648B0 (NdisMReenumerateFailedAdapter.c)
 *     ndisMediaDisconnectTimeout @ 0x1C0065850 (ndisMediaDisconnectTimeout.c)
 *     ndisSignalD0CompleteWorkItem @ 0x1C0065B80 (ndisSignalD0CompleteWorkItem.c)
 *     ndisNdkPcwAddCounter @ 0x1C0067818 (ndisNdkPcwAddCounter.c)
 *     ndisNdkPcwEnumerateInstances @ 0x1C0067988 (ndisNdkPcwEnumerateInstances.c)
 *     ndisPeriodicReceivesWorker @ 0x1C006A950 (ndisPeriodicReceivesWorker.c)
 *     ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C006AFAC (-ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C006B098 (-ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ndisSriovInterfaceDereference @ 0x1C006D9E0 (ndisSriovInterfaceDereference.c)
 *     NdisMIdleNotificationCompleteEx @ 0x1C006F2F0 (NdisMIdleNotificationCompleteEx.c)
 *     ndisSSIdleTimerWorkItem @ 0x1C0070B30 (ndisSSIdleTimerWorkItem.c)
 *     ndisSubmitIdleRequest @ 0x1C0071820 (ndisSubmitIdleRequest.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C0072780 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00729A0 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0072A80 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C00734A0 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00741EC (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisTempRefTimerDpc@@YAXPEAX000@Z @ 0x1C00744C0 (-ndisTempRefTimerDpc@@YAXPEAX000@Z.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C00AAE00 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ndisMHaltMiniport @ 0x1C00AB944 (ndisMHaltMiniport.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00B474C (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ndisIfQueryBindingMiniportIfIndex @ 0x1C00B5FDC (ndisIfQueryBindingMiniportIfIndex.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00B6DF4 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00B7E2C (ndisWmiExecuteMethod.c)
 *     ndisWmiQueryAllData @ 0x1C00C526C (ndisWmiQueryAllData.c)
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00C5CB4 (ndisCancelInitModeTimeoutTimer.c)
 *     ndisInitModeTimeoutWorkItem @ 0x1C00C8F00 (ndisInitModeTimeoutWorkItem.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00C9984 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ndisPMAddRemoveAsync @ 0x1C00E0480 (ndisPMAddRemoveAsync.c)
 *     ndisPMRejectAsync @ 0x1C00E0560 (ndisPMRejectAsync.c)
 *     ndisPdcTaskClientDisableTimeoutWorkItem @ 0x1C00E0680 (ndisPdcTaskClientDisableTimeoutWorkItem.c)
 *     ndisQueuedUpdatePMCapabilities @ 0x1C00E0CF0 (ndisQueuedUpdatePMCapabilities.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00E2F40 (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C00E319C (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ndisHandleBindNotification @ 0x1C00E3784 (ndisHandleBindNotification.c)
 *     ndisQueuedStatusUnbindAdapter @ 0x1C00E6690 (ndisQueuedStatusUnbindAdapter.c)
 *     ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x1C00E7860 (-ndisMQueuedPromoteMiniport@@YAXPEAX@Z.c)
 *     ?ndisMUpdateInterfaceWorker@@YAXPEAX@Z @ 0x1C00E7A60 (-ndisMUpdateInterfaceWorker@@YAXPEAX@Z.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00E94A0 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisMQueuedFreeSharedHandler @ 0x1C00EA180 (ndisMQueuedFreeSharedHandler.c)
 *     ndisPnPIrpStopDevice @ 0x1C00EB574 (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C00EB838 (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisQueuedReenumerateFailedAdapter @ 0x1C00EB990 (ndisQueuedReenumerateFailedAdapter.c)
 *     ndisWdfPostReleaseHardware @ 0x1C00EBA58 (ndisWdfPostReleaseHardware.c)
 *     ndisMediaDisconnectWorker @ 0x1C00EBCC0 (ndisMediaDisconnectWorker.c)
 *     ndisPowerIrpWorker @ 0x1C00EBE60 (ndisPowerIrpWorker.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EC100 (ndisWmiChangeSingleInstance.c)
 *     ndisNblTrackerWatchdogWorkerRoutine @ 0x1C00ED2F0 (ndisNblTrackerWatchdogWorkerRoutine.c)
 *     ndisNdkPcwMiniportCleanup @ 0x1C00EE3DC (ndisNdkPcwMiniportCleanup.c)
 *     ndisNdkPcwRemoveCounter @ 0x1C00EE4D0 (ndisNdkPcwRemoveCounter.c)
 *     ndisOidPrePDCloseProvider @ 0x1C00F84E0 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00F8830 (ndisOidPrePDOpenProvider.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00FE008 (ndisPnPIrpRemoveDevice.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FE490 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisMFinishClose @ 0x1C00FF3D8 (ndisMFinishClose.c)
 *     ndisHandlePnPRequest @ 0x1C0101AFC (ndisHandlePnPRequest.c)
 *     ndisReferenceMiniportByName @ 0x1C0101EBC (ndisReferenceMiniportByName.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01021E4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     NdisOpenAdapterEx @ 0x1C0103020 (NdisOpenAdapterEx.c)
 *     ndisMOpenAdapter @ 0x1C01033B8 (ndisMOpenAdapter.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C0103E1C (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0105224 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisDevicePowerOn @ 0x1C01053F0 (ndisDevicePowerOn.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C010B350 (ndisHandleProtocolReconfigNotification.c)
 *     ndisUnprocessAllMiniports @ 0x1C010B8CC (ndisUnprocessAllMiniports.c)
 *     NdisMCmRegisterAddressFamily @ 0x1C010BC70 (NdisMCmRegisterAddressFamily.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C010FF60 (NdisCmOpenAddressFamilyComplete.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006DDD8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006DE84 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisDereferenceMiniport(__int64 a1, unsigned __int8 a2)
{
  KIRQL v4; // al
  ULONG_PTR v5; // r8
  KIRQL v6; // bp
  __int64 v7; // rcx
  unsigned __int8 v8; // r10
  unsigned __int8 v9; // dl
  int v10; // edi
  char v11; // al
  struct _KEVENT *v12; // rcx
  ULONG_PTR v13; // r9
  ULONG_PTR v14; // rdi
  unsigned int v15; // edx

  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_q(25LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, a1);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4464));
  v5 = *(_QWORD *)(a1 + 4920);
  v6 = v4;
  if ( v5 )
  {
    if ( a2 == 0xFF )
    {
      *(_BYTE *)v5 &= ~2u;
    }
    else if ( *(_BYTE *)(v5 + 1) )
    {
      if ( *(_BYTE *)(v5 + 1) == 1 )
      {
        v13 = a2;
        v14 = v5 + ((unsigned __int64)a2 << 6);
        v15 = *(_DWORD *)(v14 + 64);
        if ( v15 >> 17 < 0x3FFE && (unsigned __int16)v15 >> 1 == (v15 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v14 + 8));
          *(_DWORD *)(v14 + 64) &= 0x10001u;
        }
        else
        {
          if ( (v15 & 0xFFFE) == 0 && (v15 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, v5, v13);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v14 + 8), 0);
        }
      }
    }
    else
    {
      v7 = *(_QWORD *)(v5 + 8);
      if ( v7 && (v8 = *(_BYTE *)(v5 + 3), v9 = 0, v8) )
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(v7 + 2LL * v9) == a2 )
          {
            v11 = *(_BYTE *)(v7 + 2LL * v9 + 1);
            if ( v11 )
              break;
          }
          if ( ++v9 >= v8 )
            goto LABEL_10;
        }
        *(_BYTE *)(v7 + 2LL * v9 + 1) = v11 - 1;
      }
      else
      {
LABEL_10:
        if ( !_bittestandreset((signed __int32 *)(v5 + 16), a2) )
          ndisBugCheckEx(0x1EuLL, 0LL, v5, a2);
      }
    }
  }
  v10 = --*(_DWORD *)(a1 + 4472);
  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_qD(14LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, a1, *(unsigned int *)(a1 + 4472));
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 4464), v6);
  if ( !v10 )
  {
    v12 = *(struct _KEVENT **)(a1 + 1608);
    if ( v12 )
      KeSetEvent(v12, 0, 0);
  }
  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_q(26LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, a1);
}
