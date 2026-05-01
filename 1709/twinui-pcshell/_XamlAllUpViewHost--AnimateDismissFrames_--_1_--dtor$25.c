/*
 * XREFs of _XamlAllUpViewHost::AnimateDismissFrames_::_1_::dtor$25 @ 0x1801F16D6
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f622080ca569903fcefd343ac29cbe04_::__lambda_f622080ca569903fcefd343ac29cbe04_ @ 0x18015AF4C (_lambda_f622080ca569903fcefd343ac29cbe04_--__lambda_f622080ca569903fcefd343ac29cbe04_.c)
 */

__int64 __fastcall XamlAllUpViewHost::AnimateDismissFrames_::_1_::dtor_25(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 144) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 144) &= ~1u;
    return lambda_f622080ca569903fcefd343ac29cbe04_::__lambda_f622080ca569903fcefd343ac29cbe04_((volatile signed __int32 **)(a2 + 40));
  }
  return result;
}
