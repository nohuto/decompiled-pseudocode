/*
 * XREFs of _CPolicyConfig::SetApplicationDefaultEndpoint_::_1_::catch$9 @ 0x1800BD6A9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CPolicyConfig::SetApplicationDefaultEndpoint_::_1_::catch_9(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 96);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 176) = *v3;
  return &loc_1800BD56C;
}
