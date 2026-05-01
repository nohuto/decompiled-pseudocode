/*
 * XREFs of _std::vector_enum_SharedStartModel::LayoutSKU_std::allocator_enum_SharedStartModel::LayoutSKU___::emplace_back_enum_SharedStartModel::LayoutSKU_const_&___ptr64__::_1_::catch$106 @ 0x1801EA962
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAAXPEAW4LayoutSKU@SharedStartModel@@_K@Z @ 0x18008EDCC (-deallocate@-$_Wrap_alloc@V-$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAAXPEAW4Layou.c)
 *     _CxxThrowException_0 @ 0x1801E2E88 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_enum_SharedStartModel::LayoutSKU_std::allocator_enum_SharedStartModel::LayoutSKU___::emplace_back_enum_SharedStartModel::LayoutSKU_const_____ptr64__::_1_::catch_106(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<enum SharedStartModel::LayoutSKU>>::deallocate(
    a1,
    *(_QWORD **)(a2 + 112),
    *(_QWORD *)(a2 + 96));
  throw;
}
