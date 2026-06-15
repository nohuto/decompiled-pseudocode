/*
 * XREFs of _std::vector_CVADServer_____ptr64_std::allocator_CVADServer_____ptr64___::emplace_back_CVADServer_____ptr64_const_&___ptr64__::_1_::catch$99 @ 0x180067C01
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x1800657A3 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_CVADServer_____ptr64_std::allocator_CVADServer_____ptr64___::emplace_back_CVADServer_____ptr64_const_____ptr64__::_1_::catch_99(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate(*(_QWORD **)(a2 + 112), *(_QWORD *)(a2 + 96), 8uLL);
  throw;
}
