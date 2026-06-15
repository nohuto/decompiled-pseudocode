/*
 * XREFs of _CAPOEndpointProcessNode::_CAPOEndpointProcessNode_::_1_::dtor$1 @ 0x1400406AB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAPOEndpointProcessNode::_CAPOEndpointProcessNode_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 64) + 48LL));
}
