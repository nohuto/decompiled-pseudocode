/*
 * XREFs of _CConnectionInstance::AddRenderConnection_::_1_::dtor$3 @ 0x1400210F4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConnectionInstance::AddRenderConnection_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(a2 + 96);
}
