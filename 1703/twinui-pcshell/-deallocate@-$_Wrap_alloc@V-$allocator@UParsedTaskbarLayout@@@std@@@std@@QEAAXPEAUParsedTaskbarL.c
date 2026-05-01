/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAXPEAUParsedTaskbarLayout@@_K@Z @ 0x18008C760
 * Callers:
 *     _std::vector_ParsedPenWorkspaceLayout_std::allocator_ParsedPenWorkspaceLayout___::emplace_back_ParsedPenWorkspaceLayout__::_1_::catch$63 @ 0x18019BEA1 (_std--vector_ParsedPenWorkspaceLayout_std--allocator_ParsedPenWorkspaceLayout___--emplace_back_P.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<ParsedTaskbarLayout>>::deallocate(
        __int64 a1,
        char *a2,
        unsigned __int64 a3)
{
  std::_Deallocate(a2, a3, 0x68uLL);
}
