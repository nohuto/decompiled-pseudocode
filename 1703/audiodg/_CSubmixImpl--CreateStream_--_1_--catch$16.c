/*
 * XREFs of _CSubmixImpl::CreateStream_::_1_::catch$16 @ 0x140020BDC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CSubmixImpl::CreateStream_::_1_::catch_16(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 232);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 88) = *v3;
  return &loc_14002521F;
}
