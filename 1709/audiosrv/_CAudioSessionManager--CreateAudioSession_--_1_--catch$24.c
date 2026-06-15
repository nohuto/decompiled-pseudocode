/*
 * XREFs of _CAudioSessionManager::CreateAudioSession_::_1_::catch$24 @ 0x180038DF2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CAudioSessionManager::CreateAudioSession_::_1_::catch_24(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 208);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 96) = *v3;
  return &loc_18004C0BD;
}
