/*
 * XREFs of _CApplicationManager::GetProcessFromStreamInfo_::_1_::dtor$1 @ 0x1800287FF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::GetProcessFromStreamInfo_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)(a2 + 64));
}
