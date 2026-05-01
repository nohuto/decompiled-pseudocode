/*
 * XREFs of _std::vector_unsigned_short_____ptr64_std::allocator_unsigned_short_____ptr64___::emplace_back_unsigned_short_____ptr64_const_&___ptr64__::_1_::catch$64 @ 0x18014A250
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_short_____ptr64_std::allocator_unsigned_short_____ptr64___::emplace_back_unsigned_short_____ptr64_const_____ptr64__::_1_::catch_64(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate(*(char **)(a2 + 112), *(_QWORD *)(a2 + 96), 8uLL);
  throw;
}
