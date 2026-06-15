/*
 * XREFs of _CStreamProcessNode::_scalar_deleting_destructor__::_1_::dtor$2 @ 0x140021ECC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamProcessNode::_scalar_deleting_destructor__::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(*(_QWORD *)(a2 + 96));
}
