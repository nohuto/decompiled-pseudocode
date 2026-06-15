/*
 * XREFs of _CEndpointInstance::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x1400306C7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointInstance::_scalar_deleting_destructor__::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 64) + 24LL));
}
