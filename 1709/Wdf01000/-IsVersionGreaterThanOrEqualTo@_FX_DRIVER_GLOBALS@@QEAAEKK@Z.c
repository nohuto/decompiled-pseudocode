/*
 * XREFs of ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0016B8C
 * Callers:
 *     imp_WdfRequestGetFileObject @ 0x1C0001340 (imp_WdfRequestGetFileObject.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0001450 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     imp_WdfTimerStop @ 0x1C0001C50 (imp_WdfTimerStop.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000B530 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C000DB60 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C0010AB0 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0013178 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     imp_WdfIoTargetOpen @ 0x1C00132C0 (imp_WdfIoTargetOpen.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0013B2C (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     imp_WdfTimerCreate @ 0x1C00142C0 (imp_WdfTimerCreate.c)
 *     FxRegistrySettingsInitialize @ 0x1C0015F60 (FxRegistrySettingsInitialize.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0018820 (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ?AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z @ 0x1C001B918 (-AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z.c)
 *     ?GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C00234D0 (-GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x1C0025F30 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 *     ?ConfigureConstraints@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C0026110 (-ConfigureConstraints@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00263F0 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA?AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C0028830 (-PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA-AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POW.c)
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C002A160 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C0032C90 (imp_WdfDmaEnablerCreate.c)
 *     ?ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CONFIG@@@Z @ 0x1C0033638 (-ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CON.c)
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C00338D8 (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 *     imp_WdfDeviceWdmDispatchPreprocessedIrp @ 0x1C0034200 (imp_WdfDeviceWdmDispatchPreprocessedIrp.c)
 *     imp_WdfInterruptCreate @ 0x1C00352C0 (imp_WdfInterruptCreate.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C0064980 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?BuildScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z55K@Z @ 0x1C006AC78 (-BuildScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@.c)
 *     ?StopTransfer@FxDmaSystemTransaction@@QEAAXXZ @ 0x1C006BC60 (-StopTransfer@FxDmaSystemTransaction@@QEAAXXZ.c)
 *     ?Dispose@FxDmaTransactionBase@@UEAAEXZ @ 0x1C006C2A0 (-Dispose@FxDmaTransactionBase@@UEAAEXZ.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C006CF10 (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     imp_WdfRequestProbeAndLockUserBufferForRead @ 0x1C0078B80 (imp_WdfRequestProbeAndLockUserBufferForRead.c)
 *     imp_WdfRequestProbeAndLockUserBufferForWrite @ 0x1C0078CE0 (imp_WdfRequestProbeAndLockUserBufferForWrite.c)
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C008E3E0 (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?GotoRemoveState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x1C008E6C0 (-GotoRemoveState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY.c)
 *     ?GotoStopState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C008E950 (-GotoStopState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z.c)
 *     ?PnpEventEjectHardwareOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C0098520 (-PnpEventEjectHardwareOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 *     ?PnpEventFailedPowerPolicyRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0098D30 (-PnpEventFailedPowerPolicyRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventQueryRemoveAskDriver@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0099160 (-PnpEventQueryRemoveAskDriver@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventQueryStopAskDriver@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00993F0 (-PnpEventQueryStopAskDriver@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpReleaseHardware@FxPkgPnp@@IEAAJXZ @ 0x1C0099EA0 (-PnpReleaseHardware@FxPkgPnp@@IEAAJXZ.c)
 *     ?SetDeviceFailed@FxPkgPnp@@QEAAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_DEVICE_FAILED_ACTION@@@Z @ 0x1C009E298 (-SetDeviceFailed@FxPkgPnp@@QEAAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_DEVICE_FAILED_ACTION@@@Z.c)
 *     Vf_VerifyWdfRequestForwardToIoQueue @ 0x1C00D7D08 (Vf_VerifyWdfRequestForwardToIoQueue.c)
 *     Vf_VerifyWdfRequestForwardToParentDeviceIoQueue @ 0x1C00D7DA0 (Vf_VerifyWdfRequestForwardToParentDeviceIoQueue.c)
 *     ?Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D7F3C (-Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8338 (-Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C00D8A60 (-Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_C.c)
 *     ?Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D93FC (-Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(
        _FX_DRIVER_GLOBALS *this,
        unsigned int Minor,
        unsigned int a3)
{
  _WDF_BIND_INFO *WdfBindInfo; // rax
  unsigned int Major; // ecx

  WdfBindInfo = this->WdfBindInfo;
  Major = WdfBindInfo->Version.Major;
  return Major > 1 || Major == 1 && WdfBindInfo->Version.Minor >= a3;
}
