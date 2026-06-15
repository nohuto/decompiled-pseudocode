/*
 * XREFs of ??1CCritSecLock@ATL@@QEAA@XZ @ 0x1800100E8
 * Callers:
 *     _CVolumeLimitTrackerImpl::Shutdown_::_1_::dtor$0 @ 0x180036561 (_CVolumeLimitTrackerImpl--Shutdown_--_1_--dtor$0.c)
 *     _CVolumeLimitTrackerImpl::Shutdown_::_1_::dtor$1 @ 0x18003656D (_CVolumeLimitTrackerImpl--Shutdown_--_1_--dtor$1.c)
 *     _CVolumeLimitTrackerImpl::UpdateTotalTrackedTime_::_1_::dtor$0 @ 0x1800365A9 (_CVolumeLimitTrackerImpl--UpdateTotalTrackedTime_--_1_--dtor$0.c)
 *     _CDuckingManager::OnStateChanged_::_1_::dtor$1 @ 0x1800365B5 (_CDuckingManager--OnStateChanged_--_1_--dtor$1.c)
 *     _CDuckingManager::QueueDuckingWorkItem_::_1_::dtor$1 @ 0x180036828 (_CDuckingManager--QueueDuckingWorkItem_--_1_--dtor$1.c)
 *     _CDuckingManager::GetDuckableSessionsList_::_1_::dtor$0 @ 0x180036868 (_CDuckingManager--GetDuckableSessionsList_--_1_--dtor$0.c)
 *     _CApplication::LinkProcess_::_1_::dtor$0 @ 0x180036B06 (_CApplication--LinkProcess_--_1_--dtor$0.c)
 *     _CApplication::DelinkProcess_::_1_::dtor$0 @ 0x180036B46 (_CApplication--DelinkProcess_--_1_--dtor$0.c)
 *     _CApplicationManager::UpdateVolumeForAllAppsInSession_::_1_::dtor$0 @ 0x180036B92 (_CApplicationManager--UpdateVolumeForAllAppsInSession_--_1_--dtor$0.c)
 *     _CApplicationManager::UpdateVolumeForAllAppsInSession_::_1_::dtor$1 @ 0x180036B9E (_CApplicationManager--UpdateVolumeForAllAppsInSession_--_1_--dtor$1.c)
 *     _CTransportControlRouterWorkItem::Invoke_::_1_::dtor$0 @ 0x180036BAA (_CTransportControlRouterWorkItem--Invoke_--_1_--dtor$0.c)
 *     _CAppStateChangedWorkItem::Invoke_::_1_::dtor$0 @ 0x180036BB6 (_CAppStateChangedWorkItem--Invoke_--_1_--dtor$0.c)
 *     _CApplication::DisconnectExclusiveModeStreams_::_1_::dtor$0 @ 0x180036BC2 (_CApplication--DisconnectExclusiveModeStreams_--_1_--dtor$0.c)
 *     _CApplication::DisconnectExclusiveModeStreams_::_1_::dtor$1 @ 0x180036BCE (_CApplication--DisconnectExclusiveModeStreams_--_1_--dtor$1.c)
 *     _CApplication::DisconnectExclusiveModeStreams_::_1_::dtor$2 @ 0x180036BDA (_CApplication--DisconnectExclusiveModeStreams_--_1_--dtor$2.c)
 *     _CApplication::GetSmtcProcesses_::_1_::dtor$0 @ 0x180036BF2 (_CApplication--GetSmtcProcesses_--_1_--dtor$0.c)
 *     _CApplication::CleanupBCMStartupLatencyGracePeriod_::_1_::dtor$0 @ 0x180036C6C (_CApplication--CleanupBCMStartupLatencyGracePeriod_--_1_--dtor$0.c)
 *     _CApplication::CleanupBCMStartupLatencyGracePeriod_::_1_::dtor$1 @ 0x180036C78 (_CApplication--CleanupBCMStartupLatencyGracePeriod_--_1_--dtor$1.c)
 *     _CApplication::RegisterAppVolumePolicyChange_::_1_::dtor$0 @ 0x180036C84 (_CApplication--RegisterAppVolumePolicyChange_--_1_--dtor$0.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$0 @ 0x180036CC4 (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$0.c)
 *     _CProcess::AddSession_::_1_::dtor$0 @ 0x180036FD6 (_CProcess--AddSession_--_1_--dtor$0.c)
 *     _CProcess::RecalculateVolume_::_1_::dtor$0 @ 0x18003704A (_CProcess--RecalculateVolume_--_1_--dtor$0.c)
 *     _CProcess::RecalculateVolume_::_1_::dtor$1 @ 0x180037056 (_CProcess--RecalculateVolume_--_1_--dtor$1.c)
 *     _CProcess::RegisterProcessNotification_::_1_::dtor$1 @ 0x18003707A (_CProcess--RegisterProcessNotification_--_1_--dtor$1.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$2 @ 0x18003732D (_CApplicationManager--RpcGetProcess_--_1_--dtor$2.c)
 *     _CApplicationManager::RemoveProcess_::_1_::dtor$0 @ 0x1800373F1 (_CApplicationManager--RemoveProcess_--_1_--dtor$0.c)
 *     _CApplicationManager::GetApplication_::_1_::dtor$0 @ 0x180037431 (_CApplicationManager--GetApplication_--_1_--dtor$0.c)
 *     _CApplicationManager::RemoveApplication_::_1_::dtor$0 @ 0x180037474 (_CApplicationManager--RemoveApplication_--_1_--dtor$0.c)
 *     _CApplicationManager::ApplyPBMPolicy_::_1_::dtor$0 @ 0x1800374B4 (_CApplicationManager--ApplyPBMPolicy_--_1_--dtor$0.c)
 *     _CApplicationManager::ProcessTerminated_::_1_::dtor$0 @ 0x1800374C0 (_CApplicationManager--ProcessTerminated_--_1_--dtor$0.c)
 *     _CApplicationManager::ProcessTerminated_::_1_::dtor$1 @ 0x1800374CC (_CApplicationManager--ProcessTerminated_--_1_--dtor$1.c)
 *     _CApplicationManager::ProcessTerminated_::_1_::dtor$2 @ 0x1800374D8 (_CApplicationManager--ProcessTerminated_--_1_--dtor$2.c)
 *     _CApplicationManager::ProcessTerminated_::_1_::dtor$3 @ 0x1800374E4 (_CApplicationManager--ProcessTerminated_--_1_--dtor$3.c)
 *     _CApplicationManager::OnApplicationStateChanged_::_1_::dtor$0 @ 0x1800374F0 (_CApplicationManager--OnApplicationStateChanged_--_1_--dtor$0.c)
 *     _CApplicationManager::OnApplicationClosed_::_1_::dtor$1 @ 0x180037520 (_CApplicationManager--OnApplicationClosed_--_1_--dtor$1.c)
 *     _CApplicationManager::UpdateEndpointVolume_::_1_::dtor$0 @ 0x18003752C (_CApplicationManager--UpdateEndpointVolume_--_1_--dtor$0.c)
 *     _CApplicationManager::ProcessInteractivityNotification_::_1_::dtor$0 @ 0x180037544 (_CApplicationManager--ProcessInteractivityNotification_--_1_--dtor$0.c)
 *     _CApplicationManager::ProcessInteractivityNotification_::_1_::dtor$1 @ 0x180037550 (_CApplicationManager--ProcessInteractivityNotification_--_1_--dtor$1.c)
 *     _CApplicationManager::SendBackgroundStreamStateChangedNotifiction_::_1_::dtor$0 @ 0x18003755C (_CApplicationManager--SendBackgroundStreamStateChangedNotifiction_--_1_--dtor$0.c)
 *     _PickerHostContextManager::OnHostedAppStateChanged_::_1_::dtor$0 @ 0x180037574 (_PickerHostContextManager--OnHostedAppStateChanged_--_1_--dtor$0.c)
 *     _CTrackedEndpoint::OnMaxChannelVolumeChanged_::_1_::dtor$0 @ 0x180037AEC (_CTrackedEndpoint--OnMaxChannelVolumeChanged_--_1_--dtor$0.c)
 *     _CTrackedEndpoint::AddStream_::_1_::dtor$0 @ 0x180037B66 (_CTrackedEndpoint--AddStream_--_1_--dtor$0.c)
 *     _CTrackedEndpoint::RemoveStream_::_1_::dtor$0 @ 0x180037BA9 (_CTrackedEndpoint--RemoveStream_--_1_--dtor$0.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$0 @ 0x180037C17 (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CCritSecLock::~CCritSecLock(LPCRITICAL_SECTION *this)
{
  if ( *((_BYTE *)this + 8) )
  {
    LeaveCriticalSection(*this);
    *((_BYTE *)this + 8) = 0;
  }
}
