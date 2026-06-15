/*
 * XREFs of _CAppAudioSessionId::Initialize_::_1_::catch$7 @ 0x1800B7215
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CAppAudioSessionId::Initialize_::_1_::catch_7(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 112);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 36) = *v3;
  return &loc_1800B6E50;
}
