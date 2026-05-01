/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAAXPEAW4LayoutSKU@SharedStartModel@@_K@Z @ 0x18008C774
 * Callers:
 *     _std::vector_enum_SharedStartModel::LayoutSKU_std::allocator_enum_SharedStartModel::LayoutSKU___::emplace_back_enum_SharedStartModel::LayoutSKU_const_&___ptr64__::_1_::catch$101 @ 0x18019BEEA (_std--vector_enum_SharedStartModel--LayoutSKU_std--allocator_enum_SharedStartModel-_ea_18019BEEA.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<enum SharedStartModel::LayoutSKU>>::deallocate(
        __int64 a1,
        char *a2,
        unsigned __int64 a3)
{
  std::_Deallocate(a2, a3, 4uLL);
}
