/*
 * XREFs of _CMonitorManager::ProcessDeviceStateChanged_::_1_::dtor$1 @ 0x1800B4266
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitorManager::ProcessDeviceStateChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 40));
}
