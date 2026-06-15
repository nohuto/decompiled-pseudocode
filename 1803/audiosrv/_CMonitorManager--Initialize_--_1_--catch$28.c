/*
 * XREFs of _CMonitorManager::Initialize_::_1_::catch$28 @ 0x180069B23
 * Callers:
 *     <none>
 * Callees:
 *     _o__resetstkoflw_0 @ 0x18006186C (_o__resetstkoflw_0.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CMonitorManager::Initialize_::_1_::catch_28(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 160);
  if ( *v3 == -1073741571 )
    o__resetstkoflw_0();
  *(_DWORD *)(a2 + 256) = *v3;
  return &loc_18008C80B;
}
