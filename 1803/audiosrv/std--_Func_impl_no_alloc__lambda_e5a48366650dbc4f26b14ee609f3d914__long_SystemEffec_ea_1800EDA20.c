/*
 * XREFs of std::_Func_impl_no_alloc__lambda_e5a48366650dbc4f26b14ee609f3d914__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Move @ 0x1800EDA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_e5a48366650dbc4f26b14ee609f3d914__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_18012C9B0;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  return result;
}
