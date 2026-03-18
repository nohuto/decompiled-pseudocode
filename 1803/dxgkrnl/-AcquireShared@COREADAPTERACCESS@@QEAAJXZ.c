/*
 * XREFs of ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28
 * Callers:
 *     ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0030480 (-AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?RfxVgpuResetCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00306C0 (-RfxVgpuResetCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?UpdateDiagnosticAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0030880 (-UpdateDiagnosticAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_N@Z @ 0x1C0098734 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_N@Z.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C009AB00 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkIsAdapterVirtualTopologyEnabled @ 0x1C009C36C (DxgkIsAdapterVirtualTopologyEnabled.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C009CB0C (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C009E200 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C009EEFC (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z2P6AJPEAV3@32@Z@Z @ 0x1C009F444 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C009FEC4 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@HPEAX@Z @ 0x1C00A1870 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@HPEAX@Z.c)
 *     ?NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C00A65C8 (-NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C00A8B9C (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x1C00AA5D0 (-DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z @ 0x1C00AA660 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z.c)
 *     OutputDuplProcessTerminate @ 0x1C00AA958 (OutputDuplProcessTerminate.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00AB300 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C00ABB70 (DxgkGetMonitorInternalInfo.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00AC42C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x1C00ACA68 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DX.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C00ACBF8 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C00ACEA0 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_1_ @ 0x1C00AD050 (_BtlPreAcquireSharedAccess_-CCD_BTL_CONNECTIVITY_COLLECTOR--_AppendConnectedSetAdaptersCallback_.c)
 *     DxgkGetDisplayModeList @ 0x1C00AD370 (DxgkGetDisplayModeList.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_ @ 0x1C00ADA30 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_1_.c)
 *     _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_1_ @ 0x1C00ADD70 (_BtlPreAcquireSharedAccess_-BTL_TOPOLOGY_CONSTRUCTOR--_ANCHOR_INFO--_FindAnchorAdaptersCallback_.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_1_ @ 0x1C00ADE30 (_BtlPreAcquireSharedAccess_-CCD_BTL_CLONE_GROUP_RESOLVER--_ResolveAdaptersCallback_1_.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00AEB98 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 *     ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00AF490 (-DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00B2C60 (-_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkUpdateGdiInfo @ 0x1C00C7850 (DxgkUpdateGdiInfo.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00CF8C0 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkIsSourceInHardwareClone @ 0x1C00D6750 (DxgkIsSourceInHardwareClone.c)
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1C00D73A0 (DxgkGetMultiPlaneOverlayCaps.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00D7B0C (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     EnforceDriverModelScalingPolicy @ 0x1C00D7F18 (EnforceDriverModelScalingPolicy.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00D8450 (DxgkGetAdapterDefaultScaling.c)
 *     DxgkGetPostCompositionCaps @ 0x1C00D8A80 (DxgkGetPostCompositionCaps.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1C00D9750 (DxgkFreeGpuVirtualAddress.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00D9A58 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00DA480 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C00DA618 (-DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00DAF10 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00DB2D0 (-CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_ @ 0x1C00DBD90 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_1_.c)
 *     ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1C00DC0B4 (-DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_0_ @ 0x1C00DCCC0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_0_.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C00DD2E0 (DxgkReserveGpuVirtualAddress.c)
 *     ?DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z @ 0x1C00DDB60 (-DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00DDD20 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@1@Z @ 0x1C00DE560 (-DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@1@Z.c)
 *     DxgkQueryModeListCacheLuid @ 0x1C00DEAB0 (DxgkQueryModeListCacheLuid.c)
 *     ?CalcAllPathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00DEBD0 (-CalcAllPathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkIsBootPrimarySource @ 0x1C00DEEB0 (DxgkIsBootPrimarySource.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00E03F0 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C00F2E80 (-QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00F5360 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C00FA8F8 (-AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00FAB60 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C0107440 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     DxgkSetIndependentFlipMode @ 0x1C0108844 (DxgkSetIndependentFlipMode.c)
 *     DxgkConfirmToken @ 0x1C0108B1C (DxgkConfirmToken.c)
 *     DxgkGetPresentStats @ 0x1C0108C30 (DxgkGetPresentStats.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C0108FF0 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     DxgkGetScanLine @ 0x1C010BDD0 (DxgkGetScanLine.c)
 *     _lambda_9701550c22e6dfba19810e7e8a87dbd3_::operator() @ 0x1C010FCA0 (_lambda_9701550c22e6dfba19810e7e8a87dbd3_--operator().c)
 *     ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C01114C0 (-DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z.c)
 *     ?HandleUnblockUEFIFrameBufferRanges@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0149830 (-HandleUnblockUEFIFrameBufferRanges@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DxgkSetMonitorColorSpaceTransform @ 0x1C01581E0 (DxgkSetMonitorColorSpaceTransform.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C0164E84 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C0165270 (-DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z.c)
 *     ?DxgkpProcessPowerPStateWork@@YAXPEAX@Z @ 0x1C0165C90 (-DxgkpProcessPowerPStateWork@@YAXPEAX@Z.c)
 *     ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C01666CC (-QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z.c)
 *     DxgkIsMonitorConnected @ 0x1C0167570 (DxgkIsMonitorConnected.c)
 *     DxgkIsVidPnSourceOwnerExclusive @ 0x1C01677D0 (DxgkIsVidPnSourceOwnerExclusive.c)
 *     DxgkNeedToEnableCddPrimary @ 0x1C0167910 (DxgkNeedToEnableCddPrimary.c)
 *     DxgkQueryClockCalibration @ 0x1C0168630 (DxgkQueryClockCalibration.c)
 *     DxgkSetDodIndirectSwapchain @ 0x1C01692E0 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C016BBEC (DxgkChangeVideoMemoryReservationInternal.c)
 *     ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C0173158 (-DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@.c)
 *     ?NotifyDxgProcessDestroyed@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0173C44 (-NotifyDxgProcessDestroyed@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C01740E8 (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNC.c)
 *     DxgkDdiGetVirtualGpuInfo @ 0x1C01749F0 (DxgkDdiGetVirtualGpuInfo.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0178990 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0179770 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017D9D0 (-VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusDdiGetNodeMetadata@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017E4C0 (-VmBusDdiGetNodeMetadata@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017EA00 (-VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusIsSyncObjectSignaled@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017F980 (-VmBusIsSyncObjectSignaled@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1C018B9A0 (-QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z.c)
 *     DxgkGetMultisampleMethodList @ 0x1C0194600 (DxgkGetMultisampleMethodList.c)
 *     DxgkInvalidateActiveVidPn @ 0x1C0194B00 (DxgkInvalidateActiveVidPn.c)
 *     ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C019AFE8 (-DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x1C019B170 (-DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z.c)
 *     ?DxgkpEscapeStopAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C019BC20 (-DxgkpEscapeStopAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAXE_J@Z @ 0x1C019D5D8 (-CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAXE_J@Z.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C019FB34 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     ?ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ @ 0x1C01A0860 (-ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ.c)
 *     DxgkGetAdapter @ 0x1C01A1960 (DxgkGetAdapter.c)
 *     DxgkIsVidPnSourceOwnerDwm @ 0x1C01A1D20 (DxgkIsVidPnSourceOwnerDwm.c)
 *     ?DxgkTrimProcessCommitmentAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01B6930 (-DxgkTrimProcessCommitmentAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z @ 0x1C01B7840 (-SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z.c)
 *     ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z @ 0x1C01B7A30 (-SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z.c)
 *     DxgkSetStablePowerState @ 0x1C01B9C10 (DxgkSetStablePowerState.c)
 *     DxgkHandleVideoParameters @ 0x1C01C3B3C (DxgkHandleVideoParameters.c)
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C01C4900 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 *     ?DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z @ 0x1C01C4C24 (-DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z.c)
 *     ?DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z @ 0x1C01C4F6C (-DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z.c)
 *     ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C01C53A8 (-DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C67BC (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     InvalidateChildRelationsOnAdapterCallback @ 0x1C01C6C60 (InvalidateChildRelationsOnAdapterCallback.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE333@Z @ 0x1C01C6EAC (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 *     ?SendColorimetricControlToDriverCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01C6FC0 (-SendColorimetricControlToDriverCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C01C7128 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MON.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXI@ZIP6AJPEAV3@2I@Z@Z @ 0x1C01CBCB0 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXXZP6AJPEAV3@2@Z@Z @ 0x1C01CBE44 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_M.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C01CC170 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_.c)
 *     DxgkCreateOutputDupl @ 0x1C01CC530 (DxgkCreateOutputDupl.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01CE7F0 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01E25F0 (-DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z @ 0x1C01E3CB4 (-GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z.c)
 *     ?AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C01EA288 (-AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C0225F68 (-BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 *     _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsAdaptersCallback_1_ @ 0x1C02270B0 (_BtlPreAcquireSharedAccess_-BTL_TOPOLOGY_CONSTRUCTOR--_AddExternalPathsAdaptersCallback_1_.c)
 *     _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_AddFirmwareRecommendedPathsToTopology_1_ @ 0x1C0227170 (_BtlPreAcquireSharedAccess_-BTL_TOPOLOGY_CONSTRUCTOR--_AddFirmwareRecommendedPathsToTopology_1_.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C0228370 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C0229D54 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00F4EE0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 */

__int64 __fastcall COREADAPTERACCESS::AcquireShared(COREADAPTERACCESS *this)
{
  char *v1; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD *v7; // rax

  v1 = (char *)this + 8;
  if ( *((_BYTE *)this + 32) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this);
    v7[3] = 275LL;
    v7[4] = 4LL;
    v7[5] = v1;
    v7[6] = 0LL;
    v7[7] = 0LL;
    WdLogEvent5_WdCriticalError(v7);
  }
  v3 = *((_QWORD *)v1 + 2);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v3 + 160) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v3 + 48)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v4, &EventBlockThread, v5, 72LL);
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
