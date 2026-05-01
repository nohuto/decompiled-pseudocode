/*
 * XREFs of _std::vector__GUID_std::allocator__GUID___::_Reallocate_exactly_::_1_::catch$52 @ 0x18004418F
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@U_GUID@@@std@@QEAAXQEAU_GUID@@_K@Z @ 0x180016F44 (-deallocate@-$allocator@U_GUID@@@std@@QEAAXQEAU_GUID@@_K@Z.c)
 *     _CxxThrowException_0 @ 0x180043090 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector__GUID_std::allocator__GUID___::_Reallocate_exactly_::_1_::catch_52(
        __int64 a1,
        __int64 a2)
{
  std::allocator<_GUID>::deallocate(a1, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
  throw;
}
