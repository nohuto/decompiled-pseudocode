/*
 * XREFs of _std::vector__GUID_std::allocator__GUID___::_Reallocate_exactly_::_1_::catch$51 @ 0x180043177
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@U_GUID@@@std@@@std@@QEAAXPEAU_GUID@@_K@Z @ 0x180016720 (-deallocate@-$_Wrap_alloc@V-$allocator@U_GUID@@@std@@@std@@QEAAXPEAU_GUID@@_K@Z.c)
 *     _CxxThrowException_0 @ 0x180042090 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector__GUID_std::allocator__GUID___::_Reallocate_exactly_::_1_::catch_51(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<_GUID>>::deallocate(a1, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
  throw;
}
