/*
 * XREFs of _CPipeInstance::GetAPONodeAndConnection_::_1_::dtor$1 @ 0x140030AA6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::GetAPONodeAndConnection_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)(a2 + 128));
}
