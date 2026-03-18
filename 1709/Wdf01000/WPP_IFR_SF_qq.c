/*
 * XREFs of WPP_IFR_SF_qq @ 0x1C00140BC
 * Callers:
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0001450 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     imp_WdfSpinLockRelease @ 0x1C0001750 (imp_WdfSpinLockRelease.c)
 *     imp_WdfTimerStop @ 0x1C0001C50 (imp_WdfTimerStop.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0002270 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C0002420 (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C0003610 (-Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z.c)
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0004F00 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0005DB0 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C0005E80 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C0006140 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0008210 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009360 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000B530 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000C290 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C000CC40 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C000DA0C (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C000DB60 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     imp_WdfWorkItemFlush @ 0x1C000E390 (imp_WdfWorkItemFlush.c)
 *     ?_PowerPolDevicePowerUpComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C000E500 (-_PowerPolDevicePowerUpComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STA.c)
 *     ?ComponentActiveCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1C000E880 (-ComponentActiveCallback@FxPoxInterface@@CAXPEAXK@Z.c)
 *     ?_WdmCancelRoutineInternal@FxIrpQueue@@CAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000FE40 (-_WdmCancelRoutineInternal@FxIrpQueue@@CAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0010260 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C0010AB0 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     ?OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoveOpenParams@@@Z @ 0x1C001368C (-OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoveOpe.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0013B2C (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C0018BEC (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     imp_WdfIoQueueCreate @ 0x1C0019080 (imp_WdfIoQueueCreate.c)
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001A730 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001AB6C (-ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C001BAB0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?AddDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z @ 0x1C001E680 (-AddDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z.c)
 *     ?AddChildList@FxDevice@@UEAAXPEAVFxChildList@@@Z @ 0x1C001E710 (-AddChildList@FxDevice@@UEAAXPEAVFxChildList@@@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C0020270 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0023468 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?WaitForDisposeEvent@FxIoTarget@@MEAAXXZ @ 0x1C0023610 (-WaitForDisposeEvent@FxIoTarget@@MEAAXXZ.c)
 *     ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0023958 (-CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C00239F0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?SelfDestruct@FxSyncRequest@@UEAAXXZ @ 0x1C00244E0 (-SelfDestruct@FxSyncRequest@@UEAAXXZ.c)
 *     FxIoTargetSendIoctl @ 0x1C0024710 (FxIoTargetSendIoctl.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x1C0025F30 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0026700 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0027E80 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C00280C0 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0028C18 (-DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1C0029588 (-AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C00296C0 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C002B380 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C002DA20 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C002F080 (-PowerPolStartingPoweredUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?QueueToThreadWorker@FxEventQueue@@IEAAEXZ @ 0x1C002F818 (-QueueToThreadWorker@FxEventQueue@@IEAAEXZ.c)
 *     ?ComponentIdleCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1C0030020 (-ComponentIdleCallback@FxPoxInterface@@CAXPEAXK@Z.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C0032C90 (imp_WdfDmaEnablerCreate.c)
 *     imp_WdfIoTargetGetDevice @ 0x1C003A9B0 (imp_WdfIoTargetGetDevice.c)
 *     imp_WdfIoTargetWdmGetTargetDeviceObject @ 0x1C003AB80 (imp_WdfIoTargetWdmGetTargetDeviceObject.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003CBC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C00640B8 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00646D8 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C0064980 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0064C74 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     imp_WdfDmaTransactionFreeResources @ 0x1C0066DE0 (imp_WdfDmaTransactionFreeResources.c)
 *     imp_WdfDmaTransactionSetImmediateExecution @ 0x1C0067730 (imp_WdfDmaTransactionSetImmediateExecution.c)
 *     imp_WdfDmaTransactionSetSingleTransferRequirement @ 0x1C0067830 (imp_WdfDmaTransactionSetSingleTransferRequirement.c)
 *     imp_WdfDmaTransactionWdmGetTransferContext @ 0x1C0067A70 (imp_WdfDmaTransactionWdmGetTransferContext.c)
 *     ?_AdapterControl@FxDmaPacketTransaction@@KA?AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX2@Z @ 0x1C0069FC0 (-_AdapterControl@FxDmaPacketTransaction@@KA-AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_I.c)
 *     imp_WdfChildListRequestChildEject @ 0x1C006DE60 (imp_WdfChildListRequestChildEject.c)
 *     ?ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C006FD2C (-ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?QueryInstance@FxWmiInstanceExternal@@MEAAJKPEAXPEAK@Z @ 0x1C0071BE0 (-QueryInstance@FxWmiInstanceExternal@@MEAAJKPEAXPEAK@Z.c)
 *     ?Dispose@FxCompanionTarget@@EEAAEXZ @ 0x1C00746D0 (-Dispose@FxCompanionTarget@@EEAAEXZ.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x1C007D234 (--1FxDevice@@UEAA@XZ.c)
 *     ??1FxDriver@@UEAA@XZ @ 0x1C007E438 (--1FxDriver@@UEAA@XZ.c)
 *     ?Unload@FxDriver@@SAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C007E5D0 (-Unload@FxDriver@@SAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?FlushAndRundown@FxTimer@@AEAAXXZ @ 0x1C007E95C (-FlushAndRundown@FxTimer@@AEAAXXZ.c)
 *     ?ReleaseOrReplaceThreadTableEntry@FxVerifierLock@@SAXPEAU_KTHREAD@@PEAV1@@Z @ 0x1C0082610 (-ReleaseOrReplaceThreadTableEntry@FxVerifierLock@@SAXPEAU_KTHREAD@@PEAV1@@Z.c)
 *     FxIoTargetSendIo @ 0x1C00867C0 (FxIoTargetSendIo.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0087410 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     imp_WdfIoTargetWdmGetTargetFileHandle @ 0x1C0087940 (imp_WdfIoTargetWdmGetTargetFileHandle.c)
 *     imp_WdfIoTargetWdmGetTargetFileObject @ 0x1C0087D70 (imp_WdfIoTargetWdmGetTargetFileObject.c)
 *     imp_WdfIoTargetWdmGetTargetPhysicalDevice @ 0x1C0087E30 (imp_WdfIoTargetWdmGetTargetPhysicalDevice.c)
 *     ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C008833C (-HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?PrintDisposeMessage@FxIoTarget@@IEAAXXZ @ 0x1C008851C (-PrintDisposeMessage@FxIoTarget@@IEAAXXZ.c)
 *     ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0088870 (-SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0088A88 (-TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C0089CE0 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeFormatRequestForAbort @ 0x1C008A120 (imp_WdfUsbTargetPipeFormatRequestForAbort.c)
 *     imp_WdfUsbTargetPipeFormatRequestForReset @ 0x1C008A2A0 (imp_WdfUsbTargetPipeFormatRequestForReset.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1C008A810 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C008A9E0 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1C008B1D0 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C008CD90 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C008F770 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 *     ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x1C00962E4 (-ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C00969D4 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?PnpEventEjectHardwareOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C0098520 (-PnpEventEjectHardwareOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 *     ?PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C0098730 (-PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 *     ?DisconnectInterruptNP@FxPkgPnp@@AEAAXXZ @ 0x1C009AFB4 (-DisconnectInterruptNP@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerWakingConnectInterruptFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009C1E0 (-PowerWakingConnectInterruptFailedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C009CC3C (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C009E054 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 *     ?RemoveChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z @ 0x1C009E188 (-RemoveChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z.c)
 *     ?_PnpRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C009E6B0 (-_PnpRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?RemoveDmaEnabler@FxPkgPnp@@QEAAXPEAVFxDmaEnabler@@@Z @ 0x1C009F738 (-RemoveDmaEnabler@FxPkgPnp@@QEAAXPEAVFxDmaEnabler@@@Z.c)
 *     ?SetDelayedDeletion@FxEventQueue@@QEAAXXZ @ 0x1C00A2AAC (-SetDelayedDeletion@FxEventQueue@@QEAAXXZ.c)
 *     ?PowerControlCallback@FxPoxInterface@@CAJPEAXPEBU_GUID@@0_K02PEA_K@Z @ 0x1C00A3B40 (-PowerControlCallback@FxPoxInterface@@CAJPEAXPEBU_GUID@@0_K02PEA_K@Z.c)
 *     ?StateCallback@FxPoxInterface@@CAXPEAXKK@Z @ 0x1C00A3C80 (-StateCallback@FxPoxInterface@@CAXPEAXKK@Z.c)
 *     ?Vf_VerifyPreProcessSendAndForget@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D81D8 (-Vf_VerifyPreProcessSendAndForget@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyDispose@FxRequestBase@@IEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D89B4 (-Vf_VerifyDispose@FxRequestBase@@IEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyCancelForDriver@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D8F5C (-Vf_VerifyCancelForDriver@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D976C (-Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C000CF30 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C006EA34 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int flags,
        unsigned __int16 id,
        const _GUID *traceGuid,
        const void *_a1,
        const void *_a2)
{
  int v11; // eax
  unsigned __int64 v12; // rbx

  v11 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)flags >> 16) + (((flags - 1) >> 5) & 0x7FF));
  if ( _bittest(&v11, (flags - 1) & 0x1F) )
  {
    v12 = (unsigned __int64)flags >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v12 + 1) >= level )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v12),
        0x2Bu,
        traceGuid,
        id,
        &_a1,
        8LL,
        &_a2,
        8LL,
        0LL);
  }
  FxIFR(globals, level, flags, traceGuid, id, &_a1, 8LL, &_a2, 8LL, 0LL);
}
