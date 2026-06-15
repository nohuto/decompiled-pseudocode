/*
 * XREFs of _CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate_::_1_::catch$14 @ 0x1800DEDBF
 * Callers:
 *     <none>
 * Callees:
 *     _o__resetstkoflw_0 @ 0x18006186C (_o__resetstkoflw_0.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate_::_1_::catch_14(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 80);
  if ( *v3 == -1073741571 )
    o__resetstkoflw_0();
  *(_DWORD *)(a2 + 192) = *v3;
  return &loc_1800DEBC9;
}
