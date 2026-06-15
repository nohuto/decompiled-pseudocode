/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VCCaptureReference@@@std@@EEAAXXZ @ 0x1800D5090
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K@Z @ 0x1800D4F7C (-UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::_Ref_count_obj<CCaptureReference>::_Destroy(__int64 a1)
{
  unsigned int v1; // edi
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  int v4; // eax

  v1 = *(_DWORD *)(a1 + 24);
  v2 = *(struct _Mtx_internal_imp_t **)(a1 + 16);
  v3 = _Mtx_lock(v2);
  if ( v3 )
    std::_Throw_C_error(v3);
  CCaptureNotifier::UpdateAudioCaptureStatus((__int64 **)v2, 1, v1);
  v4 = _Mtx_unlock(v2);
  if ( v4 )
    std::_Throw_C_error(v4);
}
