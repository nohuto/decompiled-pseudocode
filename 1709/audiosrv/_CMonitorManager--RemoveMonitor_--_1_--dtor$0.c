/*
 * XREFs of _CMonitorManager::RemoveMonitor_::_1_::dtor$0 @ 0x1800A6B7C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitorManager::RemoveMonitor_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 40));
}
