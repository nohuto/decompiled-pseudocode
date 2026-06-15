/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VCPlaybackReference@@@std@@EEAAXXZ @ 0x180048F40
 * Callers:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 * Callees:
 *     ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x1800193A0 (-UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::_Ref_count_obj<CPlaybackReference>::_Destroy(__int64 a1)
{
  _WORD *v1; // rdi
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  int v4; // eax

  v1 = (_WORD *)(a1 + 16);
  v2 = *(struct _Mtx_internal_imp_t **)(a1 + 128);
  v3 = _Mtx_lock(v2);
  if ( v3 )
    std::_Throw_C_error(v3);
  CPlaybackNotifier::UpdateAudioPlaybackStatus((__int64)v2, 1, v1);
  v4 = _Mtx_unlock(v2);
  if ( v4 )
    std::_Throw_C_error(v4);
}
