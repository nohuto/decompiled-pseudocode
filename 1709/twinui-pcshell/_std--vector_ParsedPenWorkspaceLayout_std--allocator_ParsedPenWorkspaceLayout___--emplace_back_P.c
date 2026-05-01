/*
 * XREFs of _std::vector_ParsedPenWorkspaceLayout_std::allocator_ParsedPenWorkspaceLayout___::emplace_back_ParsedPenWorkspaceLayout__::_1_::catch$67 @ 0x1801EA919
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Unfancy@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@YAPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@PEAV123@@Z @ 0x1800250AC (--$_Unfancy@V-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@YAPEAV-$ComPtr@UIDiscoverRecen.c)
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAXPEAUParsedTaskbarLayout@@_K@Z @ 0x18008ED7C (-deallocate@-$_Wrap_alloc@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAXPEAUParsedTaskbarL.c)
 *     ??$destroy@UParsedTaskbarLayout@@@?$_Wrap_alloc@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAXPEAUParsedTaskbarLayout@@@Z @ 0x18008F764 (--$destroy@UParsedTaskbarLayout@@@-$_Wrap_alloc@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@Q.c)
 *     _CxxThrowException_0 @ 0x1801E2E88 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_ParsedPenWorkspaceLayout_std::allocator_ParsedPenWorkspaceLayout___::emplace_back_ParsedPenWorkspaceLayout__::_1_::catch_67(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx

  v3 = *(_QWORD **)(a2 + 128);
  if ( *(_BYTE *)(a2 + 112) )
  {
    v4 = std::_Unfancy<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>((__int64)&v3[13 * *(_QWORD *)(a2 + 48)]);
    std::_Wrap_alloc<std::allocator<ParsedTaskbarLayout>>::destroy<ParsedTaskbarLayout>(v5, v4);
  }
  std::_Wrap_alloc<std::allocator<ParsedTaskbarLayout>>::deallocate(a1, v3, *(_QWORD *)(a2 + 136));
  throw;
}
