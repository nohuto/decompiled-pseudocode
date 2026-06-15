/*
 * XREFs of ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18000B2F8
 * Callers:
 *     _CWindowsPolicyManager::UnregisterSession_::_1_::dtor$0 @ 0x180027D3D (_CWindowsPolicyManager--UnregisterSession_--_1_--dtor$0.c)
 *     _CWindowsPolicyManager::UnregisterSession_::_1_::dtor$1 @ 0x180027D49 (_CWindowsPolicyManager--UnregisterSession_--_1_--dtor$1.c)
 *     _CDuckingManager::OnStateChanged_::_1_::dtor$1 @ 0x180027D6D (_CDuckingManager--OnStateChanged_--_1_--dtor$1.c)
 *     _CDuckingManager::QueueDuckingWorkItem_::_1_::dtor$1 @ 0x180027FE0 (_CDuckingManager--QueueDuckingWorkItem_--_1_--dtor$1.c)
 *     _CDuckingManager::GetDuckableSessionsList_::_1_::dtor$0 @ 0x180028020 (_CDuckingManager--GetDuckableSessionsList_--_1_--dtor$0.c)
 *     _CApplication::LinkProcess_::_1_::dtor$0 @ 0x180028349 (_CApplication--LinkProcess_--_1_--dtor$0.c)
 *     _CApplicationManager::UpdateVolumeForAllAppsInSession_::_1_::dtor$0 @ 0x1800283BD (_CApplicationManager--UpdateVolumeForAllAppsInSession_--_1_--dtor$0.c)
 *     _CApplicationManager::UpdateVolumeForAllAppsInSession_::_1_::dtor$1 @ 0x1800283C9 (_CApplicationManager--UpdateVolumeForAllAppsInSession_--_1_--dtor$1.c)
 *     _CStreamClassPolicyGains::GetPolicyVolumeForStreamClass_::_1_::dtor$0 @ 0x1800283D5 (_CStreamClassPolicyGains--GetPolicyVolumeForStreamClass_--_1_--dtor$0.c)
 *     _CVolumeLimitTrackerImpl::UpdateTotalTrackedTime_::_1_::dtor$0 @ 0x1800283E1 (_CVolumeLimitTrackerImpl--UpdateTotalTrackedTime_--_1_--dtor$0.c)
 *     _CApplicationManager::RevertEndpointVolumeOverride_::_1_::dtor$0 @ 0x1800283ED (_CApplicationManager--RevertEndpointVolumeOverride_--_1_--dtor$0.c)
 *     _CApplication::DisconnectExclusiveModeStreams_::_1_::dtor$0 @ 0x1800283F9 (_CApplication--DisconnectExclusiveModeStreams_--_1_--dtor$0.c)
 *     _CApplication::DisconnectExclusiveModeStreams_::_1_::dtor$1 @ 0x180028405 (_CApplication--DisconnectExclusiveModeStreams_--_1_--dtor$1.c)
 *     _CApplication::DisconnectExclusiveModeStreams_::_1_::dtor$2 @ 0x180028411 (_CApplication--DisconnectExclusiveModeStreams_--_1_--dtor$2.c)
 *     _CApplication::CleanupBCMStartupLatencyGracePeriod_::_1_::dtor$0 @ 0x180028429 (_CApplication--CleanupBCMStartupLatencyGracePeriod_--_1_--dtor$0.c)
 *     _CApplication::CleanupBCMStartupLatencyGracePeriod_::_1_::dtor$1 @ 0x180028435 (_CApplication--CleanupBCMStartupLatencyGracePeriod_--_1_--dtor$1.c)
 *     _CApplication::RegisterAppVolumePolicyChange_::_1_::dtor$0 @ 0x180028441 (_CApplication--RegisterAppVolumePolicyChange_--_1_--dtor$0.c)
 *     _CProcess::AddSession_::_1_::dtor$0 @ 0x1800286BE (_CProcess--AddSession_--_1_--dtor$0.c)
 *     _CProcess::RecalculateVolume_::_1_::dtor$0 @ 0x180028732 (_CProcess--RecalculateVolume_--_1_--dtor$0.c)
 *     _CProcess::RecalculateVolume_::_1_::dtor$1 @ 0x18002873E (_CProcess--RecalculateVolume_--_1_--dtor$1.c)
 *     _CApplicationManager::_scalar_deleting_destructor__::_1_::dtor$5 @ 0x1800287E7 (_CApplicationManager--_scalar_deleting_destructor__--_1_--dtor$5.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$0 @ 0x18002880B (_CApplicationManager--RpcGetProcess_--_1_--dtor$0.c)
 *     _CApplicationManager::RemoveProcess_::_1_::dtor$0 @ 0x180028857 (_CApplicationManager--RemoveProcess_--_1_--dtor$0.c)
 *     _CApplicationManager::GetApplication_::_1_::dtor$0 @ 0x180028897 (_CApplicationManager--GetApplication_--_1_--dtor$0.c)
 *     _CApplicationManager::RemoveApplication_::_1_::dtor$0 @ 0x1800288DA (_CApplicationManager--RemoveApplication_--_1_--dtor$0.c)
 *     _CApplicationManager::ApplyPBMPolicy_::_1_::dtor$0 @ 0x18002891A (_CApplicationManager--ApplyPBMPolicy_--_1_--dtor$0.c)
 *     _CApplicationManager::ProcessTerminated_::_1_::dtor$0 @ 0x180028926 (_CApplicationManager--ProcessTerminated_--_1_--dtor$0.c)
 *     _CApplicationManager::ProcessTerminated_::_1_::dtor$1 @ 0x180028932 (_CApplicationManager--ProcessTerminated_--_1_--dtor$1.c)
 *     _CApplicationManager::ProcessTerminated_::_1_::dtor$2 @ 0x18002893E (_CApplicationManager--ProcessTerminated_--_1_--dtor$2.c)
 *     _CApplicationManager::GetApplicationPBMStatus_::_1_::dtor$0 @ 0x18002894A (_CApplicationManager--GetApplicationPBMStatus_--_1_--dtor$0.c)
 *     _CApplicationManager::ApplyEndpointVolumeOverride_::_1_::dtor$0 @ 0x18002896E (_CApplicationManager--ApplyEndpointVolumeOverride_--_1_--dtor$0.c)
 *     _CApplicationManager::UpdateEndpointVolume_::_1_::dtor$0 @ 0x180028986 (_CApplicationManager--UpdateEndpointVolume_--_1_--dtor$0.c)
 *     _CApplicationManager::ProcessInteractivityNotification_::_1_::dtor$0 @ 0x18002899E (_CApplicationManager--ProcessInteractivityNotification_--_1_--dtor$0.c)
 *     _CApplicationManager::ProcessInteractivityNotification_::_1_::dtor$1 @ 0x1800289AA (_CApplicationManager--ProcessInteractivityNotification_--_1_--dtor$1.c)
 *     _CApplicationManager::SendBackgroundStreamStateChangedNotifiction_::_1_::dtor$0 @ 0x1800289B6 (_CApplicationManager--SendBackgroundStreamStateChangedNotifiction_--_1_--dtor$0.c)
 *     _PickerHostContextManager::OnHostedAppStateChanged_::_1_::dtor$0 @ 0x1800289CE (_PickerHostContextManager--OnHostedAppStateChanged_--_1_--dtor$0.c)
 *     _CVolumeLimitTrackerImpl::Shutdown_::_1_::dtor$0 @ 0x180028E8D (_CVolumeLimitTrackerImpl--Shutdown_--_1_--dtor$0.c)
 *     _CVolumeLimitTrackerImpl::Shutdown_::_1_::dtor$1 @ 0x180028E99 (_CVolumeLimitTrackerImpl--Shutdown_--_1_--dtor$1.c)
 *     _CTrackedEndpoint::OnMaxChannelVolumeChanged_::_1_::dtor$0 @ 0x180028F41 (_CTrackedEndpoint--OnMaxChannelVolumeChanged_--_1_--dtor$0.c)
 *     _CTrackedEndpoint::AddStream_::_1_::dtor$0 @ 0x180028FBB (_CTrackedEndpoint--AddStream_--_1_--dtor$0.c)
 *     _CTrackedEndpoint::RemoveStream_::_1_::dtor$0 @ 0x180028FFE (_CTrackedEndpoint--RemoveStream_--_1_--dtor$0.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$0 @ 0x1800290A2 (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--dtor$0.c)
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
