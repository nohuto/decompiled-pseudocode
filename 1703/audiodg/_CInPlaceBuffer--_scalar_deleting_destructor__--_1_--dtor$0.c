/*
 * XREFs of _CInPlaceBuffer::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x140031104
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInPlaceBuffer::_scalar_deleting_destructor__::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 64) + 24LL));
}
