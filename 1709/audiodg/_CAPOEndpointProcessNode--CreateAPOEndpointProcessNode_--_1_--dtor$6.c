/*
 * XREFs of _CAPOEndpointProcessNode::CreateAPOEndpointProcessNode_::_1_::dtor$6 @ 0x140040A68
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14002FFDC (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CAPOEndpointProcessNode::CreateAPOEndpointProcessNode_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~2u;
    return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)(a2 + 56));
  }
  return result;
}
