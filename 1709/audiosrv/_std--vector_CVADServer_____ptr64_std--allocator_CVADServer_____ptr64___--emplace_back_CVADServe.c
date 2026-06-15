/*
 * XREFs of _std::vector_CVADServer_____ptr64_std::allocator_CVADServer_____ptr64___::emplace_back_CVADServer_____ptr64_const_&___ptr64__::_1_::catch$110 @ 0x18003A0F7
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x180036B83 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_CVADServer_____ptr64_std::allocator_CVADServer_____ptr64___::emplace_back_CVADServer_____ptr64_const_____ptr64__::_1_::catch_110(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate(*(_QWORD **)(a2 + 112), *(_QWORD *)(a2 + 96), 8uLL);
  throw;
}
