/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x180002DA8
 * Callers:
 *     _CApplication::CApplication_::_1_::dtor$2 @ 0x180036A64 (_CApplication--CApplication_--_1_--dtor$2.c)
 *     _CApplication::CApplication_::_1_::dtor$5 @ 0x180036A94 (_CApplication--CApplication_--_1_--dtor$5.c)
 *     _CApplication::CApplication_::_1_::dtor$6 @ 0x180036AA7 (_CApplication--CApplication_--_1_--dtor$6.c)
 *     _CApplication::CApplication_::_1_::dtor$7 @ 0x180036ABA (_CApplication--CApplication_--_1_--dtor$7.c)
 *     _CApplication::CApplication_::_1_::dtor$8 @ 0x180036ACD (_CApplication--CApplication_--_1_--dtor$8.c)
 *     _CApplication::CApplication_::_1_::dtor$9 @ 0x180036AE0 (_CApplication--CApplication_--_1_--dtor$9.c)
 *     _CApplication::CApplication_::_1_::dtor$10 @ 0x180036AF3 (_CApplication--CApplication_--_1_--dtor$10.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$54 @ 0x180036D16 (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$54.c)
 *     _CProcess::CProcess_::_1_::dtor$1 @ 0x180036E01 (_CProcess--CProcess_--_1_--dtor$1.c)
 *     _CProcess::CProcess_::_1_::dtor$4 @ 0x180036E31 (_CProcess--CProcess_--_1_--dtor$4.c)
 *     _CProcess::CProcess_::_1_::dtor$15 @ 0x180036F02 (_CProcess--CProcess_--_1_--dtor$15.c)
 *     _CProcess::CProcess_::_1_::dtor$16 @ 0x180036F15 (_CProcess--CProcess_--_1_--dtor$16.c)
 *     _CProcess::CProcess_::_1_::dtor$17 @ 0x180036F28 (_CProcess--CProcess_--_1_--dtor$17.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AudioStateMonitorManager_AudioStateMonitorManager_CWindowsPolicyManager_____ptr64_&___ptr64_CProcess_____ptr64__::_1_::dtor$4 @ 0x180037147 (_Microsoft--WRL--Details--MakeAndInitialize_AudioStateMonitorManager_AudioStateMoni_ea_180037147.c)
 *     _TSSession::Create_::_1_::dtor$30 @ 0x1800376B9 (_TSSession--Create_--_1_--dtor$30.c)
 *     _TSSession::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$5 @ 0x180037709 (_TSSession--GetStreamClassPolicyGainsForEndpoint_--_1_--dtor$5.c)
 *     _CVolumeLimitTrackerImpl::CVolumeLimitTrackerImpl_::_1_::dtor$1 @ 0x180037A26 (_CVolumeLimitTrackerImpl--CVolumeLimitTrackerImpl_--_1_--dtor$1.c)
 *     _CTrackedEndpoint::CTrackedEndpoint_::_1_::dtor$1 @ 0x180037A90 (_CTrackedEndpoint--CTrackedEndpoint_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
