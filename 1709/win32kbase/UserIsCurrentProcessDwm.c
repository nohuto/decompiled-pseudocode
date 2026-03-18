/*
 * XREFs of UserIsCurrentProcessDwm @ 0x1C001F380
 * Callers:
 *     NtUpdateInputSinkTransforms @ 0x1C0002F30 (NtUpdateInputSinkTransforms.c)
 *     NtQueryCompositionInputSink @ 0x1C001E940 (NtQueryCompositionInputSink.c)
 *     GreSfmGetNotificationTokens @ 0x1C001EDD0 (GreSfmGetNotificationTokens.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C0020D90 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     ?OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z @ 0x1C0020F8C (-OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C00211C0 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C0021470 (NtQueryCompositionInputQueueAndTransform.c)
 *     ?CitpSetCompositionInfo@@YA_KPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C00244A0 (-CitpSetCompositionInfo@@YA_KPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     DrvEnumDisplayDevices @ 0x1C003EEB0 (DrvEnumDisplayDevices.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C00406A0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C005BD64 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     NtGdiDdDDIOpenAdapterFromHdc @ 0x1C005E800 (NtGdiDdDDIOpenAdapterFromHdc.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x1C007AA70 (CheckDwmProcessSecurityIdentifier.c)
 *     NtGdiDdDDIOpenAdapterFromDeviceName @ 0x1C007FC70 (NtGdiDdDDIOpenAdapterFromDeviceName.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C0084FD0 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtTokenManagerThread @ 0x1C0089A60 (NtTokenManagerThread.c)
 *     GreSfmOpenTokenEvent @ 0x1C0089DE0 (GreSfmOpenTokenEvent.c)
 *     NtGdiDdDDIOpenAdapterFromLuid @ 0x1C008B6A0 (NtGdiDdDDIOpenAdapterFromLuid.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C008C240 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C0090D80 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0092450 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C0093C20 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtDCompositionCreateDwmChannel @ 0x1C0096380 (NtDCompositionCreateDwmChannel.c)
 *     NtTokenManagerOpenSectionAndEvents @ 0x1C00977E0 (NtTokenManagerOpenSectionAndEvents.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C0099508 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEAPEAX@Z @ 0x1C009E6A4 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEA.c)
 *     NtGdiDdDDICreateOutputDupl @ 0x1C00F39A0 (NtGdiDdDDICreateOutputDupl.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C013E090 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1C013E220 (NtDCompositionDuplicateHandleToProcess.c)
 *     NtDCompositionUpdatePointerCapture @ 0x1C013E9F0 (NtDCompositionUpdatePointerCapture.c)
 *     NtCompositionInputThread @ 0x1C0151810 (NtCompositionInputThread.c)
 *     NtDuplicateCompositionInputSink @ 0x1C0151890 (NtDuplicateCompositionInputSink.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C0151D70 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C0151F30 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C0151FF0 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C0152310 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C0152500 (NtSetCompositionSurfaceStatistics.c)
 *     NtTokenManagerConfirmOutstandingAnalogToken @ 0x1C0153380 (NtTokenManagerConfirmOutstandingAnalogToken.c)
 *     NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x1C01533C0 (NtTokenManagerGetAnalogExclusiveSurfaceUpdates.c)
 *     NtTokenManagerGetAnalogExclusiveTokenEvent @ 0x1C01535C0 (NtTokenManagerGetAnalogExclusiveTokenEvent.c)
 * Callees:
 *     <none>
 */

_BOOL8 UserIsCurrentProcessDwm()
{
  return PsGetCurrentProcess() == (_QWORD)g_pepDwm;
}
