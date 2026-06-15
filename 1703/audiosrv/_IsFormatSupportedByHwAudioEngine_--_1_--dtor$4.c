/*
 * XREFs of _IsFormatSupportedByHwAudioEngine_::_1_::dtor$4 @ 0x1800A1242
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsFormatSupportedByHwAudioEngine_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)(a2 + 120));
}
