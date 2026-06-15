/*
 * XREFs of _std::_Uninitialized_move_al_unchecked1_std::unique_ptr_CApplicationSubmix_std::default_delete_CApplicationSubmix________ptr64_std::unique_ptr_CApplicationSubmix_std::default_delete_CApplicationSubmix________ptr64_std::allocator_std::unique_ptr_CApplicationSubmix_std::default_delete_CApplicationSubmix________::_1_::catch$17 @ 0x1800AE6B8
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180057F94 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@std@@PEAV?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@2@@std@@YAXPEAV?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@0@0AEAU?$_Wrap_alloc@V?$allocator@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@std@@@0@@Z @ 0x1800AE4E8 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCApplicationSubmix@@U-$default_delete@VCApplicatio.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked1_std::unique_ptr_CApplicationSubmix_std::default_delete_CApplicationSubmix________ptr64_std::unique_ptr_CApplicationSubmix_std::default_delete_CApplicationSubmix________ptr64_std::allocator_std::unique_ptr_CApplicationSubmix_std::default_delete_CApplicationSubmix________::_1_::catch_17(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::unique_ptr<CApplicationSubmix>>,std::unique_ptr<CApplicationSubmix> *>(
    *(CApplicationSubmix ***)(a2 + 88),
    *(CApplicationSubmix ***)(a2 + 80));
  throw;
}
