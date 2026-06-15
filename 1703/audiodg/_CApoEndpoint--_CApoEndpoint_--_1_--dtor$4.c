/*
 * XREFs of _CApoEndpoint::_CApoEndpoint_::_1_::dtor$4 @ 0x140034E12
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApoEndpoint::_CApoEndpoint_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 64) + 64LL));
}
