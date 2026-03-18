/*
 * XREFs of ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001FD44
 * Callers:
 *     imp_WdfIoQueueFindRequest @ 0x1C00025E0 (imp_WdfIoQueueFindRequest.c)
 *     imp_WdfRequestSend @ 0x1C0004650 (imp_WdfRequestSend.c)
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00072B0 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0008210 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0008980 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009360 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000CA10 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C000D6E4 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C000D760 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C000D8D4 (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C000DB60 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?_IrpCancelForDriver@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x1C000FEE0 (-_IrpCancelForDriver@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0010260 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C00108F8 (-InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C0010AB0 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0013178 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001A730 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x1C001C5F4 (-RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z.c)
 *     ?InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z @ 0x1C001E23C (-InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z.c)
 *     ?Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0021B40 (-Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ @ 0x1C00230C0 (-PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ.c)
 *     ?GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C00233E8 (-GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0026700 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C00272F0 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x1C002A5E0 (-PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ.c)
 *     ?RemoveLocked@FxTransactionedList@@IEAAEPEAUFxTransactionedEntry@@@Z @ 0x1C002E9C8 (-RemoveLocked@FxTransactionedList@@IEAAEPEAUFxTransactionedEntry@@@Z.c)
 *     ?Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x1C0030640 (-Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z.c)
 *     ??0FxWmiInstance@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxWmiProvider@@@Z @ 0x1C00310E8 (--0FxWmiInstance@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxWmiProvider@@@Z.c)
 *     ?Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0035C28 (-Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 *     ?PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0063E54 (-PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C0064510 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00646D8 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z @ 0x1C0065228 (-GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z.c)
 *     ?PeekRequest@FxIrpQueue@@QEAAJPEAU_IO_CSQ_IRP_CONTEXT@@PEAU_FILE_OBJECT@@PEAPEAVFxRequest@@@Z @ 0x1C00656AC (-PeekRequest@FxIrpQueue@@QEAAJPEAU_IO_CSQ_IRP_CONTEXT@@PEAU_FILE_OBJECT@@PEAPEAVFxRequest@@@Z.c)
 *     ?AddRefOverride@FxObject@@UEAAKGPEAXJPEBD@Z @ 0x1C0067E40 (-AddRefOverride@FxObject@@UEAAKGPEAXJPEBD@Z.c)
 *     ?StageTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C00694E0 (-StageTransfer@FxDmaPacketTransaction@@UEAAJXZ.c)
 *     ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C006B5F0 (-_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@P.c)
 *     ?Execute@FxDmaTransactionBase@@QEAAJPEAX@Z @ 0x1C006C6A4 (-Execute@FxDmaTransactionBase@@QEAAJPEAX@Z.c)
 *     ?Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C006EEB8 (-Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWD.c)
 *     ?GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x1C007162C (-GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z.c)
 *     ?AddRefOverride@FxRequest@@UEAAKGPEAXJPEBD@Z @ 0x1C007C030 (-AddRefOverride@FxRequest@@UEAAKGPEAXJPEBD@Z.c)
 *     ?PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C007C14C (-PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     ?PreProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C007C1B0 (-PreProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@.c)
 *     ??0FxMemoryBufferFromLookaside@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KG@Z @ 0x1C007FD1C (--0FxMemoryBufferFromLookaside@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KG@Z.c)
 *     ??0FxMemoryBufferFromLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_K@Z @ 0x1C007FD7C (--0FxMemoryBufferFromLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_K@Z.c)
 *     ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x1C00860F4 (-AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C00899F0 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 *     ?GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C008E7F0 (-GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z.c)
 *     ?IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z @ 0x1C0091A1C (-IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z.c)
 *     ?Start@FxUsbDevice@@MEAAJXZ @ 0x1C00927D0 (-Start@FxUsbDevice@@MEAAJXZ.c)
 *     ??0FxUsbInterface@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C0092B34 (--0FxUsbInterface@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@PEAU_USB_INTERFACE_DESCRIPTOR@@.c)
 *     ?SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z @ 0x1C00938CC (-SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z.c)
 *     GetIoQueueList_ProcessQueueListEntry @ 0x1C00959CC (GetIoQueueList_ProcessQueueListEntry.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C00969D4 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0097128 (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?_IrpCancelForQueue@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x1C0097320 (-_IrpCancelForQueue@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z.c)
 *     ?CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z @ 0x1C009CBA0 (-CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z.c)
 *     ?_PnpRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C009E6B0 (-_PnpRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?CreateThread@FxSystemThread@@AEAAJXZ @ 0x1C00A5678 (-CreateThread@FxSystemThread@@AEAAJXZ.c)
 *     VfAddContextToHandle @ 0x1C00D5F8C (VfAddContextToHandle.c)
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxObject::AddRef(FxObject *this, void *Tag, int Line, const char *File)
{
  unsigned int RefCount; // ebx
  FxTagTracker *m_Lock; // rcx

  RefCount = _InterlockedIncrement(&this->m_Refcnt);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
    m_Lock = (FxTagTracker *)this[-1].m_SpinLock.m_Lock;
  else
    m_Lock = 0LL;
  if ( m_Lock )
    FxTagTracker::UpdateTagHistory(m_Lock, Tag, Line, File, TagAddRef, RefCount);
  return RefCount;
}
