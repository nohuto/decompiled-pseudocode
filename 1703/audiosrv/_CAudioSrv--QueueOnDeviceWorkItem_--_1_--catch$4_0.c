/*
 * XREFs of _CAudioSrv::QueueOnDeviceWorkItem_::_1_::catch$4_0 @ 0x180081B3B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CAudioSrv::QueueOnDeviceWorkItem_::_1_::catch_4_0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 96);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 48) = *v3;
  return &loc_180081A37;
}
