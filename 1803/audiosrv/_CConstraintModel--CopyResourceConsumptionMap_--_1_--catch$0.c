/*
 * XREFs of _CConstraintModel::CopyResourceConsumptionMap_::_1_::catch$0 @ 0x18011380F
 * Callers:
 *     <none>
 * Callees:
 *     _o__resetstkoflw_0 @ 0x18006186C (_o__resetstkoflw_0.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CConstraintModel::CopyResourceConsumptionMap_::_1_::catch_0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 40);
  if ( *v3 == -1073741571 )
    o__resetstkoflw_0();
  *(_DWORD *)(a2 + 96) = *v3;
  return &loc_1801137BF;
}
