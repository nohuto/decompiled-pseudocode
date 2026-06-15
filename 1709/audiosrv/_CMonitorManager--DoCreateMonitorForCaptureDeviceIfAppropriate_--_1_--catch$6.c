/*
 * XREFs of _CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate_::_1_::catch$6 @ 0x1800A3B5F
 * Callers:
 *     <none>
 * Callees:
 *     _o__resetstkoflw_0 @ 0x180033A3C (_o__resetstkoflw_0.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate_::_1_::catch_6(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 80);
  if ( *v3 == -1073741571 )
    o__resetstkoflw_0();
  *(_DWORD *)(a2 + 192) = *v3;
  return &loc_1800A3969;
}
