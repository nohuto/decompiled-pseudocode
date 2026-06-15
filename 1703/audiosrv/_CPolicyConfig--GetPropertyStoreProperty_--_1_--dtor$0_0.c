/*
 * XREFs of _CPolicyConfig::GetPropertyStoreProperty_::_1_::dtor$0_0 @ 0x18009C839
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPolicyConfig::GetPropertyStoreProperty_::_1_::dtor_0_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)(a2 + 32));
}
