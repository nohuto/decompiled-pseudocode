/*
 * XREFs of _std::vector_CVADServer_____ptr64_std::allocator_CVADServer_____ptr64___::emplace_back_CVADServer_____ptr64_const_&___ptr64__::_1_::catch$72 @ 0x18005BE9A
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x180057F94 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_CVADServer_____ptr64_std::allocator_CVADServer_____ptr64___::emplace_back_CVADServer_____ptr64_const_____ptr64__::_1_::catch_72(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate(*(_QWORD **)(a2 + 112), *(_QWORD *)(a2 + 96), 8uLL);
  throw;
}
