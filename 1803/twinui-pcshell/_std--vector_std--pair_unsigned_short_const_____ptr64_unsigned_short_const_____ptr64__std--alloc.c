/*
 * XREFs of _std::vector_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64__std::allocator_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64_____::emplace_back_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64____::_1_::catch$65 @ 0x1801456F5
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64__std::allocator_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64_____::emplace_back_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64____::_1_::catch_65(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate(*(char **)(a2 + 128), *(_QWORD *)(a2 + 112), 0x10uLL);
  throw;
}
