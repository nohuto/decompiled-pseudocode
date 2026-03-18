/*
 * XREFs of memmove @ 0x1C00A21C0
 * Callers:
 *     NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C00046F0 (NtDCompositionTelemetryTouchInteractionUpdate.c)
 *     ?AddInteractionBeginInfo@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C0004850 (-AddInteractionBeginInfo@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C0008900 (RIMReleasePointerDeviceInfo.c)
 *     NtUserQueryDisplayConfig @ 0x1C000CCB0 (NtUserQueryDisplayConfig.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C000D420 (NtUserDisplayConfigGetDeviceInfo.c)
 *     ?Grow@?$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C000FDE8 (-Grow@-$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposi.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C0013A50 (NtDCompositionGetFrameLegacyTokens.c)
 *     ?SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0018340 (-SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0018DB0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z @ 0x1C001DD64 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z.c)
 *     ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x1C001DE60 (-ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x1C001DEA8 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C001E460 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?AddPropertyUpdate@CPropertyBagMarshaler@DirectComposition@@AEAAJPEBUPropertyUpdate@@@Z @ 0x1C001ED38 (-AddPropertyUpdate@CPropertyBagMarshaler@DirectComposition@@AEAAJPEBUPropertyUpdate@@@Z.c)
 *     ?SetBufferProperty@CPropertyBagMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C001F160 (-SetBufferProperty@CPropertyBagMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001F630 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     AllocAce @ 0x1C001F8D0 (AllocAce.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z @ 0x1C00215F0 (-bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z @ 0x1C0021680 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z.c)
 *     NtGdiExtCreateRegion @ 0x1C00220D0 (NtGdiExtCreateRegion.c)
 *     NtGdiOpenDCW @ 0x1C00221E0 (NtGdiOpenDCW.c)
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C00232B8 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0023644 (-growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     NtTokenManagerCreateCompositionTokenHandle @ 0x1C0023C10 (NtTokenManagerCreateCompositionTokenHandle.c)
 *     ?EmitSetDirtyAndBoundsRectCommand@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0024C90 (-EmitSetDirtyAndBoundsRectCommand@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatc.c)
 *     ?SetBufferProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00251C0 (-SetBufferProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?ReturnResourceLifetimeTag@CNotifiedDeletionResource@DirectComposition@@UEAAXPEAVCDeletedNotificationList@2@@Z @ 0x1C0025B70 (-ReturnResourceLifetimeTag@CNotifiedDeletionResource@DirectComposition@@UEAAXPEAVCDeletedNotific.c)
 *     ?Initialize@CNotifiedDeletionResource@DirectComposition@@UEAAJPEAVCDeletedNotificationList@2@@Z @ 0x1C0025C00 (-Initialize@CNotifiedDeletionResource@DirectComposition@@UEAAJPEAVCDeletedNotificationList@2@@Z.c)
 *     ?SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00261B0 (-SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_K.c)
 *     ?EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0026538 (-EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0029724 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0039AE4 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003AA20 (-bCompute@DC@@QEAAHXZ.c)
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C003B888 (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003C850 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C003CC90 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C003D670 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C003D750 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C003E430 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     NtGdiGetRegionData @ 0x1C003F080 (NtGdiGetRegionData.c)
 *     DrvEnumDisplayDevices @ 0x1C0041380 (DrvEnumDisplayDevices.c)
 *     xxxCreateThreadInfo @ 0x1C004AFA0 (xxxCreateThreadInfo.c)
 *     NtMITWaitForMultipleObjectsEx @ 0x1C004C0E0 (NtMITWaitForMultipleObjectsEx.c)
 *     SetHandleFlag @ 0x1C0051C60 (SetHandleFlag.c)
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C00539D4 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 *     DrvChangeDisplaySettings @ 0x1C00563A0 (DrvChangeDisplaySettings.c)
 *     LogDiagSDC @ 0x1C0057B04 (LogDiagSDC.c)
 *     RIMGetProductString @ 0x1C00585D0 (RIMGetProductString.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C005D670 (DrvUpdateDisplayDriverParameters.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C005DCFC (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvBuildDevmodeList @ 0x1C005E770 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C005EAEC (DrvGetDisplayDriverParameters.c)
 *     DrvGetDisplayDriverNames @ 0x1C005FE90 (DrvGetDisplayDriverNames.c)
 *     ?InsertModecapList@@YAKPEAUtagModeCap@@0K@Z @ 0x1C00604DC (-InsertModecapList@@YAKPEAUtagModeCap@@0K@Z.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C0060FF8 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     DrvEnumDisplaySettings @ 0x1C0061B40 (DrvEnumDisplaySettings.c)
 *     NtUserSetSysColors @ 0x1C0063820 (NtUserSetSysColors.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0068998 (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z @ 0x1C006A908 (-CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z.c)
 *     ?Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z @ 0x1C006C38C (-Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z.c)
 *     ?MarshalLPCWSTR@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBG@Z @ 0x1C006C8D8 (-MarshalLPCWSTR@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBG@Z.c)
 *     ?MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z @ 0x1C006CB3C (-MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z.c)
 *     ?Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAPEAX@Z @ 0x1C006E510 (-Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAPEAX@Z.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C00701C0 (-ResetSystemColors@@YAXXZ.c)
 *     InitScancodeMap @ 0x1C0070380 (InitScancodeMap.c)
 *     FastGetProfileValue @ 0x1C00735B0 (FastGetProfileValue.c)
 *     RtlLoadStringOrError @ 0x1C0073FB0 (RtlLoadStringOrError.c)
 *     NtUserToUnicodeEx @ 0x1C0078E50 (NtUserToUnicodeEx.c)
 *     ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x1C007A7A0 (-ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C007B4BC (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     ?EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007BEE8 (-EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAnimationCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007BF80 (-EmitAnimationCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?SetApplicationId@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C007C014 (-SetApplicationId@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z.c)
 *     ?AnimationScenarioBegin@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C007C100 (-AnimationScenarioBegin@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z.c)
 *     CaptureDriverInfo2W @ 0x1C007C9C0 (CaptureDriverInfo2W.c)
 *     InitSystemThread @ 0x1C007CCE0 (InitSystemThread.c)
 *     NtTokenManagerThread @ 0x1C007D620 (NtTokenManagerThread.c)
 *     ?EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z @ 0x1C007DDE4 (-EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z.c)
 *     ?GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C007DE60 (-GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?AddNotificationTokens@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@I@Z @ 0x1C007DF78 (-AddNotificationTokens@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@I@Z.c)
 *     NtDCompositionGetDeletedResources @ 0x1C0080190 (NtDCompositionGetDeletedResources.c)
 *     UserReAllocPool @ 0x1C0082FD0 (UserReAllocPool.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C00852F0 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x1C0086CF4 (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     UserReAllocPoolWithQuota @ 0x1C008A5A0 (UserReAllocPoolWithQuota.c)
 *     CaptureDEVMODEW @ 0x1C008CFC0 (CaptureDEVMODEW.c)
 *     ?DrvDriverExtraCallback@@YAJPEAGKPEAXK11@Z @ 0x1C008F8B0 (-DrvDriverExtraCallback@@YAJPEAGKPEAXK11@Z.c)
 *     ?__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C0090740 (-__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     ?__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C0091580 (-__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     NtGdiPolyPolyDraw @ 0x1C00962E0 (NtGdiPolyPolyDraw.c)
 *     ?bClone@EPATHOBJ@@QEAAHAEAV1@@Z @ 0x1C0097920 (-bClone@EPATHOBJ@@QEAAHAEAV1@@Z.c)
 *     rimProcessInput @ 0x1C0099D80 (rimProcessInput.c)
 *     RaiseException @ 0x1C00A1BC0 (RaiseException.c)
 *     UserPostNKAPCBuffer @ 0x1C00D5590 (UserPostNKAPCBuffer.c)
 *     FastGetProfileKeysW @ 0x1C00D8800 (FastGetProfileKeysW.c)
 *     HMCleanupGrantedHandle @ 0x1C00DE768 (HMCleanupGrantedHandle.c)
 *     NtMITBindInputTypeToMonitors @ 0x1C00DEA80 (NtMITBindInputTypeToMonitors.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00E0890 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C00E0EC0 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C00E17E0 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C00E1C70 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInjectDeviceInput @ 0x1C00E2230 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C00E2680 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00E2940 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C00E2C00 (NtUserInjectPointerInput.c)
 *     NtUserSetDisplayConfig @ 0x1C00E3450 (NtUserSetDisplayConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00E3D80 (NtUserSetFeatureReportResponse.c)
 *     NtUserSetManipulationInputTarget @ 0x1C00E4260 (NtUserSetManipulationInputTarget.c)
 *     NtUserSystemParametersInfo @ 0x1C00E4870 (NtUserSystemParametersInfo.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z @ 0x1C00E8E90 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00E936C (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00E9CC0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00EA884 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C00EDE00 (NtGdiConfigureOPMProtectedOutput.c)
 *     NtGdiGetCertificate @ 0x1C00EE1C0 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateByHandle @ 0x1C00EE300 (NtGdiGetCertificateByHandle.c)
 *     ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1C00EFF9C (-DxLddmLogProcessPrimaryLockCount@@YAXK@Z.c)
 *     NtHWCursorUpdatePointer @ 0x1C00F1DF0 (NtHWCursorUpdatePointer.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F5340 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GE.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@IIPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F6F68 (-DrvProcessSetDisplayConfigParameters@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_I.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00F836C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C00FD7E0 (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C0101530 (RIMGetDevicePreparsedDataLockfree.c)
 *     RIMGetDevicePropertiesLockfree @ 0x1C01017A0 (RIMGetDevicePropertiesLockfree.c)
 *     RIMInjectInput @ 0x1C0102260 (RIMInjectInput.c)
 *     RIMIDECreateHIDDesc @ 0x1C0109528 (RIMIDECreateHIDDesc.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C010ADCC (RIMIDEInjectKeyboardInput.c)
 *     RIMIDEInjectMouseInput @ 0x1C010B128 (RIMIDEInjectMouseInput.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C010BD74 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C010C594 (RIMIDE_InitializePointerDeviceInjection.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C010C72C (RIMIDE_InjectGenericHidInput.c)
 *     RIMFixUpAutoRepeatCompleteFrameUpDowns @ 0x1C010E470 (RIMFixUpAutoRepeatCompleteFrameUpDowns.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C010EAB8 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimStoreRawDataBlock @ 0x1C010EFA8 (rimStoreRawDataBlock.c)
 *     rimDispatchHidKeyboardInputData @ 0x1C011447C (rimDispatchHidKeyboardInputData.c)
 *     rimReportHidKeyboardInputData @ 0x1C0114D14 (rimReportHidKeyboardInputData.c)
 *     rimObsCopyMessage @ 0x1C01157C0 (rimObsCopyMessage.c)
 *     ?AddLegacyDispatcherObjects@LegacyInputDispatcher@@QEAAXIPEAPEAX@Z @ 0x1C011A320 (-AddLegacyDispatcherObjects@LegacyInputDispatcher@@QEAAXIPEAPEAX@Z.c)
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C011B284 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z.c)
 *     ?BuildPostInputInfoFrame@CTouchProcessor@@QEAAHPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C011B488 (-BuildPostInputInfoFrame@CTouchProcessor@@QEAAHPEAXIPEBUCPointerInputFrame@@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C011C1B8 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1C011C9AC (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     ?SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEnginePointerNode@@@Z @ 0x1C0137CA4 (-SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEngin.c)
 *     ?AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C01417D0 (-AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C0141E78 (-SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?AddSegments@CPencilMarshaler@DirectComposition@@AEAAJPEBUD2D1_PENCIL_SEGMENT@@IPEA_N@Z @ 0x1C0141FF0 (-AddSegments@CPencilMarshaler@DirectComposition@@AEAAJPEBUD2D1_PENCIL_SEGMENT@@IPEA_N@Z.c)
 *     ?SetSegments@CPencilMarshaler@DirectComposition@@AEAAJIPEBUD2D1_PENCIL_SEGMENT@@IPEA_N@Z @ 0x1C0142724 (-SetSegments@CPencilMarshaler@DirectComposition@@AEAAJIPEBUD2D1_PENCIL_SEGMENT@@IPEA_N@Z.c)
 *     ?CopyBytesIntoBuffer@CGenericInkMarshaler@DirectComposition@@AEAAJAEAV?$CDCompDynamicArray@E@2@_KPEBE1@Z @ 0x1C0142820 (-CopyBytesIntoBuffer@CGenericInkMarshaler@DirectComposition@@AEAAJAEAV-$CDCompDynamicArray@E@2@_.c)
 *     ?EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0142934 (-EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0142A90 (-EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Grow@?$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C014314C (-Grow@-$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?SetRemarshalingFlags@CPropertyBagMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0143F70 (-SetRemarshalingFlags@CPropertyBagMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?Grow@?$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z @ 0x1C01441B4 (-Grow@-$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?EmitSetInertiaModifierAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0145504 (-EmitSetInertiaModifierAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVC.c)
 *     ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0146080 (-SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z @ 0x1C0148128 (-EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z.c)
 *     ?SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0148400 (-SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 *     NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x1C0151F20 (NtTokenManagerGetAnalogExclusiveSurfaceUpdates.c)
 *     ??$CitpBaseDataOutput@UCIT_PERSISTED_SYSTEM_DATA@@U_CIT_SYSTEM_DATA@@@@YAXPEAU_CIT_BASE_DATA_SAVE_CONTEXT@@PEAUCIT_PERSISTED_SYSTEM_DATA@@PEBU_CIT_SYSTEM_DATA@@@Z @ 0x1C0152FB4 (--$CitpBaseDataOutput@UCIT_PERSISTED_SYSTEM_DATA@@U_CIT_SYSTEM_DATA@@@@YAXPEAU_CIT_BASE_DATA_SAV.c)
 *     ??$CitpBaseDataOutput@UCIT_PERSISTED_USE_DATA@@U_CIT_USE_DATA@@@@YAXPEAU_CIT_BASE_DATA_SAVE_CONTEXT@@PEAUCIT_PERSISTED_USE_DATA@@PEBU_CIT_USE_DATA@@@Z @ 0x1C01530CC (--$CitpBaseDataOutput@UCIT_PERSISTED_USE_DATA@@U_CIT_USE_DATA@@@@YAXPEAU_CIT_BASE_DATA_SAVE_CONT.c)
 *     ?CitpSavedDataCompress@@YAJPEBXIPEAPEAXPEAI@Z @ 0x1C01552AC (-CitpSavedDataCompress@@YAJPEBXIPEAPEAXPEAI@Z.c)
 *     ?CitpSavedDataDecompress@@YAJPEBXIPEAPEAXPEAIPEBU_CIT_COMPRESSION_CALLBACKS@@@Z @ 0x1C01553F8 (-CitpSavedDataDecompress@@YAJPEBXIPEAPEAXPEAIPEBU_CIT_COMPRESSION_CALLBACKS@@@Z.c)
 *     ?CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z @ 0x1C0155758 (-CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z.c)
 *     ?Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z @ 0x1C01561AC (-Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z.c)
 *     CreateNewEventEntry @ 0x1C0156900 (CreateNewEventEntry.c)
 *     WppTraceCallback @ 0x1C01BDE20 (WppTraceCallback.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  __m128i *v3; // r11
  bool v4; // cf
  unsigned __int64 v5; // rdx
  size_t k; // r9
  __int64 v7; // rax
  size_t m; // r8
  char v9; // al
  unsigned int v11; // ecx
  size_t v12; // r9
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  int v15; // eax
  int v16; // eax
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  __m128i *v19; // rcx
  size_t i; // r9
  __int64 v21; // rax
  size_t j; // r8
  __int8 v23; // al
  __m128i *v24; // rax
  __int64 v25; // rcx
  size_t v26; // r9
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  int v29; // eax
  int v30; // eax
  __m128i v31; // xmm1
  __m128i v32; // xmm1
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v3 = (__m128i *)a1;
  v4 = Src < a1;
  v5 = (_BYTE *)Src - (_BYTE *)a1;
  if ( v4 )
  {
    v19 = (__m128i *)((char *)a1 + Size);
    if ( Size >= 0x4F )
    {
      if ( v5 > 0xFFFFFFFFFFFFFFF0uLL )
      {
        for ( ; ((unsigned __int8)v19 & 0xF) != 0; v19->m128i_i8[0] = v19->m128i_i8[v5] )
        {
          v19 = (__m128i *)((char *)v19 - 1);
          --Size;
        }
      }
      else
      {
        v24 = v19;
        v25 = (unsigned __int8)v19 & 0xF;
        if ( (_DWORD)v25 )
        {
          Size -= (unsigned int)v25;
          v25 = -(__int64)(unsigned int)v25;
          v24[-1] = _mm_loadu_si128((__m128i *)((char *)v24 + v5 - 16));
        }
        v19 = (__m128i *)((char *)v24 + v25);
      }
      v26 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 > 0xFFFFFFFFFFFFFE00uLL )
        goto xmov40;
      do
      {
        v29 = 4;
        do
        {
          v19 -= 8;
          _mm_prefetch(&v19->m128i_i8[v5], 0);
          _mm_prefetch(&v19[4].m128i_i8[v5], 0);
          --v29;
        }
        while ( v29 );
        v19 += 32;
        v30 = 8;
        do
        {
          v31 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          _mm_stream_si128(v19 - 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16)));
          _mm_stream_si128(v19 - 2, v31);
          v19 -= 4;
          v32 = _mm_loadu_si128((__m128i *)((char *)v19 + v5));
          _mm_stream_si128(v19 + 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 + 16)));
          _mm_stream_si128(v19, v32);
          --v30;
        }
        while ( v30 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v26 = Size >> 5;
      if ( Size >> 5 )
      {
xmov40:
        Size &= 0x1Fu;
        do
        {
          v27 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16));
          v28 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          v19 -= 2;
          v19[1] = v27;
          *v19 = v28;
          --v26;
        }
        while ( v26 );
      }
    }
    for ( i = Size >> 3; i; v19->m128i_i64[0] = v21 )
    {
      v21 = *(__int64 *)((char *)&v19->m128i_i64[-1] + v5);
      v19 = (__m128i *)((char *)v19 - 8);
      --i;
    }
    for ( j = Size & 7; j; v19->m128i_i8[0] = v23 )
    {
      v23 = v19->m128i_i8[v5 - 1];
      v19 = (__m128i *)((char *)v19 - 1);
      --j;
    }
    return v3;
  }
  else
  {
    if ( Size >= 0x4F )
    {
      if ( v5 < 0x10 )
      {
        for ( ; ((unsigned __int8)a1 & 0xF) != 0; a1 = (char *)a1 + 1 )
        {
          --Size;
          *(_BYTE *)a1 = *((_BYTE *)a1 + v5);
        }
      }
      else
      {
        v11 = -(int)a1 & 0xF;
        if ( v11 )
        {
          Size -= v11;
          *v3 = _mm_loadu_si128((__m128i *)((char *)v3 + v5));
        }
        a1 = &v3->m128i_i8[v11];
      }
      v12 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 < 0x200 )
        goto xcpy40;
      do
      {
        v15 = 4;
        do
        {
          _mm_prefetch((const char *)a1 + v5, 0);
          _mm_prefetch((const char *)a1 + v5 + 64, 0);
          a1 = (char *)a1 + 128;
          --v15;
        }
        while ( v15 );
        a1 = (char *)a1 - 512;
        v16 = 8;
        do
        {
          v17 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          _mm_stream_si128((__m128i *)a1, _mm_loadu_si128((const __m128i *)((char *)a1 + v5)));
          _mm_stream_si128((__m128i *)a1 + 1, v17);
          a1 = (char *)a1 + 64;
          v18 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 16));
          _mm_stream_si128((__m128i *)a1 - 2, _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 32)));
          _mm_stream_si128((__m128i *)a1 - 1, v18);
          --v16;
        }
        while ( v16 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v12 = Size >> 5;
      if ( Size >> 5 )
      {
xcpy40:
        Size &= 0x1Fu;
        do
        {
          v13 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5));
          v14 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          a1 = (char *)a1 + 32;
          *((__m128i *)a1 - 2) = v13;
          *((__m128i *)a1 - 1) = v14;
          --v12;
        }
        while ( v12 );
      }
    }
    for ( k = Size >> 3; k; *((_QWORD *)a1 - 1) = v7 )
    {
      v7 = *(_QWORD *)((char *)a1 + v5);
      a1 = (char *)a1 + 8;
      --k;
    }
    for ( m = Size & 7; m; *((char *)a1 - 1) = v9 )
    {
      v9 = *((_BYTE *)a1 + v5);
      a1 = (char *)a1 + 1;
      --m;
    }
    return v3;
  }
}
