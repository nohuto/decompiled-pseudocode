/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext________ptr64_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext________ptr64_std::allocator_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext________::_1_::catch$15 @ 0x1800D5EBE
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800657A3 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@0@0AEAV?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@0@@Z @ 0x1800D5D9C (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSu.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext________ptr64_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext________ptr64_std::allocator_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext________::_1_::catch_15(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::unique_ptr<CAppSubmixClientContext>>>(
    *(CAppSubmixClientContext ***)(a2 + 88),
    *(CAppSubmixClientContext ***)(a2 + 80));
  throw;
}
