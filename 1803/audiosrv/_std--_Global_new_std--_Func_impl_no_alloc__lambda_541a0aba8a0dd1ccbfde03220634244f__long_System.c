/*
 * XREFs of _std::_Global_new_std::_Func_impl_no_alloc__lambda_541a0aba8a0dd1ccbfde03220634244f__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64___lambda_541a0aba8a0dd1ccbfde03220634244f____::_1_::catch$4 @ 0x1800644C7
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x1800657A3 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Global_new_std::_Func_impl_no_alloc__lambda_541a0aba8a0dd1ccbfde03220634244f__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64___lambda_541a0aba8a0dd1ccbfde03220634244f____::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate(*(_QWORD **)(a2 + 64), 1uLL, 0xC0uLL);
  throw;
}
