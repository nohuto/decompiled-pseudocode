/*
 * XREFs of ??1?$CAutoPtrList@UDeviceStateChangedContext@CMonitorManager@@@ATL@@QEAA@XZ @ 0x1800A2978
 * Callers:
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$5 @ 0x1800A2944 (_CMonitorManager--CMonitorManager_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CAutoPtrList<CMonitorManager::DeviceStateChangedContext>::~CAutoPtrList<CMonitorManager::DeviceStateChangedContext>(
        __int64 a1)
{
  return ATL::CAtlList<ATL::CAutoPtr<CMonitorManager::DeviceStateChangedContext>,ATL::CAutoPtrElementTraits<CMonitorManager::DeviceStateChangedContext>>::RemoveAll(a1);
}
