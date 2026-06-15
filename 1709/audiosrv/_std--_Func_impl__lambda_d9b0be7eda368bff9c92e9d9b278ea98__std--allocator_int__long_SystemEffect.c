/*
 * XREFs of _std::_Func_impl__lambda_d9b0be7eda368bff9c92e9d9b278ea98__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Clone_void__::_1_::catch$21 @ 0x1800AF735
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x180036B83 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Func_impl__lambda_d9b0be7eda368bff9c92e9d9b278ea98__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Clone_void__::_1_::catch_21(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate(*(_QWORD **)(a2 + 72), 1uLL, 0xC0uLL);
  throw;
}
