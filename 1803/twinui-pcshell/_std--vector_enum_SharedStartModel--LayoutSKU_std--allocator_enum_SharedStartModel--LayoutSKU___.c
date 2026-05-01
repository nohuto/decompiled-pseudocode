/*
 * XREFs of _std::vector_enum_SharedStartModel::LayoutSKU_std::allocator_enum_SharedStartModel::LayoutSKU___::emplace_back_enum_SharedStartModel::LayoutSKU_const_&___ptr64__::_1_::catch$64 @ 0x18014A35D
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_enum_SharedStartModel::LayoutSKU_std::allocator_enum_SharedStartModel::LayoutSKU___::emplace_back_enum_SharedStartModel::LayoutSKU_const_____ptr64__::_1_::catch_64(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate(*(char **)(a2 + 112), *(_QWORD *)(a2 + 96), 4uLL);
  throw;
}
