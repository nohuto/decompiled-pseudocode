/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C001802C
 * Callers:
 *     ?InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z @ 0x1C00086A0 (-InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z.c)
 *     RIMAllocateHidConfigDesc @ 0x1C00087B0 (RIMAllocateHidConfigDesc.c)
 *     RIMRemoveInputOfType @ 0x1C0008F10 (RIMRemoveInputOfType.c)
 *     RIMReadInput @ 0x1C00095B0 (RIMReadInput.c)
 *     RIMUnregisterForInput @ 0x1C00099C0 (RIMUnregisterForInput.c)
 *     RIMOnPnpNotification @ 0x1C000A430 (RIMOnPnpNotification.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C000A6B4 (RIMReleasePointerDeviceInfo.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C000AB20 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMDeviceIoControl @ 0x1C000AC40 (RIMDeviceIoControl.c)
 *     RIMGetDeviceParent @ 0x1C000B2A0 (RIMGetDeviceParent.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C000D190 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMAllocateHidDesc @ 0x1C000D844 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C000DB5C (RIMCreateHidDesc.c)
 *     RIMGetProductString @ 0x1C000E9E0 (RIMGetProductString.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX_KKPEAUtagINPUTDEST@@@Z @ 0x1C00134C0 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX_KKPEAUtagINPUTDEST@@@Z.c)
 *     ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C0014260 (-ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x1C0017E90 (RIMUnregisterCurrentProcessForInput.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0018DA0 (RIMDirectStartStopDeviceRead.c)
 *     ??0CHidInput@@IEAA@XZ @ 0x1C0019714 (--0CHidInput@@IEAA@XZ.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C001A984 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     rimDoRimDevChange @ 0x1C001AEAC (rimDoRimDevChange.c)
 *     ?InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ @ 0x1C003B2E0 (-InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ.c)
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@1@AEBUIOCPWCP_KeyContext@1@@Z @ 0x1C003B3B8 (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@1@AEBUI.c)
 *     ?WaitAndDispatch@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z @ 0x1C003B460 (-WaitAndDispatch@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C003B6D0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     ?CreateMitPort@@YAHXZ @ 0x1C00865A0 (-CreateMitPort@@YAHXZ.c)
 *     RIMResetPointerDevices @ 0x1C0093AD0 (RIMResetPointerDevices.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C00944D4 (RIMGetMaxCountFeatureDetails.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0098970 (RIMRegisterForInputWithCallbacks.c)
 *     RIMHandleTTMDeviceRemoval @ 0x1C009C32C (RIMHandleTTMDeviceRemoval.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C009C380 (RIMHandleTTMDeviceArrival.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C009E5A0 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMOnPowerNotification @ 0x1C00A3A20 (RIMOnPowerNotification.c)
 *     RIMDoOnPowerNotification @ 0x1C00A3B70 (RIMDoOnPowerNotification.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00A45FC (rimProcessDeviceBufferAndStartRead.c)
 *     rimSignalReadComplete @ 0x1C00A46B8 (rimSignalReadComplete.c)
 *     RIMHandleTTMDeviceInput @ 0x1C00A4810 (RIMHandleTTMDeviceInput.c)
 *     RIMRefreshDeviceAttributes @ 0x1C00A5230 (RIMRefreshDeviceAttributes.c)
 *     ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1C00A5710 (-OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00A5750 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00A5880 (RIMDirectStartDeviceClassNotifications.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C00FFAB4 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0100490 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C01008E0 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0100A30 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0100D30 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMAreSiblingDevices @ 0x1C0101090 (RIMAreSiblingDevices.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C01015C0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFreeInputBuffer @ 0x1C0101A40 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C0101B80 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C0101E10 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C0102390 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C0102590 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C0102740 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C0102A40 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C0102CD0 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnTimerNotification @ 0x1C0102E50 (RIMOnTimerNotification.c)
 *     RIMRemoveInjectionDevice @ 0x1C01032D0 (RIMRemoveInjectionDevice.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C01041C0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0104AB4 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMActivatePointerDeviceDeadzone @ 0x1C0104C10 (RIMActivatePointerDeviceDeadzone.c)
 *     RIMCreatePointerDeviceDeadzone @ 0x1C0104D10 (RIMCreatePointerDeviceDeadzone.c)
 *     RIMDestroyPointerDeviceDeadzone @ 0x1C0104E70 (RIMDestroyPointerDeviceDeadzone.c)
 *     RIMUpdatePointerDeviceDeadzoneOrigin @ 0x1C0104FB0 (RIMUpdatePointerDeviceDeadzoneOrigin.c)
 *     RIMComputePTPCurtainRegions @ 0x1C0105B50 (RIMComputePTPCurtainRegions.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C0106BE0 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C01083D4 (RIMIDECreateDeviceInstancePath.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C0108FA8 (RIMIDECreatePseudoHIDDevice.c)
 *     ?RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z @ 0x1C010BE50 (-RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z.c)
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C010BFF0 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 *     traceFrame @ 0x1C010CDDC (traceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C010D6D4 (RIMStartPointerDeviceFrame.c)
 *     RIMDeviceNotify @ 0x1C010E070 (RIMDeviceNotify.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C010F7F8 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimApplyPointerDevicePolicies @ 0x1C01100A8 (rimApplyPointerDevicePolicies.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01103FC (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C01110E4 (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 *     rimExtractPointerDeviceUsages @ 0x1C0111434 (rimExtractPointerDeviceUsages.c)
 *     rimExtractScantime @ 0x1C0111890 (rimExtractScantime.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C0111F44 (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimProcessPointerDeviceContact @ 0x1C011255C (rimProcessPointerDeviceContact.c)
 *     rimFillKeyboardInputData @ 0x1C0113200 (rimFillKeyboardInputData.c)
 *     rimProcessHidKeyboardInput @ 0x1C01135F4 (rimProcessHidKeyboardInput.c)
 *     rimReportHidKeyboardInputData @ 0x1C01137E8 (rimReportHidKeyboardInputData.c)
 *     rimObsAddInputObserver @ 0x1C0113DE8 (rimObsAddInputObserver.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C011B014 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z @ 0x1C011BA34 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z.c)
 *     ?GetPointerFrameArrivalTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEA_K@Z @ 0x1C01200E4 (-GetPointerFrameArrivalTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEA_K@Z.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C0120AB0 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01212B0 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C0122D6C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0123AE0 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_d(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
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
