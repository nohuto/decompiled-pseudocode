/*
 * XREFs of ??1?$CComPtr@UIAudioProcessNotification@@@ATL@@QEAA@XZ @ 0x18000E244
 * Callers:
 *     _CApplication::DisconnectExclusiveModeStreams_::_1_::dtor$3 @ 0x180036BE6 (_CApplication--DisconnectExclusiveModeStreams_--_1_--dtor$3.c)
 *     _CProcess::CProcess_::_1_::dtor$11 @ 0x180036EB6 (_CProcess--CProcess_--_1_--dtor$11.c)
 *     _CProcess::CProcess_::_1_::dtor$12 @ 0x180036EC9 (_CProcess--CProcess_--_1_--dtor$12.c)
 *     _CProcess::RecalculateVolume_::_1_::dtor$2 @ 0x180037062 (_CProcess--RecalculateVolume_--_1_--dtor$2.c)
 *     _CProcess::RegisterProcessNotification_::_1_::dtor$0 @ 0x18003706E (_CProcess--RegisterProcessNotification_--_1_--dtor$0.c)
 *     _CApplicationManager::UpdateEndpointVolume_::_1_::dtor$1 @ 0x180037538 (_CApplicationManager--UpdateEndpointVolume_--_1_--dtor$1.c)
 *     _IsEUCountry_::_1_::dtor$1 @ 0x1800379F6 (_IsEUCountry_--_1_--dtor$1.c)
 *     _CDriverListener::HandleShellWarningAccepted_::_1_::dtor$0 @ 0x180037A68 (_CDriverListener--HandleShellWarningAccepted_--_1_--dtor$0.c)
 *     _CDriverListener::HandleShellWarningAccepted_::_1_::dtor$1 @ 0x180037A74 (_CDriverListener--HandleShellWarningAccepted_--_1_--dtor$1.c)
 *     _CTrackedEndpoint::CTrackedEndpoint_::_1_::dtor$2 @ 0x180037AA0 (_CTrackedEndpoint--CTrackedEndpoint_--_1_--dtor$2.c)
 *     _CTrackedEndpoint::CTrackedEndpoint_::_1_::dtor$3 @ 0x180037AB0 (_CTrackedEndpoint--CTrackedEndpoint_--_1_--dtor$3.c)
 *     _CTrackedEndpoint::Initialize_::_1_::dtor$0 @ 0x180037AE0 (_CTrackedEndpoint--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComPtr<IAudioProcessNotification>::~CComPtr<IAudioProcessNotification>(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
