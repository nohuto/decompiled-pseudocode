/*
 * XREFs of ndisDereferenceMiniport @ 0x1C0011A54
 * Callers:
 *     ndisCreateHandler @ 0x1C000C8D8 (ndisCreateHandler.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C000E960 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisMWakeUpDpcX @ 0x1C00102D0 (ndisMWakeUpDpcX.c)
 *     ?ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z @ 0x1C0016538 (-ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z.c)
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0016578 (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 *     ndisQueueRequestWorkItem @ 0x1C001AEE0 (ndisQueueRequestWorkItem.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C001D1C4 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisDoOidRequests @ 0x1C001E190 (ndisDoOidRequests.c)
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001EB44 (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisAllocateIoWorkItem @ 0x1C0022C60 (NdisAllocateIoWorkItem.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C00235D4 (ndisCancelMediaDisconnectTimer.c)
 *     ndisCompleteWaitWake @ 0x1C0023920 (ndisCompleteWaitWake.c)
 *     ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C0024AB0 (-ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z.c)
 *     NdisFreeIoWorkItem @ 0x1C0027050 (NdisFreeIoWorkItem.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0027768 (ndisMOidRequestCompleteInternal.c)
 *     ndisAllocateReceiveQueue @ 0x1C003CC6C (ndisAllocateReceiveQueue.c)
 *     ndisDereferenceReceiveFilter @ 0x1C003D388 (ndisDereferenceReceiveFilter.c)
 *     ndisDereferenceReceiveQueue @ 0x1C003D564 (ndisDereferenceReceiveQueue.c)
 *     ndisSetReceiveFilter @ 0x1C003EB5C (ndisSetReceiveFilter.c)
 *     NdisMAllocatePort @ 0x1C003F280 (NdisMAllocatePort.c)
 *     NdisMFreePort @ 0x1C003F5C0 (NdisMFreePort.c)
 *     ndisDoDirectOidRequest @ 0x1C0046784 (ndisDoDirectOidRequest.c)
 *     ndisProcessRequestAsync @ 0x1C0049840 (ndisProcessRequestAsync.c)
 *     ndisPMPDCTaskClient @ 0x1C004C5C0 (ndisPMPDCTaskClient.c)
 *     ndisSetPdcTaskClientExpiryTimer @ 0x1C004CE70 (ndisSetPdcTaskClientExpiryTimer.c)
 *     ndisDmaAddCpuNotify @ 0x1C004D53C (ndisDmaAddCpuNotify.c)
 *     ndisCsResiliencyCallback @ 0x1C0050620 (ndisCsResiliencyCallback.c)
 *     ndisEnableWppTracingCallback @ 0x1C0050710 (ndisEnableWppTracingCallback.c)
 *     ndisWnfPdcCallback @ 0x1C0051340 (ndisWnfPdcCallback.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C0052500 (NdisClOpenAddressFamilyEx.c)
 *     NdisMCmRegisterAddressFamilyEx @ 0x1C0052EA0 (NdisMCmRegisterAddressFamilyEx.c)
 *     NdisEnumerateFilterModules @ 0x1C0058C90 (NdisEnumerateFilterModules.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005BB50 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005C920 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisMResetMiniport @ 0x1C005E760 (NdisMResetMiniport.c)
 *     ndisQueuedResetMiniport @ 0x1C0060F50 (ndisQueuedResetMiniport.c)
 *     ndisMQueuedAllocateSharedHandler @ 0x1C0061850 (ndisMQueuedAllocateSharedHandler.c)
 *     ndis5QueuedMiniportDpcWorkItem @ 0x1C0061E80 (ndis5QueuedMiniportDpcWorkItem.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C0064270 (NdisMReenumerateFailedAdapter.c)
 *     ndisMediaDisconnectTimeout @ 0x1C0065210 (ndisMediaDisconnectTimeout.c)
 *     ndisSignalD0CompleteWorkItem @ 0x1C0065470 (ndisSignalD0CompleteWorkItem.c)
 *     ndisNdkPcwAddCounter @ 0x1C0067038 (ndisNdkPcwAddCounter.c)
 *     ndisNdkPcwEnumerateInstances @ 0x1C00671A8 (ndisNdkPcwEnumerateInstances.c)
 *     ndisPeriodicReceivesWorker @ 0x1C00691D0 (ndisPeriodicReceivesWorker.c)
 *     ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C006997C (-ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C0069A68 (-ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C0069BA4 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ndisSriovInterfaceDereference @ 0x1C006C480 (ndisSriovInterfaceDereference.c)
 *     NdisMIdleNotificationCompleteEx @ 0x1C006DC40 (NdisMIdleNotificationCompleteEx.c)
 *     ndisSSIdleTimerWorkItem @ 0x1C006F3C0 (ndisSSIdleTimerWorkItem.c)
 *     ndisSubmitIdleRequest @ 0x1C0070060 (ndisSubmitIdleRequest.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C0070E94 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0071040 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0071100 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C00719C4 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C007269C (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisTempRefTimerDpc@@YAXPEAX000@Z @ 0x1C0072970 (-ndisTempRefTimerDpc@@YAXPEAX000@Z.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00A69C8 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00A6DE0 (ndisWmiExecuteMethod.c)
 *     ndisWmiQueryAllData @ 0x1C00A72F4 (ndisWmiQueryAllData.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00B2380 (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ndisIfQueryBindingMiniportIfIndex @ 0x1C00B5BD0 (ndisIfQueryBindingMiniportIfIndex.c)
 *     ndisInitModeTimeoutWorkItem @ 0x1C00B8590 (ndisInitModeTimeoutWorkItem.c)
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00B8750 (ndisCancelInitModeTimeoutTimer.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C00BF110 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ndisMHaltMiniport @ 0x1C00BF938 (ndisMHaltMiniport.c)
 *     ndisPMAddRemoveAsync @ 0x1C00D5FF0 (ndisPMAddRemoveAsync.c)
 *     ndisPMRejectAsync @ 0x1C00D60D0 (ndisPMRejectAsync.c)
 *     ndisPdcTaskClientDisableTimeoutWorkItem @ 0x1C00D61F0 (ndisPdcTaskClientDisableTimeoutWorkItem.c)
 *     ndisQueuedUpdatePMCapabilities @ 0x1C00D6890 (ndisQueuedUpdatePMCapabilities.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00D8B84 (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C00D8DD8 (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ndisHandleBindNotification @ 0x1C00D93C4 (ndisHandleBindNotification.c)
 *     ndisQueuedStatusUnbindAdapter @ 0x1C00DC770 (ndisQueuedStatusUnbindAdapter.c)
 *     ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x1C00DD940 (-ndisMQueuedPromoteMiniport@@YAXPEAX@Z.c)
 *     ?ndisMUpdateInterfaceWorker@@YAXPEAX@Z @ 0x1C00DDB10 (-ndisMUpdateInterfaceWorker@@YAXPEAX@Z.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00DF620 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisMQueuedFreeSharedHandler @ 0x1C00E02E0 (ndisMQueuedFreeSharedHandler.c)
 *     ndisPnPIrpStopDevice @ 0x1C00E16DC (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C00E199C (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisQueuedReenumerateFailedAdapter @ 0x1C00E1AE0 (ndisQueuedReenumerateFailedAdapter.c)
 *     ndisWdfPostReleaseHardware @ 0x1C00E1BA8 (ndisWdfPostReleaseHardware.c)
 *     ndisMediaDisconnectWorker @ 0x1C00E1E10 (ndisMediaDisconnectWorker.c)
 *     ndisPowerIrpWorker @ 0x1C00E1FA0 (ndisPowerIrpWorker.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00E2244 (ndisWmiChangeSingleInstance.c)
 *     ndisNblTrackerWatchdogWorkerRoutine @ 0x1C00E32D0 (ndisNblTrackerWatchdogWorkerRoutine.c)
 *     ndisNdkPcwMiniportCleanup @ 0x1C00E43C0 (ndisNdkPcwMiniportCleanup.c)
 *     ndisNdkPcwRemoveCounter @ 0x1C00E44A0 (ndisNdkPcwRemoveCounter.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00E4B5C (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ndisOidPrePDCloseProvider @ 0x1C00EEF00 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00EF250 (ndisOidPrePDOpenProvider.c)
 *     ndisReferenceMiniportByName @ 0x1C00F5008 (ndisReferenceMiniportByName.c)
 *     ndisDevicePowerOn @ 0x1C00F5400 (ndisDevicePowerOn.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00F6BC8 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00F6D74 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ndisHandlePnPRequest @ 0x1C00F7108 (ndisHandlePnPRequest.c)
 *     NdisOpenAdapterEx @ 0x1C00F7950 (NdisOpenAdapterEx.c)
 *     ndisMOpenAdapter @ 0x1C00F7CE4 (ndisMOpenAdapter.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00F821C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00FA6C4 (ndisPnPIrpRemoveDevice.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FAB6C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisMFinishClose @ 0x1C00FBAD4 (ndisMFinishClose.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C01023B0 (ndisHandleProtocolReconfigNotification.c)
 *     ndisUnprocessAllMiniports @ 0x1C0102934 (ndisUnprocessAllMiniports.c)
 *     NdisMCmRegisterAddressFamily @ 0x1C0102CE0 (NdisMCmRegisterAddressFamily.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C0106F50 (NdisCmOpenAddressFamilyComplete.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C00505FC (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006C7A8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006C854 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisDereferenceMiniport(__int64 a1, unsigned __int8 a2)
{
  KIRQL v4; // al
  ULONG_PTR v5; // r8
  KIRQL v6; // bp
  __int64 v7; // rax
  unsigned __int8 v8; // r9
  unsigned __int8 v9; // dl
  int v10; // edi
  struct _KEVENT *v11; // rcx
  ULONG_PTR v12; // r9
  ULONG_PTR v13; // rdi
  unsigned int v14; // edx

  if ( (unsigned __int8)byte_1C009261B >= 4u )
    WPP_SF_q(25LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, a1);
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
        v12 = a2;
        v13 = v5 + ((unsigned __int64)a2 << 6);
        v14 = *(_DWORD *)(v13 + 64);
        if ( v14 >> 17 < 0x3FFE && (unsigned __int16)v14 >> 1 == (v14 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v13 + 8));
          *(_DWORD *)(v13 + 64) &= 0x10001u;
        }
        else
        {
          if ( (v14 & 0xFFFE) == 0 && (v14 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, v5, v12);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v13 + 8), 0);
        }
      }
    }
    else
    {
      v7 = *(_QWORD *)(v5 + 8);
      if ( v7 && (v8 = *(_BYTE *)(v5 + 3), v9 = 0, v8) )
      {
        while ( *(_BYTE *)(v7 + 2LL * v9) != a2 || !*(_BYTE *)(v7 + 2LL * v9 + 1) )
        {
          if ( ++v9 >= v8 )
            goto LABEL_10;
        }
        --*(_BYTE *)(v7 + 2LL * v9 + 1);
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
  if ( (unsigned __int8)byte_1C009261B >= 4u )
    WPP_SF_qD(14LL, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, a1, *(unsigned int *)(a1 + 4472));
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 4464), v6);
  if ( !v10 )
  {
    v11 = *(struct _KEVENT **)(a1 + 1608);
    if ( v11 )
      KeSetEvent(v11, 0, 0);
  }
  if ( (unsigned __int8)byte_1C009261B >= 4u )
    WPP_SF_q(26LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, a1);
}
