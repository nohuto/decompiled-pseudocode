/*
 * XREFs of _CPolicyConfig::GetApplicationDefaultEndpoint_::_1_::catch$3 @ 0x18006A988
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CPolicyConfig::GetApplicationDefaultEndpoint_::_1_::catch_3(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 248);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 40) = *v3;
  return &loc_180091EFB;
}
