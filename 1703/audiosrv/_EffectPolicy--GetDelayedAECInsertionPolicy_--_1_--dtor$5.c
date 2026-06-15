/*
 * XREFs of _EffectPolicy::GetDelayedAECInsertionPolicy_::_1_::dtor$5 @ 0x180058DD4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EffectPolicy::GetDelayedAECInsertionPolicy_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)(a2 + 128));
}
