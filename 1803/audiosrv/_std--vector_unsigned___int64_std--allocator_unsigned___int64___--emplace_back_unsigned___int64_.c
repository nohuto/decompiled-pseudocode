/*
 * XREFs of _std::vector_unsigned___int64_std::allocator_unsigned___int64___::emplace_back_unsigned___int64__::_1_::catch$64 @ 0x1800D6260
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x1800657A3 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned___int64_std::allocator_unsigned___int64___::emplace_back_unsigned___int64__::_1_::catch_64(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate(*(_QWORD **)(a2 + 112), *(_QWORD *)(a2 + 96), 8uLL);
  throw;
}
