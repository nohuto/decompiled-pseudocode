/*
 * XREFs of UserIsCurrentProcessDwm @ 0x1C000FEF0
 * Callers:
 *     NtUpdateInputSinkTransforms @ 0x1C0001260 (NtUpdateInputSinkTransforms.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C0003420 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C0003A40 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtDuplicateCompositionInputSink @ 0x1C00042A0 (NtDuplicateCompositionInputSink.c)
 *     CitSetInfo @ 0x1C0004C60 (CitSetInfo.c)
 *     NtQueryCompositionInputSink @ 0x1C000C650 (NtQueryCompositionInputSink.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEAPEAX@Z @ 0x1C000C9E0 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEA.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C000D9C4 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C000E0A0 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C000E230 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C000E890 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C000FF20 (NtQueryCompositionInputQueueAndTransform.c)
 *     ?OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z @ 0x1C00100C8 (-OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z.c)
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C0015964 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C003F8E0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     DrvEnumDisplayDevices @ 0x1C0041380 (DrvEnumDisplayDevices.c)
 *     NtGdiDdDDIOpenAdapterFromHdc @ 0x1C005F3E0 (NtGdiDdDDIOpenAdapterFromHdc.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x1C0066270 (CheckDwmProcessSecurityIdentifier.c)
 *     NtTokenManagerThread @ 0x1C007D620 (NtTokenManagerThread.c)
 *     GreSfmOpenTokenEvent @ 0x1C007D990 (GreSfmOpenTokenEvent.c)
 *     GreSfmGetNotificationTokens @ 0x1C007DAD0 (GreSfmGetNotificationTokens.c)
 *     NtGdiDdDDIOpenAdapterFromDeviceName @ 0x1C007F640 (NtGdiDdDDIOpenAdapterFromDeviceName.c)
 *     NtGdiDdDDIOpenAdapterFromLuid @ 0x1C0084380 (NtGdiDdDDIOpenAdapterFromLuid.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C0087850 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     NtDCompositionCreateDwmChannel @ 0x1C008E3D0 (NtDCompositionCreateDwmChannel.c)
 *     NtTokenManagerOpenSectionAndEvents @ 0x1C008EF00 (NtTokenManagerOpenSectionAndEvents.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C0091B08 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     NtGdiDdDDICreateOutputDupl @ 0x1C00F0DA0 (NtGdiDdDDICreateOutputDupl.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C013EC30 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1C013EDC0 (NtDCompositionDuplicateHandleToProcess.c)
 *     NtDCompositionUpdatePointerCapture @ 0x1C013F570 (NtDCompositionUpdatePointerCapture.c)
 *     NtCompositionInputThread @ 0x1C0150840 (NtCompositionInputThread.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C01509F0 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C0150BB0 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C0150C40 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C0150F60 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C0151150 (NtSetCompositionSurfaceStatistics.c)
 *     NtTokenManagerConfirmOutstandingAnalogToken @ 0x1C0151EE0 (NtTokenManagerConfirmOutstandingAnalogToken.c)
 *     NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x1C0151F20 (NtTokenManagerGetAnalogExclusiveSurfaceUpdates.c)
 *     NtTokenManagerGetAnalogExclusiveTokenEvent @ 0x1C0152120 (NtTokenManagerGetAnalogExclusiveTokenEvent.c)
 * Callees:
 *     <none>
 */

_BOOL8 UserIsCurrentProcessDwm()
{
  return PsGetCurrentProcess() == (_QWORD)g_pepDwm;
}
