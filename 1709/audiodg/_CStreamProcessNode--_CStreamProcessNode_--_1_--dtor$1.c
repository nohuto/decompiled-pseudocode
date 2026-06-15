/*
 * XREFs of _CStreamProcessNode::_CStreamProcessNode_::_1_::dtor$1 @ 0x140020371
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamProcessNode::_CStreamProcessNode_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(*(_QWORD *)(a2 + 64) + 48LL);
}
