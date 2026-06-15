/*
 * XREFs of _CMonitorManager::CMonitorManager_::_1_::dtor$5 @ 0x18005C0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorManager::CMonitorManager_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtrList<CMonitorManager::DeviceStateChangedContext>::~CAutoPtrList<CMonitorManager::DeviceStateChangedContext>(*(_QWORD *)(a2 + 64) + 200LL);
}
