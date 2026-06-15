/*
 * XREFs of _CPipeInstance::CreateAPOConnections_::_1_::dtor$4 @ 0x140020BF8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::CreateAPOConnections_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(a2 + 360);
}
