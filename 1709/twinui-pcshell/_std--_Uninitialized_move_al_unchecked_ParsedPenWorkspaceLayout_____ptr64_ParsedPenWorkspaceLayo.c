/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_ParsedPenWorkspaceLayout_____ptr64_ParsedPenWorkspaceLayout_____ptr64_std::allocator_ParsedPenWorkspaceLayout____::_1_::catch$1 @ 0x1801EA9F2
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UParsedPenWorkspaceLayout@@@std@@PEAUParsedPenWorkspaceLayout@@@std@@YAXPEAUParsedPenWorkspaceLayout@@0AEAU?$_Wrap_alloc@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@0@@Z @ 0x18008F4A0 (--$_Destroy_range@V-$allocator@UParsedPenWorkspaceLayout@@@std@@PEAUParsedPenWorkspaceLayout@@@s.c)
 *     _CxxThrowException_0 @ 0x1801E2E88 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_ParsedPenWorkspaceLayout_____ptr64_ParsedPenWorkspaceLayout_____ptr64_std::allocator_ParsedPenWorkspaceLayout____::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<ParsedPenWorkspaceLayout>,ParsedPenWorkspaceLayout *>(
    *(_QWORD *)(a2 + 88),
    *(_QWORD *)(a2 + 80));
  throw;
}
