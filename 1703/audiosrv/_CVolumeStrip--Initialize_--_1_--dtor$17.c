/*
 * XREFs of _CVolumeStrip::Initialize_::_1_::dtor$17 @ 0x1800591D1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::Initialize_::_1_::dtor_17(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 72) + 40LL));
}
