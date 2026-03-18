/*
 * XREFs of ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C
 * Callers:
 *     ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0026800 (-AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?RfxVgpuResetCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0026910 (-RfxVgpuResetCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1@Z @ 0x1C007AF9C (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1@Z.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C007CCE0 (DxgkQueryVideoMemoryInfo.c)
 *     ?NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0083EA4 (-NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0086FA0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z @ 0x1C0089240 (-SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0089338 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00894C0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KI@Z @ 0x1C008C580 (-AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KI@Z.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C008E700 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00A2270 (-DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00A9BB0 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C00B3724 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00B3A10 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x1C00B3EA0 (-DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00B4080 (DxgkDisplayConfigDeviceInfo.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C00B46B8 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00B497C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x1C00B524C (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DX.c)
 *     ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00B5770 (-DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C00B5930 (-DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_1_ @ 0x1C00B5DA0 (_BtlPreAcquireSharedAccess_-CCD_BTL_CONNECTIVITY_COLLECTOR--_AppendConnectedSetAdaptersCallback_.c)
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C00B5E80 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00B6000 (-CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_ @ 0x1C00B6130 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_1_.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_1_ @ 0x1C00B66A0 (_BtlPreAcquireSharedAccess_-CCD_BTL_CLONE_GROUP_RESOLVER--_ResolveAdaptersCallback_1_.c)
 *     _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_1_ @ 0x1C00B6960 (_BtlPreAcquireSharedAccess_-BTL_TOPOLOGY_CONSTRUCTOR--_ANCHOR_INFO--_FindAnchorAdaptersCallback_.c)
 *     DxgkGetDisplayModeList @ 0x1C00B6A20 (DxgkGetDisplayModeList.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00B7698 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00B85E8 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z2P6AJPEAV3@32@Z@Z @ 0x1C00B8A30 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2.c)
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1C00B9050 (DxgkGetMultiPlaneOverlayCaps.c)
 *     DxgkGetPostCompositionCaps @ 0x1C00B9400 (DxgkGetPostCompositionCaps.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00B99F0 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C00B9B70 (-DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C00BBEF4 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C00BC110 (DxgkReserveGpuVirtualAddress.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00D1518 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C00D86D0 (DxgkGetMonitorInternalInfo.c)
 *     ?_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00DF830 (-_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00E1E38 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     DxgkUpdateGdiInfo @ 0x1C00E2A20 (DxgkUpdateGdiInfo.c)
 *     EnforceDriverModelScalingPolicy @ 0x1C00E4898 (EnforceDriverModelScalingPolicy.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00E5108 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00E5230 (DxgkGetAdapterDefaultScaling.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C00E89D0 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00ECDD0 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z @ 0x1C00EEB00 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00F326C (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00F4230 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00F5D08 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_ @ 0x1C00F6230 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_1_.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00F65D0 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1C00F68F0 (-DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1C00F6EE0 (DxgkFreeGpuVirtualAddress.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_0_ @ 0x1C00F7240 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_0_.c)
 *     ?DxgkIsTargetHMD@@YAEAEBU_LUID@@I@Z @ 0x1C00F771C (-DxgkIsTargetHMD@@YAEAEBU_LUID@@I@Z.c)
 *     OutputDuplProcessTerminate @ 0x1C00F77D4 (OutputDuplProcessTerminate.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXI@ZIP6AJPEAV3@2I@Z@Z @ 0x1C00F7B60 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL.c)
 *     ?CalcAllPathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00F8150 (-CalcAllPathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@1@Z @ 0x1C00F82B0 (-DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@1@Z.c)
 *     DxgkQueryModeListCacheLuid @ 0x1C00F8840 (DxgkQueryModeListCacheLuid.c)
 *     ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C00F8964 (-DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z.c)
 *     DxgkIsVidPnSourceOwnerExclusive @ 0x1C00F9040 (DxgkIsVidPnSourceOwnerExclusive.c)
 *     DxgkIsBootPrimarySource @ 0x1C00F91B0 (DxgkIsBootPrimarySource.c)
 *     DxgkIsSourceInHardwareClone @ 0x1C00F9490 (DxgkIsSourceInHardwareClone.c)
 *     DxgkSetMonitorColorSpaceTransform @ 0x1C00F9E90 (DxgkSetMonitorColorSpaceTransform.c)
 *     DxgkGetScanLine @ 0x1C00FDDF0 (DxgkGetScanLine.c)
 *     DxgkGetPresentStats @ 0x1C00FF010 (DxgkGetPresentStats.c)
 *     DxgkSetIndependentFlipMode @ 0x1C0100760 (DxgkSetIndependentFlipMode.c)
 *     DxgkConfirmToken @ 0x1C0100AA0 (DxgkConfirmToken.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE3333@Z @ 0x1C010381C (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 *     DxgkGetAdapter @ 0x1C01045D0 (DxgkGetAdapter.c)
 *     ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C016F0D0 (-QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z.c)
 *     ?DxgkGetPreferredMode@@YAJPEAU_D3DKMT_GET_PREFERRED_MODE@@@Z @ 0x1C0171480 (-DxgkGetPreferredMode@@YAJPEAU_D3DKMT_GET_PREFERRED_MODE@@@Z.c)
 *     ?HandleUnblockUEFIFrameBufferRanges@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0171A70 (-HandleUnblockUEFIFrameBufferRanges@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C017E3A0 (-DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z.c)
 *     ?DxgkpProcessPowerPStateWork@@YAXPEAX@Z @ 0x1C017ED50 (-DxgkpProcessPowerPStateWork@@YAXPEAX@Z.c)
 *     ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C017F070 (-QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z.c)
 *     DxgkIsAdapterVirtualTopologyEnabled @ 0x1C017FBD0 (DxgkIsAdapterVirtualTopologyEnabled.c)
 *     DxgkIsMonitorConnected @ 0x1C017FD10 (DxgkIsMonitorConnected.c)
 *     DxgkNeedToEnableCddPrimary @ 0x1C017FF70 (DxgkNeedToEnableCddPrimary.c)
 *     DxgkQueryClockCalibration @ 0x1C0180C70 (DxgkQueryClockCalibration.c)
 *     DxgkSetDodIndirectSwapchain @ 0x1C0181710 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkChangeVideoMemoryReservation @ 0x1C01839B0 (DxgkChangeVideoMemoryReservation.c)
 *     ?NotifyDxgProcessDestroyed@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0189540 (-NotifyDxgProcessDestroyed@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C018E930 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     ?ResetVirtualFunction@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C018F520 (-ResetVirtualFunction@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z.c)
 *     ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0191DA0 (-VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusDdiGetNodeMetadata@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0192580 (-VmBusDdiGetNodeMetadata@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01928F0 (-VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusIsSyncObjectSignaled@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01937B0 (-VmBusIsSyncObjectSignaled@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1C019DAD4 (-QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z.c)
 *     DxgkGetMultisampleMethodList @ 0x1C01A3C30 (DxgkGetMultisampleMethodList.c)
 *     DxgkInvalidateActiveVidPn @ 0x1C01A4110 (DxgkInvalidateActiveVidPn.c)
 *     ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C01A836C (-DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x1C01A84F4 (-DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z.c)
 *     ?DxgkEscapeStopDisplayAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01A8FB0 (-DxgkEscapeStopDisplayAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAXE_J@Z @ 0x1C01A9B58 (-CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAXE_J@Z.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C01AAD1C (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     ?ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ @ 0x1C01AB7D0 (-ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ.c)
 *     DxgkIsVidPnSourceOwnerDwm @ 0x1C01AC5F0 (DxgkIsVidPnSourceOwnerDwm.c)
 *     ?DxgkTrimProcessCommitmentAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01B9480 (-DxgkTrimProcessCommitmentAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z @ 0x1C01B9E50 (-SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z.c)
 *     DxgkSetStablePowerState @ 0x1C01BB230 (DxgkSetStablePowerState.c)
 *     DxgkHandleVideoParameters @ 0x1C01C2684 (DxgkHandleVideoParameters.c)
 *     _lambda_36c2ba6a7cba07a048b6de3ef88fdf59_::operator() @ 0x1C01C2DFC (_lambda_36c2ba6a7cba07a048b6de3ef88fdf59_--operator().c)
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C01C3B80 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 *     ?DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z @ 0x1C01C3E48 (-DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z.c)
 *     ?DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z @ 0x1C01C40D0 (-DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z.c)
 *     ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C01C4258 (-DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4554 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     InvalidateChildRelationsOnAdapterCallback @ 0x1C01C49F0 (InvalidateChildRelationsOnAdapterCallback.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C01C4AA4 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MON.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXXZP6AJPEAV3@2@Z@Z @ 0x1C01C8B14 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_M.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C01C8E40 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_.c)
 *     DxgkCreateOutputDupl @ 0x1C01C9200 (DxgkCreateOutputDupl.c)
 *     ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01D816C (-DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z @ 0x1C01D9894 (-GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z.c)
 *     ?BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C01F8164 (-BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 *     _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsAdaptersCallback_1_ @ 0x1C01F9340 (_BtlPreAcquireSharedAccess_-BTL_TOPOLOGY_CONSTRUCTOR--_AddExternalPathsAdaptersCallback_1_.c)
 *     _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_AddFirmwareRecommendedPathsToTopology_1_ @ 0x1C01F9400 (_BtlPreAcquireSharedAccess_-BTL_TOPOLOGY_CONSTRUCTOR--_AddFirmwareRecommendedPathsToTopology_1_.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01FA7C4 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C01FC31C (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 */

__int64 __fastcall COREADAPTERACCESS::AcquireShared(COREADAPTERACCESS *this)
{
  char *v1; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  _QWORD *v6; // rax

  v1 = (char *)this + 8;
  if ( *((_BYTE *)this + 32) )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v6[3] = 275LL;
    v6[4] = 4LL;
    v6[5] = v1;
    v6[6] = 0LL;
    v6[7] = 0LL;
    WdLogEvent5_WdCriticalError(v6);
  }
  v3 = *((_QWORD *)v1 + 2);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v3 + 160) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v3 + 48)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v4, &EventBlockThread);
      KeWaitForSingleObject((PVOID)(*((_QWORD *)v1 + 2) + 48LL), Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)v1 + 2));
  }
  v1[24] = 1;
  if ( *(_DWORD *)(*((_QWORD *)this + 3) + 176LL) == 1 )
  {
    if ( *((_QWORD *)this + 3) == *((_QWORD *)this + 7) )
      return 0LL;
    COREACCESS::AcquireShared((COREADAPTERACCESS *)((char *)this + 40));
    if ( *(_DWORD *)(*((_QWORD *)this + 7) + 176LL) == 1 )
      return 0LL;
    COREACCESS::Release((COREADAPTERACCESS *)((char *)this + 40));
  }
  COREACCESS::Release((COREACCESS *)v1);
  return 3221226166LL;
}
