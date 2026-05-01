/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_ParsedPenWorkspaceLayout_____ptr64_ParsedPenWorkspaceLayout_____ptr64_std::allocator_ParsedPenWorkspaceLayout____::_1_::catch$1 @ 0x18014A0A4
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@0AEAV?$allocator@UParsedTaskbarLayout@@@0@@Z @ 0x18014A008 (--$_Destroy_range@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@0AE.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_ParsedPenWorkspaceLayout_____ptr64_ParsedPenWorkspaceLayout_____ptr64_std::allocator_ParsedPenWorkspaceLayout____::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
