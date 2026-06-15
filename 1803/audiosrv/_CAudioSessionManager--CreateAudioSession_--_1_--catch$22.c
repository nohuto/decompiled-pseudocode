/*
 * XREFs of _CAudioSessionManager::CreateAudioSession_::_1_::catch$22 @ 0x18006A760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CAudioSessionManager::CreateAudioSession_::_1_::catch_22(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 584);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 120) = *v3;
  return &loc_180090829;
}
