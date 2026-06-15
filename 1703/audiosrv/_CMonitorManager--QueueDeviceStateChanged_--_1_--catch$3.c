/*
 * XREFs of _CMonitorManager::QueueDeviceStateChanged_::_1_::catch$3 @ 0x1800B468F
 * Callers:
 *     <none>
 * Callees:
 *     _o__resetstkoflw_0 @ 0x180049B6C (_o__resetstkoflw_0.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CMonitorManager::QueueDeviceStateChanged_::_1_::catch_3(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 56);
  if ( *v3 == -1073741571 )
    o__resetstkoflw_0();
  *(_DWORD *)(a2 + 152) = *v3;
  return &loc_1800B451D;
}
