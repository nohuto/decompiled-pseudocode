/*
 * XREFs of ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006648
 * Callers:
 *     _IsAlwaysAudibleStream_::_1_::dtor$0 @ 0x180027D55 (_IsAlwaysAudibleStream_--_1_--dtor$0.c)
 *     _CApplication::DisconnectExclusiveModeStreams_::_1_::dtor$3 @ 0x18002841D (_CApplication--DisconnectExclusiveModeStreams_--_1_--dtor$3.c)
 *     _CProcess::CProcess_::_1_::dtor$5 @ 0x1800284F0 (_CProcess--CProcess_--_1_--dtor$5.c)
 *     _CProcess::CProcess_::_1_::dtor$6 @ 0x180028503 (_CProcess--CProcess_--_1_--dtor$6.c)
 *     _CProcess::_CProcess_::_1_::dtor$5 @ 0x180028639 (_CProcess--_CProcess_--_1_--dtor$5.c)
 *     _CProcess::_CProcess_::_1_::dtor$6 @ 0x18002864C (_CProcess--_CProcess_--_1_--dtor$6.c)
 *     _CProcess::RecalculateVolume_::_1_::dtor$2 @ 0x18002874A (_CProcess--RecalculateVolume_--_1_--dtor$2.c)
 *     _CApplicationManager::GetProcessFromStreamInfo_::_1_::dtor$0 @ 0x1800287F3 (_CApplicationManager--GetProcessFromStreamInfo_--_1_--dtor$0.c)
 *     _CApplicationManager::GetProcessFromStreamInfo_::_1_::dtor$1 @ 0x1800287FF (_CApplicationManager--GetProcessFromStreamInfo_--_1_--dtor$1.c)
 *     __lambda_475610373546e0092494a79a1259d6e9_::_lambda_invoker_cdecl__::_1_::dtor$0 @ 0x180028956 (__lambda_475610373546e0092494a79a1259d6e9_--_lambda_invoker_cdecl__--_1_--dtor$0.c)
 *     _CApplicationManager::ApplyEndpointVolumeOverride_::_1_::dtor$1 @ 0x18002897A (_CApplicationManager--ApplyEndpointVolumeOverride_--_1_--dtor$1.c)
 *     _CApplicationManager::UpdateEndpointVolume_::_1_::dtor$1 @ 0x180028992 (_CApplicationManager--UpdateEndpointVolume_--_1_--dtor$1.c)
 *     _CStreamClassPolicyManager::GetPolicyVolumeForStreamClass_::_1_::dtor$0 @ 0x180028A82 (_CStreamClassPolicyManager--GetPolicyVolumeForStreamClass_--_1_--dtor$0.c)
 *     _CStreamClassPolicyManager::GetPolicyVolumeForStreamClass_::_1_::dtor$1 @ 0x180028A8E (_CStreamClassPolicyManager--GetPolicyVolumeForStreamClass_--_1_--dtor$1.c)
 *     _CAastPreStartContext::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180028A9A (_CAastPreStartContext--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _CAastPreStartContext::RuntimeClassInitialize_::_1_::dtor$1 @ 0x180028AA6 (_CAastPreStartContext--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _TSSession::_TSSession_::_1_::dtor$4 @ 0x180028BBD (_TSSession--_TSSession_--_1_--dtor$4.c)
 *     _TSSession::_TSSession_::_1_::dtor$5 @ 0x180028BD0 (_TSSession--_TSSession_--_1_--dtor$5.c)
 *     _TSSession::_TSSession_::_1_::dtor$6 @ 0x180028BE3 (_TSSession--_TSSession_--_1_--dtor$6.c)
 *     _TSSession::_TSSession_::_1_::dtor$7 @ 0x180028BF6 (_TSSession--_TSSession_--_1_--dtor$7.c)
 *     _CVolumeLimitTrackerImpl::ShowWarningDialog_::_1_::dtor$0 @ 0x180028EB1 (_CVolumeLimitTrackerImpl--ShowWarningDialog_--_1_--dtor$0.c)
 *     _CDriverListener::HandleShellWarningAccepted_::_1_::dtor$0 @ 0x180028EBD (_CDriverListener--HandleShellWarningAccepted_--_1_--dtor$0.c)
 *     _CTrackedEndpoint::CTrackedEndpoint_::_1_::dtor$3 @ 0x180028F05 (_CTrackedEndpoint--CTrackedEndpoint_--_1_--dtor$3.c)
 *     _CTrackedEndpoint::Initialize_::_1_::dtor$0 @ 0x180028F35 (_CTrackedEndpoint--Initialize_--_1_--dtor$0.c)
 *     _CEndpointVolumeState::CEndpointVolumeState_::_1_::dtor$0 @ 0x18002911A (_CEndpointVolumeState--CEndpointVolumeState_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
