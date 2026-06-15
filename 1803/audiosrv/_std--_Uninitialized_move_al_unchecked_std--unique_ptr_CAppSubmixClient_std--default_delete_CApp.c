/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient________ptr64_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient________ptr64_std::allocator_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient________::_1_::catch$15 @ 0x1800D5E36
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800657A3 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@0@0AEAV?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@0@@Z @ 0x1800D5D4C (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixCli.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient________ptr64_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient________ptr64_std::allocator_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient________::_1_::catch_15(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::unique_ptr<CAppSubmixClient>>>(
    *(__int64 ***)(a2 + 88),
    *(__int64 ***)(a2 + 80));
  throw;
}
