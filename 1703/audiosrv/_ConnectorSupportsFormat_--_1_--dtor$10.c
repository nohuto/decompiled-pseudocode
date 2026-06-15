/*
 * XREFs of _ConnectorSupportsFormat_::_1_::dtor$10 @ 0x180099821
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ConnectorSupportsFormat_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)(a2 + 240));
}
