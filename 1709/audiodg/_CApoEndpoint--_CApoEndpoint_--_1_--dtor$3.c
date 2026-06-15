/*
 * XREFs of _CApoEndpoint::_CApoEndpoint_::_1_::dtor$3 @ 0x14003475A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApoEndpoint::_CApoEndpoint_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 64) + 56LL));
}
