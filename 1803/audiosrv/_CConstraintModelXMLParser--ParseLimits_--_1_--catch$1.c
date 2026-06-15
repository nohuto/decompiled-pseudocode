/*
 * XREFs of _CConstraintModelXMLParser::ParseLimits_::_1_::catch$1 @ 0x1801152BD
 * Callers:
 *     <none>
 * Callees:
 *     _o__resetstkoflw_0 @ 0x18006186C (_o__resetstkoflw_0.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CConstraintModelXMLParser::ParseLimits_::_1_::catch_1(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 144);
  if ( *v3 == -1073741571 )
    o__resetstkoflw_0();
  *(_DWORD *)(a2 + 48) = *v3;
  return &loc_18011521C;
}
