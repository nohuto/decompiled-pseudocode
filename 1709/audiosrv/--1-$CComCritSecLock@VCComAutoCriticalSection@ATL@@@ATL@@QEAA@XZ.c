/*
 * XREFs of ??1?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@XZ @ 0x18005BF00
 * Callers:
 *     _CPolicyConfig::GetApplicationDefaultEndpoint_::_1_::dtor$0 @ 0x180039000 (_CPolicyConfig--GetApplicationDefaultEndpoint_--_1_--dtor$0.c)
 *     _CPolicyConfig::SetApplicationDefaultEndpoint_::_1_::dtor$0 @ 0x180087432 (_CPolicyConfig--SetApplicationDefaultEndpoint_--_1_--dtor$0.c)
 *     _PhoneCallAudio::DoEnableCellularProviderChange_::_1_::dtor$0 @ 0x1800C7DE6 (_PhoneCallAudio--DoEnableCellularProviderChange_--_1_--dtor$0.c)
 *     _PhoneCallAudio::DoEnableCellularRouting_::_1_::dtor$0 @ 0x1800C7E76 (_PhoneCallAudio--DoEnableCellularRouting_--_1_--dtor$0.c)
 *     _PhoneCallAudio::DoSetCellularRxMute_::_1_::dtor$0 @ 0x1800C7F06 (_PhoneCallAudio--DoSetCellularRxMute_--_1_--dtor$0.c)
 *     _PhoneCallAudio::DoSetCellularTxMute_::_1_::dtor$0 @ 0x1800C7F96 (_PhoneCallAudio--DoSetCellularTxMute_--_1_--dtor$0.c)
 *     _PhoneCallAudio::EndSession_::_1_::dtor$0 @ 0x1800C809C (_PhoneCallAudio--EndSession_--_1_--dtor$0.c)
 *     _PhoneCallAudio::EndSession_::_1_::dtor$1 @ 0x1800C80A8 (_PhoneCallAudio--EndSession_--_1_--dtor$1.c)
 *     _PhoneCallAudio::GetCallState_::_1_::dtor$0 @ 0x1800C81C2 (_PhoneCallAudio--GetCallState_--_1_--dtor$0.c)
 *     _PhoneCallAudio::GetMute_::_1_::dtor$0 @ 0x1800C82F5 (_PhoneCallAudio--GetMute_--_1_--dtor$0.c)
 *     _PhoneCallAudio::GetPhoneCallAudioState_::_1_::dtor$0 @ 0x1800C8376 (_PhoneCallAudio--GetPhoneCallAudioState_--_1_--dtor$0.c)
 *     _PhoneCallAudio::InitPhoneTopology_::_1_::dtor$0 @ 0x1800C8497 (_PhoneCallAudio--InitPhoneTopology_--_1_--dtor$0.c)
 *     _PhoneCallAudio::OnEndpointDeviceAdded_::_1_::dtor$0 @ 0x1800C86EE (_PhoneCallAudio--OnEndpointDeviceAdded_--_1_--dtor$0.c)
 *     _PhoneCallAudio::OnEndpointDeviceRemoved_::_1_::dtor$1 @ 0x1800C876D (_PhoneCallAudio--OnEndpointDeviceRemoved_--_1_--dtor$1.c)
 *     _PhoneCallAudio::OnPhoneCallStarted_::_1_::dtor$0 @ 0x1800C881A (_PhoneCallAudio--OnPhoneCallStarted_--_1_--dtor$0.c)
 *     _PhoneCallAudio::ProviderChange_::_1_::dtor$0 @ 0x1800C88FF (_PhoneCallAudio--ProviderChange_--_1_--dtor$0.c)
 *     _PhoneCallAudio::ReleasePhoneTopology_::_1_::dtor$0 @ 0x1800C8991 (_PhoneCallAudio--ReleasePhoneTopology_--_1_--dtor$0.c)
 *     _PhoneCallAudio::RequestPendingCellularRoutingEnable_::_1_::dtor$0 @ 0x1800C8A52 (_PhoneCallAudio--RequestPendingCellularRoutingEnable_--_1_--dtor$0.c)
 *     _PhoneCallAudio::SetCallState_::_1_::dtor$0 @ 0x1800C8B57 (_PhoneCallAudio--SetCallState_--_1_--dtor$0.c)
 *     _PhoneCallAudio::SetMute_::_1_::dtor$0 @ 0x1800C8C3B (_PhoneCallAudio--SetMute_--_1_--dtor$0.c)
 *     _PhoneCallAudio::SetRoutingPolicy_::_1_::dtor$0 @ 0x1800C8CCE (_PhoneCallAudio--SetRoutingPolicy_--_1_--dtor$0.c)
 *     _PhoneCallAudio::SetVolume_::_1_::dtor$0 @ 0x1800C8D5A (_PhoneCallAudio--SetVolume_--_1_--dtor$0.c)
 *     _PhoneCallAudio::StartSession_::_1_::dtor$0 @ 0x1800C8EBD (_PhoneCallAudio--StartSession_--_1_--dtor$0.c)
 *     _PhoneCallAudio::StartSession_::_1_::dtor$1 @ 0x1800C8EC9 (_PhoneCallAudio--StartSession_--_1_--dtor$1.c)
 *     _PhoneCallAudio::UpdatePhoneCallAudioState_::_1_::dtor$0 @ 0x1800C8FD1 (_PhoneCallAudio--UpdatePhoneCallAudioState_--_1_--dtor$0.c)
 *     _RoutingTimer::InternalTimerCallback_::_1_::dtor$0 @ 0x1800C903E (_RoutingTimer--InternalTimerCallback_--_1_--dtor$0.c)
 *     _RoutingTimer::StartTimer_::_1_::dtor$0 @ 0x1800C913E (_RoutingTimer--StartTimer_--_1_--dtor$0.c)
 *     _AudioDeviceMgr::AddWorkItemToQueue_::_1_::dtor$0 @ 0x1800E6BDC (_AudioDeviceMgr--AddWorkItemToQueue_--_1_--dtor$0.c)
 *     _AudioDeviceMgr::Initialize_::_1_::dtor$0 @ 0x1800E75E0 (_AudioDeviceMgr--Initialize_--_1_--dtor$0.c)
 *     _AudioDeviceMgr::ProcessOnDeviceRemoved_::_1_::dtor$3 @ 0x1800E7C7C (_AudioDeviceMgr--ProcessOnDeviceRemoved_--_1_--dtor$3.c)
 *     _AudioDeviceMgr::ProcessOnDeviceStateChanged_::_1_::dtor$2 @ 0x1800E7E9D (_AudioDeviceMgr--ProcessOnDeviceStateChanged_--_1_--dtor$2.c)
 *     _AudioDeviceMgr::WorkItemThreadProc_::_1_::dtor$1 @ 0x1800E825D (_AudioDeviceMgr--WorkItemThreadProc_--_1_--dtor$1.c)
 *     _EndpointCollection::AddDevice_::_1_::dtor$0 @ 0x1800E84C5 (_EndpointCollection--AddDevice_--_1_--dtor$0.c)
 *     _EndpointCollection::ReplaceDevice_::_1_::dtor$0 @ 0x1800E8FFD (_EndpointCollection--ReplaceDevice_--_1_--dtor$0.c)
 *     _PhoneTopology3::AddWorkItemToQueue_::_1_::dtor$0 @ 0x1800EAD89 (_PhoneTopology3--AddWorkItemToQueue_--_1_--dtor$0.c)
 *     _PhoneTopology3::DoSetCellularEnable_::_1_::dtor$2 @ 0x1800EB1D4 (_PhoneTopology3--DoSetCellularEnable_--_1_--dtor$2.c)
 *     _PhoneTopology3::DoSetCellularEnable_::_1_::dtor$3 @ 0x1800EB1E0 (_PhoneTopology3--DoSetCellularEnable_--_1_--dtor$3.c)
 *     _PhoneTopology3::DoSetCellularRxMute_::_1_::dtor$2 @ 0x1800EB3B4 (_PhoneTopology3--DoSetCellularRxMute_--_1_--dtor$2.c)
 *     _PhoneTopology3::DoSetCellularTxMute_::_1_::dtor$0 @ 0x1800EB485 (_PhoneTopology3--DoSetCellularTxMute_--_1_--dtor$0.c)
 *     _PhoneTopology3::DoSetProviderChange_::_1_::dtor$0 @ 0x1800EB569 (_PhoneTopology3--DoSetProviderChange_--_1_--dtor$0.c)
 *     _PhoneTopology3::GetCellularEnable_::_1_::dtor$0 @ 0x1800EB82E (_PhoneTopology3--GetCellularEnable_--_1_--dtor$0.c)
 *     _PhoneTopology3::GetCellularRxMute_::_1_::dtor$0 @ 0x1800EB9FD (_PhoneTopology3--GetCellularRxMute_--_1_--dtor$0.c)
 *     _PhoneTopology3::GetCellularTxMute_::_1_::dtor$0 @ 0x1800EBBCD (_PhoneTopology3--GetCellularTxMute_--_1_--dtor$0.c)
 *     _PhoneTopology3::GetNewestWorkItem_::_1_::dtor$0 @ 0x1800EBCCD (_PhoneTopology3--GetNewestWorkItem_--_1_--dtor$0.c)
 *     _PhoneTopology3::IsCellularEnabled_::_1_::dtor$0 @ 0x1800EC139 (_PhoneTopology3--IsCellularEnabled_--_1_--dtor$0.c)
 *     _PhoneTopology3::SetActiveEndpoint_::_1_::dtor$0 @ 0x1800EC7CE (_PhoneTopology3--SetActiveEndpoint_--_1_--dtor$0.c)
 *     _PhoneTopology3::SetCellularRxVolume_::_1_::dtor$0 @ 0x1800ECC0D (_PhoneTopology3--SetCellularRxVolume_--_1_--dtor$0.c)
 *     _PhoneTopology3::WorkItemThreadProc_::_1_::dtor$0 @ 0x1800ECE1C (_PhoneTopology3--WorkItemThreadProc_--_1_--dtor$0.c)
 *     _PhoneTopology3::WorkItemThreadProc_::_1_::dtor$1 @ 0x1800ECE28 (_PhoneTopology3--WorkItemThreadProc_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::~CComCritSecLock<ATL::CComAutoCriticalSection>(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)a1);
    *(_BYTE *)(a1 + 8) = 0;
  }
}
