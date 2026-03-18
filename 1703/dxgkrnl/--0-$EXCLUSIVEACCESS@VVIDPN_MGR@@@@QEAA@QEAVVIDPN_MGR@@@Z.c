/*
 * XREFs of ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70
 * Callers:
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C008BCF8 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C0099E20 (DxgkQueryMonitorTypeLockHeld.c)
 *     DmmEnablePathsFromVidPnSource @ 0x1C0099FDC (DmmEnablePathsFromVidPnSource.c)
 *     DmmDisablePathsFromVidPnSource @ 0x1C009A290 (DmmDisablePathsFromVidPnSource.c)
 *     DxgMiniportQueryVidPnInterfaceCB @ 0x1C009BCE0 (DxgMiniportQueryVidPnInterfaceCB.c)
 *     ?CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A0E40 (-CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00A2674 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource @ 0x1C00A2884 (DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource.c)
 *     DmmUpdateGammaRampOnAllClientVidPnPathsFromSource @ 0x1C00A2B34 (DmmUpdateGammaRampOnAllClientVidPnPathsFromSource.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_ @ 0x1C00A2E80 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_1_.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_0_ @ 0x1C00A3E90 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_0_.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A4324 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAU_D3DKMT_VIDPN_SOU.c)
 *     ?CalcAllPathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A5340 (-CalcAllPathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C00A580C (-DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z.c)
 *     DmmCacheDisplayModeChangeRequest @ 0x1C00A5A38 (DmmCacheDisplayModeChangeRequest.c)
 *     DmmPowerOnTargetsFromSourceIfNecessary @ 0x1C00A5B08 (DmmPowerOnTargetsFromSourceIfNecessary.c)
 *     DmmGetSourceConnectedToTargetInClientVidPn @ 0x1C00A6F38 (DmmGetSourceConnectedToTargetInClientVidPn.c)
 *     ?ReleaseVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00A73E0 (-ReleaseVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@@Z.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00A8A40 (DxgkGetAdapterDefaultScaling.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00A8CB8 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_.c)
 *     DmmGetCurrentIntegerVSyncFromClientVidPnSource @ 0x1C00A8F6C (DmmGetCurrentIntegerVSyncFromClientVidPnSource.c)
 *     DmmIsPresentPathInClientVidPnTopology @ 0x1C00AA714 (DmmIsPresentPathInClientVidPnTopology.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00AB07C (DmmGetVideoOutputTechnology.c)
 *     DmmCanAddPresentPathToClientVidPn @ 0x1C00AB3C8 (DmmCanAddPresentPathToClientVidPn.c)
 *     ?ReleaseSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C00AB9A0 (-ReleaseSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDP.c)
 *     _EnforceDriverModelScalingPolicy @ 0x1C00ABF30 (_EnforceDriverModelScalingPolicy.c)
 *     ?CreateVidPnFromLastClientCommittedVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C00AD3A0 (-CreateVidPnFromLastClientCommittedVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN_.c)
 *     ?CreateMonitorSetId@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00AD730 (-CreateMonitorSetId@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00ADF6C (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_1_ @ 0x1C00AF280 (_BtlPreAcquireSharedAccess_-CCD_BTL_CLONE_GROUP_RESOLVER--_ResolveAdaptersCallback_1_.c)
 *     DmmAppendCcdConnectedSetForAdapter @ 0x1C00AF490 (DmmAppendCcdConnectedSetForAdapter.c)
 *     DmmGetTargetIdFromCcdMonitorId @ 0x1C00AF6C4 (DmmGetTargetIdFromCcdMonitorId.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00F00F4 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_ @ 0x1C00F0620 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_1_.c)
 *     _BmlGetPathModalityForAdapter @ 0x1C00F1B74 (_BmlGetPathModalityForAdapter.c)
 *     ?ReleaseTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C00F3F90 (-ReleaseTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDP.c)
 *     DmmGetAllHMDTargetIdForAdapter @ 0x1C00F6D34 (DmmGetAllHMDTargetIdForAdapter.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4D3DDDI_COLOR_SPACE_TYPE@@@Z @ 0x1C00F8014 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4D3.c)
 *     DmmIsTargetHMD @ 0x1C00F8170 (DmmIsTargetHMD.c)
 *     ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00F8220 (-DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DmmGetEmergentSimulatedTarget @ 0x1C00F83E4 (DmmGetEmergentSimulatedTarget.c)
 *     ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x1C0104858 (-DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z.c)
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115C60 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 *     DmmInitializeAdapter @ 0x1C01223D4 (DmmInitializeAdapter.c)
 *     ?InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0171B48 (-InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0172B78 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C01A9808 (-DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01D0C74 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C01D1550 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C01D2068 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?DmmGetMonitorSupportsHDR@@YAJPEAXIPEAE@Z @ 0x1C01D2304 (-DmmGetMonitorSupportsHDR@@YAJPEAXIPEAE@Z.c)
 *     ?DmmResetBaseVideoOutputTechnology@@YAJQEAXI@Z @ 0x1C01D27E0 (-DmmResetBaseVideoOutputTechnology@@YAJQEAXI@Z.c)
 *     ?DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C01D28EC (-DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DmmAdapterPowerChange @ 0x1C01D4908 (DmmAdapterPowerChange.c)
 *     DmmDRTTest @ 0x1C01D4B8C (DmmDRTTest.c)
 *     DmmGetClientVidPnTargetModeInfo @ 0x1C01D4F9C (DmmGetClientVidPnTargetModeInfo.c)
 *     DmmGetMacrovisonSupportFromClientVidPnSource @ 0x1C01D5330 (DmmGetMacrovisonSupportFromClientVidPnSource.c)
 *     DmmGetMostImportantClientVidPnPathTargetsFromSource @ 0x1C01D557C (DmmGetMostImportantClientVidPnPathTargetsFromSource.c)
 *     DmmGetMostImportantVidPnPathTargetsFromSource @ 0x1C01D56C0 (DmmGetMostImportantVidPnPathTargetsFromSource.c)
 *     DmmGetMultisamplingMethodSetFromClientVidPnSource @ 0x1C01D57D0 (DmmGetMultisamplingMethodSetFromClientVidPnSource.c)
 *     DmmGetPathContentFromClientVidPnSource @ 0x1C01D5B38 (DmmGetPathContentFromClientVidPnSource.c)
 *     DmmInvalidateActiveVidPn @ 0x1C01D5D98 (DmmInvalidateActiveVidPn.c)
 *     DmmIsSourcePresentedOnClientVidPnAnalogTvOut @ 0x1C01D60F8 (DmmIsSourcePresentedOnClientVidPnAnalogTvOut.c)
 *     DmmIsTargetForcable @ 0x1C01D6310 (DmmIsTargetForcable.c)
 *     DmmIsTargetInClientVidPnTopology @ 0x1C01D6464 (DmmIsTargetInClientVidPnTopology.c)
 *     DmmIsVidPnTargetConnectedToSource @ 0x1C01D6588 (DmmIsVidPnTargetConnectedToSource.c)
 *     DmmRemovePathsFromVidPnSource @ 0x1C01D66F0 (DmmRemovePathsFromVidPnSource.c)
 *     DmmSetTargetForcableState @ 0x1C01D6ADC (DmmSetTargetForcableState.c)
 *     DmmUpdateContentOnAllClientVidPnPathsFromSource @ 0x1C01D6C10 (DmmUpdateContentOnAllClientVidPnPathsFromSource.c)
 *     ?CreateVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C01D7C00 (-CreateVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTE.c)
 *     ?CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C01D7DA0 (-CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_.c)
 *     ?IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C01D88E0 (-IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z.c)
 *     ?DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01D9284 (-DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 *     ?DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01D9334 (-DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CH.c)
 *     ?DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01D93EC (-DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z @ 0x1C01D9484 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z.c)
 *     ?DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D9750 (-DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01DC770 (-LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C01E0148 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01E070C (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C01E1C44 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax

  *(_QWORD *)a1 = a2;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(*(_QWORD *)a1 + 40LL));
  return a1;
}
