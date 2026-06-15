/*
 * XREFs of _std::_Uninitialized_move_al_unchecked1_std::unique_ptr_CAppSubmixContext_std::default_delete_CAppSubmixContext________ptr64_std::unique_ptr_CAppSubmixContext_std::default_delete_CAppSubmixContext________ptr64_std::allocator_std::unique_ptr_CAppSubmixContext_std::default_delete_CAppSubmixContext________::_1_::catch$17 @ 0x1800AE62C
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180057F94 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@std@@@std@@PEAV?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@2@@std@@YAXPEAV?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@0@0AEAU?$_Wrap_alloc@V?$allocator@V?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@std@@@std@@@0@@Z @ 0x1800AE498 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCAppSubmixContext@@U-$default_delete@VCAppSubmixCo.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked1_std::unique_ptr_CAppSubmixContext_std::default_delete_CAppSubmixContext________ptr64_std::unique_ptr_CAppSubmixContext_std::default_delete_CAppSubmixContext________ptr64_std::allocator_std::unique_ptr_CAppSubmixContext_std::default_delete_CAppSubmixContext________::_1_::catch_17(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::unique_ptr<CAppSubmixContext>>,std::unique_ptr<CAppSubmixContext> *>(
    *(__int64 ***)(a2 + 88),
    *(__int64 ***)(a2 + 80));
  throw;
}
