/*
 * XREFs of _ConnectorSupportsFormat_::_1_::dtor$8 @ 0x180099809
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ConnectorSupportsFormat_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)(a2 + 88));
}
