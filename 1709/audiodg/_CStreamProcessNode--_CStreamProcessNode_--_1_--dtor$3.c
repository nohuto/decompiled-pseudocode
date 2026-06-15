/*
 * XREFs of _CStreamProcessNode::_CStreamProcessNode_::_1_::dtor$3 @ 0x14002038D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamProcessNode::_CStreamProcessNode_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(*(_QWORD *)(a2 + 72) + 24LL);
}
