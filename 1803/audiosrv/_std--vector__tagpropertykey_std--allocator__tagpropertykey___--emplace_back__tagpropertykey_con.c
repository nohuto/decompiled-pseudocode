/*
 * XREFs of _std::vector__tagpropertykey_std::allocator__tagpropertykey___::emplace_back__tagpropertykey_const_&___ptr64__::_1_::catch$64 @ 0x1800EE8EC
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x1800657A3 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector__tagpropertykey_std::allocator__tagpropertykey___::emplace_back__tagpropertykey_const_____ptr64__::_1_::catch_64(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate(*(_QWORD **)(a2 + 112), *(_QWORD *)(a2 + 96), 0x14uLL);
  throw;
}
