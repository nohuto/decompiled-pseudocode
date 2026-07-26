/*
 * XREFs of ndisPnPIrpRemoveDevice @ 0x1C00B1B84
 * Callers:
 *     ndisPnPDispatch @ 0x1C00C6470 (ndisPnPDispatch.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00EC2B0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C00094EC (-ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisDereferenceDriver @ 0x1C00123AC (ndisDereferenceDriver.c)
 *     ndisRemoveMiniportFromGlobalList @ 0x1C0012768 (ndisRemoveMiniportFromGlobalList.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C00127CC (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ndisDereferenceDmaAdapter @ 0x1C00130C4 (ndisDereferenceDmaAdapter.c)
 *     ndisLogMiniportEvent @ 0x1C001A1D4 (ndisLogMiniportEvent.c)
 *     ndisIsMiniportStarted @ 0x1C001AB20 (ndisIsMiniportStarted.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C0024678 (ndisReferenceMiniportNoCheck.c)
 *     WPP_SF_qZ @ 0x1C00499F4 (WPP_SF_qZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C007EA58 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ndisPowerSaveStop @ 0x1C00B11E8 (ndisPowerSaveStop.c)
 *     ndisPnPRemoveDeviceEx @ 0x1C00B1DD0 (ndisPnPRemoveDeviceEx.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00B21A0 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ?Disarm@NdisWatchdogState@@QEAAXXZ @ 0x1C00B2CD8 (-Disarm@NdisWatchdogState@@QEAAXXZ.c)
 *     ndisWakeUpDevice @ 0x1C00E35E0 (ndisWakeUpDevice.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C0102828 (ndisDeQueueMiniportOnDriver.c)
 */

__int64 __fastcall ndisPnPIrpRemoveDevice(
        PDEVICE_OBJECT DeviceObject,
        struct _NDIS_MINIPORT_BLOCK *a2,
        PIRP Irp,
        _BYTE *a4,
        _BYTE *a5)
{
  unsigned int v9; // esi
  __int64 v10; // r8
  __int64 v11; // r9
  bool v12; // zf
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  NDISWATCHDOG__ *m_ptr; // rcx
  struct _NDIS_REFCOUNT_BLOCK *v15; // rax
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rcx
  __int64 result; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v9 = 0;
  if ( (unsigned __int8)byte_1C0099610 >= 4u )
    WPP_SF_qZ(0x25u, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, (__int64)a2, &a2->pAdapterInstanceName->Length);
  ndisLogMiniportEvent((__int64)a2, 0x23u);
  if ( (a2->Flags & 4) == 0 )
  {
    NdisTraceLoggingDeviceRemoved();
    ndisPowerSaveStop(a2, 2);
    KeWaitForSingleObject(&a2->PowerD0CompleteEvent, Executive, 0, 0, 0LL);
    if ( (a2->PnPFlags & 0x100) == 0 && a2->CurrentDevicePowerState > PowerDeviceD0 )
      v9 = ndisWakeUpDevice(a2);
    ndisReferenceMiniportNoCheck((__int64)a2, 0x1Eu);
  }
  if ( !a2->Ref.ReferenceCount )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v12 = a2->PnPDeviceState == NdisPnPDeviceRemoved;
  a2->RemoveReadyEvent = &Event;
  if ( !v12 )
    ndisPnPRemoveDeviceEx(a2);
  if ( Irp )
    Irp->IoStatus.Status = v9;
  ndisDereferenceMiniport((__int64)a2, 0x1Eu, v10, v11);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  DriverHandle = a2->DriverHandle;
  a2->RemoveReadyEvent = 0LL;
  if ( DriverHandle->HookType == NdisMiniportHookDriverTypeWdi && !ndisBugCheckOnReenumerationTimeout )
  {
    m_ptr = a2->ReenumerateWatchdog.m_ptr;
    if ( m_ptr != (NDISWATCHDOG__ *)-1LL )
    {
      v15 = ndisRefCountHandleFromRefCountBlock((struct _NDIS_REFCOUNT_BLOCK *)m_ptr);
      NdisWatchdogState::Disarm((NdisWatchdogState *)v15);
    }
  }
  MiniportSGDmaBlock = a2->MiniportSGDmaBlock;
  if ( MiniportSGDmaBlock && MiniportSGDmaBlock->DmaAdapterRefCount == 1 && (a2->Flags & 0x40) != 0 )
  {
    MiniportSGDmaBlock->DmaResourcesReleasedEvent = 0LL;
    ndisDereferenceDmaAdapter(a2->MiniportSGDmaBlock);
    a2->Flags &= ~0x40u;
  }
  if ( ndisIsMiniportStarted(a2) )
  {
    ndisDeQueueMiniportOnDriver(a2, a2->DriverHandle);
    ndisDereferenceDriver((__int64)a2->DriverHandle, 0);
    if ( (a2->Flags & 0x20000) != 0 )
    {
      MmUnlockPagableImageSection(qword_1C0098080);
      _InterlockedDecrement(&dword_1C0098070);
    }
  }
  ndisRemoveMiniportFromGlobalList(a2);
  if ( Irp )
  {
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v9 = IofCallDriver(a2->NextDeviceObject, Irp);
    IoDetachDevice(a2->NextDeviceObject);
    IoDeleteDevice(DeviceObject);
  }
  ndisMDeleteMiniportBlockOnRemove(a2);
  *a5 = 0;
  result = v9;
  *a4 = 0;
  return result;
}
