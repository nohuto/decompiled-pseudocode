/*
 * XREFs of _CMonitor::Initialize_::_1_::catch$8 @ 0x1800B65E1
 * Callers:
 *     <none>
 * Callees:
 *     _o__resetstkoflw_0 @ 0x180049B6C (_o__resetstkoflw_0.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CMonitor::Initialize_::_1_::catch_8(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 144);
  if ( *v3 == -1073741571 )
    o__resetstkoflw_0();
  *(_DWORD *)(a2 + 248) = *v3;
  return &loc_1800B635F;
}
