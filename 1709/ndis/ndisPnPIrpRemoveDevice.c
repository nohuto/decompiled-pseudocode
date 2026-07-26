/*
 * XREFs of ndisPnPIrpRemoveDevice @ 0x1C00FE008
 * Callers:
 *     ndisPnPDispatch @ 0x1C00C0CB0 (ndisPnPDispatch.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00E9D70 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ndisDereferenceDriver @ 0x1C00016D8 (ndisDereferenceDriver.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C0001ABC (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ndisDereferenceDmaAdapter @ 0x1C0001F54 (ndisDereferenceDmaAdapter.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C0002848 (ndisReferenceMiniportNoCheck.c)
 *     ndisIsMiniportStarted @ 0x1C0008960 (ndisIsMiniportStarted.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ndisLogMiniportEvent @ 0x1C00111C8 (ndisLogMiniportEvent.c)
 *     WPP_SF_qZ @ 0x1C00485F8 (WPP_SF_qZ.c)
 *     ndisPnPRemoveDeviceEx @ 0x1C00AA814 (ndisPnPRemoveDeviceEx.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00AAA48 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ndisDereferencePackage @ 0x1C00B837C (ndisDereferencePackage.c)
 *     ndisPowerSaveStop @ 0x1C00C61B0 (ndisPowerSaveStop.c)
 *     ndisWakeUpDevice @ 0x1C00E1F20 (ndisWakeUpDevice.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C00FF048 (ndisDeQueueMiniportOnDriver.c)
 */

__int64 __fastcall ndisPnPIrpRemoveDevice(
        PDEVICE_OBJECT DeviceObject,
        struct _NDIS_MINIPORT_BLOCK *a2,
        PIRP Irp,
        _BYTE *a4,
        _BYTE *a5)
{
  unsigned int v9; // esi
  bool v10; // zf
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rcx
  KIRQL v12; // al
  struct _NDIS_MINIPORT_BLOCK **p_NextGlobalMiniport; // rcx
  struct _NDIS_MINIPORT_BLOCK *v14; // rdx
  __int64 result; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v9 = 0;
  if ( (unsigned __int8)byte_1C0098750 >= 4u )
    WPP_SF_qZ(0x25u, &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids, (__int64)a2, &a2->pAdapterInstanceName->Length);
  ndisLogMiniportEvent((__int64)a2, 0x23u);
  if ( (a2->Flags & 4) == 0 )
  {
    NdisTraceLoggingDeviceRemoved();
    ndisPowerSaveStop(a2, 2);
    KeWaitForSingleObject(&a2->PowerD0CompleteEvent, Executive, 0, 0, 0LL);
    if ( (a2->PnPFlags & 0x100) == 0 && a2->CurrentDevicePowerState > PowerDeviceD0 )
      v9 = ndisWakeUpDevice((__int64)a2);
  }
  ndisReferenceMiniportNoCheck((__int64)a2);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v10 = a2->PnPDeviceState == NdisPnPDeviceRemoved;
  a2->RemoveReadyEvent = &Event;
  if ( !v10 )
    ndisPnPRemoveDeviceEx((ULONG_PTR)a2);
  if ( Irp )
    Irp->IoStatus.Status = v9;
  ndisDereferenceMiniport((__int64)a2, 0x1Eu);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  MiniportSGDmaBlock = a2->MiniportSGDmaBlock;
  a2->RemoveReadyEvent = 0LL;
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
      ndisDereferencePackage((__int64)&dword_1C0097378);
  }
  v12 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  p_NextGlobalMiniport = &ndisMiniportList;
  if ( ndisMiniportList )
  {
    while ( 1 )
    {
      v14 = *p_NextGlobalMiniport;
      if ( *p_NextGlobalMiniport == a2 )
        break;
      p_NextGlobalMiniport = &v14->NextGlobalMiniport;
      if ( !v14->NextGlobalMiniport )
        goto LABEL_18;
    }
    *p_NextGlobalMiniport = a2->NextGlobalMiniport;
  }
LABEL_18:
  KeReleaseSpinLock(&ndisMiniportListLock, v12);
  if ( Irp )
  {
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v9 = IofCallDriver(a2->NextDeviceObject, Irp);
    IoDetachDevice(a2->NextDeviceObject);
    IoDeleteDevice(DeviceObject);
  }
  ndisMDeleteMiniportBlockOnRemove((__int64)a2);
  *a5 = 0;
  result = v9;
  *a4 = 0;
  return result;
}
