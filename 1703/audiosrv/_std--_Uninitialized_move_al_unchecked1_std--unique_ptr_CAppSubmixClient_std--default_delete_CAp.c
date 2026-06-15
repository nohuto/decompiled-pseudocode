/*
 * XREFs of _std::_Uninitialized_move_al_unchecked1_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient________ptr64_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient________ptr64_std::allocator_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient________::_1_::catch$17 @ 0x1800AE5A0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180057F94 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@std@@PEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@2@@std@@YAXPEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@0@0AEAU?$_Wrap_alloc@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@std@@@0@@Z @ 0x1800AE448 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixCli.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked1_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient________ptr64_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient________ptr64_std::allocator_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient________::_1_::catch_17(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::unique_ptr<CAppSubmixClient>>,std::unique_ptr<CAppSubmixClient> *>(
    *(__int64 ***)(a2 + 88),
    *(__int64 ***)(a2 + 80));
  throw;
}
