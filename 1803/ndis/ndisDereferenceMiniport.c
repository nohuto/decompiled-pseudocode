/*
 * XREFs of ndisDereferenceMiniport @ 0x1C0009F08
 * Callers:
 *     ndisInterruptDpc @ 0x1C0003D80 (ndisInterruptDpc.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C0007AB0 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisMWakeUpDpcX @ 0x1C0008990 (ndisMWakeUpDpcX.c)
 *     ndisCreateHandler @ 0x1C00098C0 (ndisCreateHandler.c)
 *     ndisCloseIrpHandler @ 0x1C0009DD0 (ndisCloseIrpHandler.c)
 *     ndisCompleteWaitWake @ 0x1C0010704 (ndisCompleteWaitWake.c)
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C001167C (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     NdisFreeIoWorkItem @ 0x1C00146D0 (NdisFreeIoWorkItem.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C001AE5C (ndisCancelMediaDisconnectTimer.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C001D470 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisQueueRequestWorkItem @ 0x1C001F230 (ndisQueueRequestWorkItem.c)
 *     ndisDoOidRequests @ 0x1C001F670 (ndisDoOidRequests.c)
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0021158 (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0023FC0 (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 *     NdisAllocateIoWorkItem @ 0x1C0024400 (NdisAllocateIoWorkItem.c)
 *     ?ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z @ 0x1C0024EFC (-ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z.c)
 *     ndisAllocateReceiveQueue @ 0x1C003AA8C (ndisAllocateReceiveQueue.c)
 *     ndisDereferenceReceiveFilter @ 0x1C003B1A0 (ndisDereferenceReceiveFilter.c)
 *     ndisDereferenceReceiveQueue @ 0x1C003B378 (ndisDereferenceReceiveQueue.c)
 *     ndisSetReceiveFilter @ 0x1C003C958 (ndisSetReceiveFilter.c)
 *     NdisMAllocatePort @ 0x1C003D230 (NdisMAllocatePort.c)
 *     NdisMFreePort @ 0x1C003D570 (NdisMFreePort.c)
 *     ndisDoDirectOidRequest @ 0x1C0044A5C (ndisDoDirectOidRequest.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0045BB0 (ndisMOidRequestCompleteInternal.c)
 *     ndisProcessRequestAsync @ 0x1C0047EB0 (ndisProcessRequestAsync.c)
 *     ndisPMPDCTaskClient @ 0x1C004AE10 (ndisPMPDCTaskClient.c)
 *     ndisSetPdcTaskClientExpiryTimer @ 0x1C004B6FC (ndisSetPdcTaskClientExpiryTimer.c)
 *     ndisDmaAddCpuNotify @ 0x1C004BFF4 (ndisDmaAddCpuNotify.c)
 *     ndisCsResiliencyCallback @ 0x1C004FB30 (ndisCsResiliencyCallback.c)
 *     ndisEnableWppTracingCallback @ 0x1C004FC24 (ndisEnableWppTracingCallback.c)
 *     ndisWnfPdcCallback @ 0x1C0050860 (ndisWnfPdcCallback.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C0051C90 (NdisClOpenAddressFamilyEx.c)
 *     NdisMCmRegisterAddressFamilyEx @ 0x1C0052650 (NdisMCmRegisterAddressFamilyEx.c)
 *     NdisEnumerateFilterModules @ 0x1C0058770 (NdisEnumerateFilterModules.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005BDEC (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005CC08 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisCleanupUserOpenContext @ 0x1C005D7EC (ndisCleanupUserOpenContext.c)
 *     NdisMResetMiniport @ 0x1C005EF20 (NdisMResetMiniport.c)
 *     ndisQueuedResetMiniport @ 0x1C00619C0 (ndisQueuedResetMiniport.c)
 *     ndisMQueuedAllocateSharedHandler @ 0x1C00626D0 (ndisMQueuedAllocateSharedHandler.c)
 *     ndis5QueuedMiniportDpcWorkItem @ 0x1C0062E70 (ndis5QueuedMiniportDpcWorkItem.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C00653F0 (NdisMReenumerateFailedAdapter.c)
 *     ndisMediaDisconnectTimeout @ 0x1C0066380 (ndisMediaDisconnectTimeout.c)
 *     ndisSignalD0CompleteWorkItem @ 0x1C0066690 (ndisSignalD0CompleteWorkItem.c)
 *     ndisNdkPcwAddCounter @ 0x1C00683E8 (ndisNdkPcwAddCounter.c)
 *     ndisNdkPcwEnumerateInstances @ 0x1C0068558 (ndisNdkPcwEnumerateInstances.c)
 *     ndisPeriodicReceivesWorker @ 0x1C006B250 (ndisPeriodicReceivesWorker.c)
 *     ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C006B80C (-ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C006B8F8 (-ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ndisSriovInterfaceDereference @ 0x1C006E230 (ndisSriovInterfaceDereference.c)
 *     NdisMIdleNotificationCompleteEx @ 0x1C006FB80 (NdisMIdleNotificationCompleteEx.c)
 *     ndisSSIdleTimerWorkItem @ 0x1C0071390 (ndisSSIdleTimerWorkItem.c)
 *     ndisSubmitIdleRequest @ 0x1C0072098 (ndisSubmitIdleRequest.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C0072FFC (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0073210 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00732F0 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C0073D08 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0074A60 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisTempRefTimerDpc@@YAXPEAX000@Z @ 0x1C0074D30 (-ndisTempRefTimerDpc@@YAXPEAX000@Z.c)
 *     ndisWmiQueryAllData @ 0x1C00AC238 (ndisWmiQueryAllData.c)
 *     ndisWmiExecuteMethod @ 0x1C00AC874 (ndisWmiExecuteMethod.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00AD358 (ndisWmiQuerySingleInstance.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00B1284 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00B1B84 (ndisPnPIrpRemoveDevice.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C00B25B0 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ndisMHaltMiniport @ 0x1C00B2E4C (ndisMHaltMiniport.c)
 *     ndisIfQueryBindingMiniportIfIndex @ 0x1C00BFA90 (ndisIfQueryBindingMiniportIfIndex.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00BFEA8 (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ndisInitModeTimeoutWorkItem @ 0x1C00C2280 (ndisInitModeTimeoutWorkItem.c)
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00C2688 (ndisCancelInitModeTimeoutTimer.c)
 *     ndisPMAddRemoveAsync @ 0x1C00E1C60 (ndisPMAddRemoveAsync.c)
 *     ndisPMRejectAsync @ 0x1C00E1D40 (ndisPMRejectAsync.c)
 *     ndisPdcTaskClientDisableTimeoutWorkItem @ 0x1C00E1E60 (ndisPdcTaskClientDisableTimeoutWorkItem.c)
 *     ndisQueuedUpdatePMCapabilities @ 0x1C00E24D0 (ndisQueuedUpdatePMCapabilities.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00E46B0 (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C00E490C (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ndisHandleBindNotification @ 0x1C00E4EE4 (ndisHandleBindNotification.c)
 *     ndisQueuedStatusUnbindAdapter @ 0x1C00E8000 (ndisQueuedStatusUnbindAdapter.c)
 *     ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x1C00E92A0 (-ndisMQueuedPromoteMiniport@@YAXPEAX@Z.c)
 *     ?ndisMUpdateInterfaceWorker@@YAXPEAX@Z @ 0x1C00E94A0 (-ndisMUpdateInterfaceWorker@@YAXPEAX@Z.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00EB410 (NdisIMDeInitializeDeviceInstance.c)
 *     NdisLWMStartNetworkInterface @ 0x1C00EBA00 (NdisLWMStartNetworkInterface.c)
 *     NdisLWMUninitializeNetworkInterface @ 0x1C00EBB10 (NdisLWMUninitializeNetworkInterface.c)
 *     ndisMQueuedFreeSharedHandler @ 0x1C00ECAF0 (ndisMQueuedFreeSharedHandler.c)
 *     ndisPnPIrpStopDevice @ 0x1C00EE11C (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C00EE3E8 (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisQueuedReenumerateFailedAdapter @ 0x1C00EE540 (ndisQueuedReenumerateFailedAdapter.c)
 *     ndisWdfPostReleaseHardware @ 0x1C00EE600 (ndisWdfPostReleaseHardware.c)
 *     ndisMediaDisconnectWorker @ 0x1C00EE880 (ndisMediaDisconnectWorker.c)
 *     ndisPowerIrpWorker @ 0x1C00EEA20 (ndisPowerIrpWorker.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EEE20 (ndisWmiChangeSingleInstance.c)
 *     ndisNblTrackerWatchdogWorkerRoutine @ 0x1C00F0020 (ndisNblTrackerWatchdogWorkerRoutine.c)
 *     ndisNdkPcwMiniportCleanup @ 0x1C00F1078 (ndisNdkPcwMiniportCleanup.c)
 *     ndisNdkPcwRemoveCounter @ 0x1C00F1170 (ndisNdkPcwRemoveCounter.c)
 *     ndisOidPrePDCloseProvider @ 0x1C00FB0D0 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00FB420 (ndisOidPrePDOpenProvider.c)
 *     ndisHandlePnPRequest @ 0x1C0100008 (ndisHandlePnPRequest.c)
 *     ndisReferenceMiniportByName @ 0x1C01003B4 (ndisReferenceMiniportByName.c)
 *     ndisDevicePowerOn @ 0x1C0100560 (ndisDevicePowerOn.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0101C04 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0102D7C (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisMFinishClose @ 0x1C0102F48 (ndisMFinishClose.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C01033D4 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01036D4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     NdisOpenAdapterEx @ 0x1C0104520 (NdisOpenAdapterEx.c)
 *     ndisMOpenAdapter @ 0x1C01048C0 (ndisMOpenAdapter.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C010D2D0 (ndisHandleProtocolReconfigNotification.c)
 *     ndisUnprocessAllMiniports @ 0x1C010D854 (ndisUnprocessAllMiniports.c)
 *     NdisMCmRegisterAddressFamily @ 0x1C010DC00 (NdisMCmRegisterAddressFamily.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C0111F70 (NdisCmOpenAddressFamilyComplete.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006E628 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006E6D4 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisDereferenceMiniport(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  KIRQL v6; // al
  ULONG_PTR v7; // r8
  KIRQL v8; // bp
  __int64 v9; // rcx
  unsigned __int8 v10; // r10
  unsigned __int8 v11; // dl
  int v12; // edi
  __int64 v13; // r9
  char v14; // al
  struct _KEVENT *v15; // rcx
  ULONG_PTR v16; // r9
  ULONG_PTR v17; // rdi
  unsigned int v18; // edx
  int v19; // ecx

  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_q(25LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, a1, a4);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4464));
  v7 = *(_QWORD *)(a1 + 4920);
  v8 = v6;
  if ( v7 )
  {
    if ( v7 - 2 <= 1 )
    {
      v7 = 0LL;
    }
    else if ( v7 == 1 )
    {
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    }
    if ( v7 )
    {
      if ( a2 == 0xFF )
      {
        if ( (*(_BYTE *)v7 & 2) == 0 )
          ndisBugCheckEx(0x1EuLL, 0LL, v7, 0xFFuLL);
        *(_BYTE *)v7 &= ~2u;
      }
      else
      {
        if ( a2 >= *(_BYTE *)(v7 + 2) )
          ndisBugCheckEx(0x1EuLL, 2uLL, v7, a2);
        if ( *(_BYTE *)(v7 + 1) )
        {
          if ( *(_BYTE *)(v7 + 1) == 1 )
          {
            v16 = a2;
            v17 = v7 + ((unsigned __int64)a2 << 6);
            v18 = *(_DWORD *)(v17 + 64);
            v19 = (unsigned __int16)v18 >> 1;
            if ( v18 >> 17 < 0x3FFE && v19 == (v18 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v17 + 8));
              *(_DWORD *)(v17 + 64) &= 0x10001u;
            }
            else
            {
              if ( v19 == 0 && (v18 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v7, v16);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v17 + 8), 0);
            }
          }
        }
        else
        {
          v9 = *(_QWORD *)(v7 + 8);
          if ( v9 && (v10 = *(_BYTE *)(v7 + 3), v11 = 0, v10) )
          {
            while ( 1 )
            {
              if ( *(_BYTE *)(v9 + 2LL * v11) == a2 )
              {
                v14 = *(_BYTE *)(v9 + 2LL * v11 + 1);
                if ( v14 )
                  break;
              }
              if ( ++v11 >= v10 )
                goto LABEL_14;
            }
            *(_BYTE *)(v9 + 2LL * v11 + 1) = v14 - 1;
          }
          else
          {
LABEL_14:
            if ( !_bittestandreset((signed __int32 *)(v7 + 16), a2) )
              ndisBugCheckEx(0x1EuLL, 0LL, v7, a2);
          }
        }
      }
    }
  }
  v12 = *(_DWORD *)(a1 + 4472) - 1;
  *(_DWORD *)(a1 + 4472) = v12;
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_qD(14LL, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, a1, *(unsigned int *)(a1 + 4472));
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 4464), v8);
  if ( !v12 )
  {
    v15 = *(struct _KEVENT **)(a1 + 1608);
    if ( v15 )
      KeSetEvent(v15, 0, 0);
  }
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_q(26LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, a1, v13);
}
