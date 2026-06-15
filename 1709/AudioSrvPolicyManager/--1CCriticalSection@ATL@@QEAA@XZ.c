/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x18000B348
 * Callers:
 *     _CApplication::CApplication_::_1_::dtor$1 @ 0x18002820C (_CApplication--CApplication_--_1_--dtor$1.c)
 *     _CApplication::CApplication_::_1_::dtor$4 @ 0x18002823C (_CApplication--CApplication_--_1_--dtor$4.c)
 *     _CApplication::CApplication_::_1_::dtor$5 @ 0x18002824F (_CApplication--CApplication_--_1_--dtor$5.c)
 *     _CApplication::CApplication_::_1_::dtor$6 @ 0x180028262 (_CApplication--CApplication_--_1_--dtor$6.c)
 *     _CApplication::CApplication_::_1_::dtor$7 @ 0x180028275 (_CApplication--CApplication_--_1_--dtor$7.c)
 *     _CApplication::CApplication_::_1_::dtor$8 @ 0x180028288 (_CApplication--CApplication_--_1_--dtor$8.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x1800282A7 (_CApplication--_scalar_deleting_destructor__--_1_--dtor$1.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$4 @ 0x1800282D7 (_CApplication--_scalar_deleting_destructor__--_1_--dtor$4.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$5 @ 0x1800282EA (_CApplication--_scalar_deleting_destructor__--_1_--dtor$5.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$6 @ 0x1800282FD (_CApplication--_scalar_deleting_destructor__--_1_--dtor$6.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$7 @ 0x180028310 (_CApplication--_scalar_deleting_destructor__--_1_--dtor$7.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$8 @ 0x180028323 (_CApplication--_scalar_deleting_destructor__--_1_--dtor$8.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$9 @ 0x180028336 (_CApplication--_scalar_deleting_destructor__--_1_--dtor$9.c)
 *     _CProcess::CProcess_::_1_::dtor$1 @ 0x1800284AD (_CProcess--CProcess_--_1_--dtor$1.c)
 *     _CProcess::CProcess_::_1_::dtor$4 @ 0x1800284DD (_CProcess--CProcess_--_1_--dtor$4.c)
 *     _CProcess::CProcess_::_1_::dtor$9 @ 0x18002853C (_CProcess--CProcess_--_1_--dtor$9.c)
 *     _CProcess::CProcess_::_1_::dtor$10 @ 0x18002854F (_CProcess--CProcess_--_1_--dtor$10.c)
 *     _CProcess::_CProcess_::_1_::dtor$1 @ 0x1800285F6 (_CProcess--_CProcess_--_1_--dtor$1.c)
 *     _CProcess::_CProcess_::_1_::dtor$4 @ 0x180028626 (_CProcess--_CProcess_--_1_--dtor$4.c)
 *     _CProcess::_CProcess_::_1_::dtor$9 @ 0x180028685 (_CProcess--_CProcess_--_1_--dtor$9.c)
 *     _CProcess::_CProcess_::_1_::dtor$10 @ 0x180028698 (_CProcess--_CProcess_--_1_--dtor$10.c)
 *     _CProcess::_CProcess_::_1_::dtor$11 @ 0x1800286AB (_CProcess--_CProcess_--_1_--dtor$11.c)
 *     _CApplicationManager::_scalar_deleting_destructor__::_1_::dtor$2 @ 0x1800287B7 (_CApplicationManager--_scalar_deleting_destructor__--_1_--dtor$2.c)
 *     _TSSession::Create_::_1_::dtor$29 @ 0x180028B47 (_TSSession--Create_--_1_--dtor$29.c)
 *     _TSSession::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$5 @ 0x180028C3C (_TSSession--GetStreamClassPolicyGainsForEndpoint_--_1_--dtor$5.c)
 *     _CVolumeLimitTrackerImpl::CVolumeLimitTrackerImpl_::_1_::dtor$1 @ 0x180028E57 (_CVolumeLimitTrackerImpl--CVolumeLimitTrackerImpl_--_1_--dtor$1.c)
 *     _CTrackedEndpoint::CTrackedEndpoint_::_1_::dtor$1 @ 0x180028EE5 (_CTrackedEndpoint--CTrackedEndpoint_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
