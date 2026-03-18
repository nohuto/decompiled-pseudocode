/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C0051A08
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX0KPEAUtagINPUTDEST@@@Z @ 0x1C000103C (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX0KPEAUtagINPUTDEST@@@Z.c)
 *     RIMAllocateHidConfigDesc @ 0x1C00079F4 (RIMAllocateHidConfigDesc.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C0008310 (RIMGetMaxCountFeatureDetails.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C0008900 (RIMReleasePointerDeviceInfo.c)
 *     RIMGetDeviceParent @ 0x1C00098C8 (RIMGetDeviceParent.c)
 *     ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C0047B34 (-ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z.c)
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@1@AEBUIOCPWCP_KeyContext@1@@Z @ 0x1C004C8D8 (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@1@AEBUI.c)
 *     ?WaitAndDispatch@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z @ 0x1C004C980 (-WaitAndDispatch@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@.c)
 *     ?ReassociateUserHandleForIOCP@IOCPDispatcher@@QEAAJPEAPEAXPEAU_MITUserModeHandleEntry@@K@Z @ 0x1C004CBE4 (-ReassociateUserHandleForIOCP@IOCPDispatcher@@QEAAJPEAPEAXPEAU_MITUserModeHandleEntry@@K@Z.c)
 *     ?PrepareUserHandleForIOCP@IOCPDispatcher@@QEAAJIPEAPEAXPEAU_MITIocpContext@@@Z @ 0x1C004CC90 (-PrepareUserHandleForIOCP@IOCPDispatcher@@QEAAJIPEAPEAXPEAU_MITIocpContext@@@Z.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C004CE30 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     ConvertUserHandlesToKernelHandles @ 0x1C004CFA4 (ConvertUserHandlesToKernelHandles.c)
 *     ??0CHidInput@@IEAA@XZ @ 0x1C004EE9C (--0CHidInput@@IEAA@XZ.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0050100 (RIMDirectStartStopDeviceRead.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x1C0051868 (RIMUnregisterCurrentProcessForInput.c)
 *     rimDoRimDevChange @ 0x1C0051F54 (rimDoRimDevChange.c)
 *     RIMAllocateHidDesc @ 0x1C0054C24 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C0054FD4 (RIMCreateHidDesc.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C00582E8 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMGetProductString @ 0x1C00585D0 (RIMGetProductString.c)
 *     ?CreateMitPort@@YAHXZ @ 0x1C0069D70 (-CreateMitPort@@YAHXZ.c)
 *     RIMDeviceIoControl @ 0x1C006E8B0 (RIMDeviceIoControl.c)
 *     ?InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z @ 0x1C006F548 (-InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C008FB70 (RIMRegisterForInputWithCallbacks.c)
 *     RIMHandleTTMDeviceRemoval @ 0x1C0092B2C (RIMHandleTTMDeviceRemoval.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C0092B80 (RIMHandleTTMDeviceArrival.c)
 *     RIMRemoveInputOfType @ 0x1C0092F20 (RIMRemoveInputOfType.c)
 *     RIMReadInput @ 0x1C0093320 (RIMReadInput.c)
 *     RIMUnregisterForInput @ 0x1C0093730 (RIMUnregisterForInput.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C0094120 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C0096010 (RIMDirectStopDeviceClassNotifications.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C009990C (rimProcessDeviceBufferAndStartRead.c)
 *     rimSignalReadComplete @ 0x1C00999CC (rimSignalReadComplete.c)
 *     RIMHandleTTMDeviceInput @ 0x1C0099B1C (RIMHandleTTMDeviceInput.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0099F30 (RIMRefreshDeviceAttributes.c)
 *     ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1C009A3C0 (-OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C009A400 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C009A540 (RIMDirectStartDeviceClassNotifications.c)
 *     RIMOnPowerNotification @ 0x1C009AAC0 (RIMOnPowerNotification.c)
 *     RIMDoOnPowerNotification @ 0x1C009AC10 (RIMDoOnPowerNotification.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0100090 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C01004A0 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C01005F0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01008F0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMAreSiblingDevices @ 0x1C0100C50 (RIMAreSiblingDevices.c)
 *     RIMFreeInputBuffer @ 0x1C01012C0 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C0101400 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C0101670 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C0101BA0 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C0101DA0 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C0101F60 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C0102260 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C01024E0 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnCheckPointerDeviceMonitors @ 0x1C0102650 (RIMOnCheckPointerDeviceMonitors.c)
 *     RIMOnPnpNotification @ 0x1C01027D0 (RIMOnPnpNotification.c)
 *     RIMOnTimerNotification @ 0x1C0102C90 (RIMOnTimerNotification.c)
 *     RIMRemoveInjectionDevice @ 0x1C0103110 (RIMRemoveInjectionDevice.c)
 *     RIMResetPointerDevices @ 0x1C0103490 (RIMResetPointerDevices.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0104130 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0104C7C (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMActivatePointerDeviceDeadzone @ 0x1C0104DE0 (RIMActivatePointerDeviceDeadzone.c)
 *     RIMCreatePointerDeviceDeadzone @ 0x1C0104EE0 (RIMCreatePointerDeviceDeadzone.c)
 *     RIMDestroyPointerDeviceDeadzone @ 0x1C0105040 (RIMDestroyPointerDeviceDeadzone.c)
 *     RIMUpdatePointerDeviceDeadzoneOrigin @ 0x1C0105180 (RIMUpdatePointerDeviceDeadzoneOrigin.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C0105A80 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMComputePTPCurtainRegions @ 0x1C0107540 (RIMComputePTPCurtainRegions.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C01093AC (RIMIDECreateDeviceInstancePath.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C0109F10 (RIMIDECreatePseudoHIDDevice.c)
 *     ?RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z @ 0x1C010CE80 (-RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z.c)
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C010D020 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 *     traceFrame @ 0x1C010DDF0 (traceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C010E78C (RIMStartPointerDeviceFrame.c)
 *     RIMDeviceNotify @ 0x1C010F700 (RIMDeviceNotify.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0110D50 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimApplyPointerDevicePolicies @ 0x1C01115D4 (rimApplyPointerDevicePolicies.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C011191C (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C01125FC (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 *     rimExtractPointerDeviceUsages @ 0x1C011294C (rimExtractPointerDeviceUsages.c)
 *     rimExtractScantime @ 0x1C0112DA8 (rimExtractScantime.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C011345C (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimProcessPointerDeviceContact @ 0x1C0113A78 (rimProcessPointerDeviceContact.c)
 *     rimFillKeyboardInputData @ 0x1C011472C (rimFillKeyboardInputData.c)
 *     rimProcessHidKeyboardInput @ 0x1C0114B20 (rimProcessHidKeyboardInput.c)
 *     rimReportHidKeyboardInputData @ 0x1C0114D14 (rimReportHidKeyboardInputData.c)
 *     rimObsAddInputObserver @ 0x1C0115320 (rimObsAddInputObserver.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C011C1B8 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z @ 0x1C011CBD0 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C012371C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0124488 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_D(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      va,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v12, va, 4LL, 0LL);
}
