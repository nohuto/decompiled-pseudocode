/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIVolumeLimitTracker@@@WRL@Microsoft@@UEAA@XZ @ 0x180018CF8
 * Callers:
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$53 @ 0x180036D0A (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$53.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AudioStateMonitorManager_AudioStateMonitorManager_CWindowsPolicyManager_____ptr64_&___ptr64_CProcess_____ptr64__::_1_::dtor$3 @ 0x18003713B (_Microsoft--WRL--Details--MakeAndInitialize_AudioStateMonitorManager_AudioStateMoni_ea_18003713B.c)
 *     _TSSession::Create_::_1_::dtor$29 @ 0x1800376AD (_TSSession--Create_--_1_--dtor$29.c)
 *     _CVolumeLimitTrackerImpl::CVolumeLimitTrackerImpl_::_1_::dtor$0 @ 0x180037A1A (_CVolumeLimitTrackerImpl--CVolumeLimitTrackerImpl_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVolumeLimitTracker>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVolumeLimitTracker>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
}
