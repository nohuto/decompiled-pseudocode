/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext________ptr64_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext________ptr64_std::allocator_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext________::_1_::catch$17 @ 0x18009EA30
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180036B83 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@std@@PEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@2@@std@@YAXPEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@0@0AEAU?$_Wrap_alloc@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@std@@@0@@Z @ 0x18009E89C (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSu.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext________ptr64_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext________ptr64_std::allocator_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext________::_1_::catch_17(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::unique_ptr<CAppSubmixClientContext>>,std::unique_ptr<CAppSubmixClientContext> *>(
    *(CAppSubmixClientContext ***)(a2 + 88),
    *(CAppSubmixClientContext ***)(a2 + 80));
  throw;
}
