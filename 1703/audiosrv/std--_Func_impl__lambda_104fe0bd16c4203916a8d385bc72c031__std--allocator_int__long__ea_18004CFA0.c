/*
 * XREFs of std::_Func_impl__lambda_104fe0bd16c4203916a8d385bc72c031__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Move @ 0x18004CFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl__lambda_104fe0bd16c4203916a8d385bc72c031__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Move(
        __int64 a1,
        __int64 a2)
{
  if ( a2 )
  {
    *(_QWORD *)a2 = off_1800DE380;
    *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  }
  return a2;
}
