/*
 * XREFs of ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24
 * Callers:
 *     ?ClearApplicationDefaultEndpoint@CPolicyConfig@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18007FC40 (-ClearApplicationDefaultEndpoint@CPolicyConfig@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_.c)
 *     ?SetApplicationDefaultEndpoint@CPolicyConfig@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x180087230 (-SetApplicationDefaultEndpoint@CPolicyConfig@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ??1PhoneCallAudio@@MEAA@XZ @ 0x1800C7948 (--1PhoneCallAudio@@MEAA@XZ.c)
 *     ?ClearPendingCellularRoutingEnable@PhoneCallAudio@@AEAAJXZ @ 0x1800C7B38 (-ClearPendingCellularRoutingEnable@PhoneCallAudio@@AEAAJXZ.c)
 *     ?DoEnableCellularProviderChange@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x1800C7D64 (-DoEnableCellularProviderChange@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@W4TelephonyType.c)
 *     ?DoEnableCellularRouting@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x1800C7DF4 (-DoEnableCellularRouting@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?DoSetCellularRxMute@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x1800C7E84 (-DoSetCellularRxMute@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?DoSetCellularTxMute@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x1800C7F14 (-DoSetCellularTxMute@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x1800C7FA4 (-DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?EndSession@PhoneCallAudio@@UEAAJXZ @ 0x1800C7FE0 (-EndSession@PhoneCallAudio@@UEAAJXZ.c)
 *     ?GetCallState@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@PEAW4TelephonyState@@@Z @ 0x1800C80F0 (-GetCallState@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@PEAW4TelephonyState@@@Z.c)
 *     ?GetMute@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyDataFlow@@PEAH@Z @ 0x1800C8220 (-GetMute@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyDataFlow@@PEAH@Z.c)
 *     ?GetPhoneCallAudioState@PhoneCallAudio@@AEAA?AW4_PhoneCallAudioState@@XZ @ 0x1800C8304 (-GetPhoneCallAudioState@PhoneCallAudio@@AEAA-AW4_PhoneCallAudioState@@XZ.c)
 *     ?InitPhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x1800C83F4 (-InitPhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 *     ?IsPendingCellularRoutingEnabledForInstance@PhoneCallAudio@@AEAAHPEAU_TelephonyInstanceData@@@Z @ 0x1800C84BC (-IsPendingCellularRoutingEnabledForInstance@PhoneCallAudio@@AEAAHPEAU_TelephonyInstanceData@@@Z.c)
 *     ?IsSessionStarted@PhoneCallAudio@@UEAAJPEAH@Z @ 0x1800C8520 (-IsSessionStarted@PhoneCallAudio@@UEAAJPEAH@Z.c)
 *     ?OnEndpointDeviceAdded@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x1800C8680 (-OnEndpointDeviceAdded@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z.c)
 *     ?OnEndpointDeviceRemoved@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x1800C8700 (-OnEndpointDeviceRemoved@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z.c)
 *     ?OnEndpointDeviceStateChanged@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x1800C8780 (-OnEndpointDeviceStateChanged@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z.c)
 *     ?OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ @ 0x1800C87AC (-OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ.c)
 *     ?ProviderChange@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x1800C8830 (-ProviderChange@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z.c)
 *     ?ReleasePhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x1800C890C (-ReleasePhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 *     ?RequestPendingCellularRoutingEnable@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@@Z @ 0x1800C89A0 (-RequestPendingCellularRoutingEnable@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@@Z.c)
 *     ?SetCallState@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyState@@@Z @ 0x1800C8A60 (-SetCallState@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyState@@@Z.c)
 *     ?SetMute@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyDataFlow@@H@Z @ 0x1800C8B70 (-SetMute@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyDataFlow@@H@Z.c)
 *     ?SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x1800C8C50 (-SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?SetVolume@PhoneCallAudio@@UEAAJM@Z @ 0x1800C8CE0 (-SetVolume@PhoneCallAudio@@UEAAJM@Z.c)
 *     ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x1800C8D70 (-StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?UpdateCommsPreferredEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAH@Z @ 0x1800C8F08 (-UpdateCommsPreferredEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_000.c)
 *     ?UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ @ 0x1800C8F88 (-UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ.c)
 *     ?InternalTimerCallback@RoutingTimer@@KAXPEAXE@Z @ 0x1800C8FE0 (-InternalTimerCallback@RoutingTimer@@KAXPEAXE@Z.c)
 *     ?IsTimerStarted@RoutingTimer@@UEAAHXZ @ 0x1800C9050 (-IsTimerStarted@RoutingTimer@@UEAAHXZ.c)
 *     ?StartTimer@RoutingTimer@@UEAAJXZ @ 0x1800C90A0 (-StartTimer@RoutingTimer@@UEAAJXZ.c)
 *     ?StopTimer@RoutingTimer@@UEAAXXZ @ 0x1800C9150 (-StopTimer@RoutingTimer@@UEAAXXZ.c)
 *     ?AddWorkItemToQueue@AudioDeviceMgr@@AEAAJPEAVWorkItemBase@@@Z @ 0x1800E6B34 (-AddWorkItemToQueue@AudioDeviceMgr@@AEAAJPEAVWorkItemBase@@@Z.c)
 *     ?GetPhoneTopology@AudioDeviceMgr@@UEAAJPEAPEAUIPhoneTopology@@@Z @ 0x1800E7470 (-GetPhoneTopology@AudioDeviceMgr@@UEAAJPEAPEAUIPhoneTopology@@@Z.c)
 *     ?Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z @ 0x1800E74EC (-Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z.c)
 *     ?IsPhoneTopologyValid@AudioDeviceMgr@@UEAAHXZ @ 0x1800E76A0 (-IsPhoneTopologyValid@AudioDeviceMgr@@UEAAHXZ.c)
 *     ?ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z @ 0x1800E7A24 (-ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z.c)
 *     ?ProcessOnDeviceStateChanged@AudioDeviceMgr@@QEAAJPEBGK@Z @ 0x1800E7CA0 (-ProcessOnDeviceStateChanged@AudioDeviceMgr@@QEAAJPEBGK@Z.c)
 *     ?WorkItemThreadProc@AudioDeviceMgr@@AEAAXXZ @ 0x1800E8118 (-WorkItemThreadProc@AudioDeviceMgr@@AEAAXXZ.c)
 *     ?AddDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z @ 0x1800E8440 (-AddDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z.c)
 *     ?RemoveDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z @ 0x1800E8EF0 (-RemoveDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z.c)
 *     ?ReplaceDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@0@Z @ 0x1800E8F70 (-ReplaceDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@0@Z.c)
 *     ??1PhoneTopology3@@MEAA@XZ @ 0x1800EA78C (--1PhoneTopology3@@MEAA@XZ.c)
 *     ?AddWorkItemToQueue@PhoneTopology3@@AEAAJPEAVPhoneTopology3WorkItem@@@Z @ 0x1800EACEC (-AddWorkItemToQueue@PhoneTopology3@@AEAAJPEAVPhoneTopology3WorkItem@@@Z.c)
 *     ?DoSetCellularEnable@PhoneTopology3@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x1800EB030 (-DoSetCellularEnable@PhoneTopology3@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?DoSetCellularRxMute@PhoneTopology3@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x1800EB28C (-DoSetCellularRxMute@PhoneTopology3@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?DoSetCellularTxMute@PhoneTopology3@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x1800EB3C0 (-DoSetCellularTxMute@PhoneTopology3@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?DoSetProviderChange@PhoneTopology3@@AEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x1800EB4A0 (-DoSetProviderChange@PhoneTopology3@@AEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@.c)
 *     ?GetCellularEnable@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x1800EB6D0 (-GetCellularEnable@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetCellularRxMute@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x1800EB860 (-GetCellularRxMute@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetCellularTxMute@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x1800EBA30 (-GetCellularTxMute@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetNewestWorkItem@PhoneTopology3@@AEAAHPEAVPhoneTopology3WorkItem@@@Z @ 0x1800EBC44 (-GetNewestWorkItem@PhoneTopology3@@AEAAHPEAVPhoneTopology3WorkItem@@@Z.c)
 *     ?IsCellularEnabled@PhoneTopology3@@UEAAHXZ @ 0x1800EC0C0 (-IsCellularEnabled@PhoneTopology3@@UEAAHXZ.c)
 *     ?SetActiveEndpoint@PhoneTopology3@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x1800EC660 (-SetActiveEndpoint@PhoneTopology3@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEnd.c)
 *     ?SetCellularRxVolume@PhoneTopology3@@UEAAJM@Z @ 0x1800ECB60 (-SetCellularRxVolume@PhoneTopology3@@UEAAJM@Z.c)
 *     ?WorkItemThreadProc@PhoneTopology3@@AEAAXXZ @ 0x1800ECCF8 (-WorkItemThreadProc@PhoneTopology3@@AEAAXXZ.c)
 *     ?s_WorkerThreadProc@PhoneTopology3@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800ECE40 (-s_WorkerThreadProc@PhoneTopology3@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
        __int64 a1,
        struct _RTL_CRITICAL_SECTION *a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 8) = 0;
  EnterCriticalSection(a2);
  result = a1;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
