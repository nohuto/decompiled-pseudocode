/*
 * XREFs of _CSubmixImpl::CreateStream_::_1_::catch$36 @ 0x14001F85C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CSubmixImpl::CreateStream_::_1_::catch_36(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 208);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 120) = *v3;
  return &loc_140022EE3;
}
