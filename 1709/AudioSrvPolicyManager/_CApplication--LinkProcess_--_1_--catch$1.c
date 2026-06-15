/*
 * XREFs of _CApplication::LinkProcess_::_1_::catch$1 @ 0x180028355
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CApplication::LinkProcess_::_1_::catch_1(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 40);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 112) = *v3;
  return &loc_18000BC05;
}
