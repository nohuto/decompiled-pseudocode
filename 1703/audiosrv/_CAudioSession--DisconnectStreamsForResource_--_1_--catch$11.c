/*
 * XREFs of _CAudioSession::DisconnectStreamsForResource_::_1_::catch$11 @ 0x18008B8B4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CAudioSession::DisconnectStreamsForResource_::_1_::catch_11(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 192);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 304) = *v3;
  return &loc_18008B600;
}
