/*
 * XREFs of _std::vector_std::unique_ptr_CApplicationSubmix_std::default_delete_CApplicationSubmix____std::allocator_std::unique_ptr_CApplicationSubmix_std::default_delete_CApplicationSubmix_______::emplace_back_std::unique_ptr_CApplicationSubmix_std::default_delete_CApplicationSubmix______::_1_::catch$99 @ 0x1800AEADF
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x180057F94 (_CxxThrowException_0.c)
 *     ??$destroy@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@?$_Wrap_alloc@V?$allocator@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@std@@@std@@QEAAXPEAV?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@1@@Z @ 0x1800AE734 (--$destroy@V-$unique_ptr@VCApplicationSubmix@@U-$default_delete@VCApplicationSubmix@@@std@@@std@.c)
 */

void __fastcall __noreturn std::vector_std::unique_ptr_CApplicationSubmix_std::default_delete_CApplicationSubmix____std::allocator_std::unique_ptr_CApplicationSubmix_std::default_delete_CApplicationSubmix_______::emplace_back_std::unique_ptr_CApplicationSubmix_std::default_delete_CApplicationSubmix______::_1_::catch_99(
        __int64 a1,
        unsigned __int64 *a2)
{
  _QWORD *v3; // rbx

  v3 = (_QWORD *)a2[16];
  std::_Wrap_alloc<std::allocator<std::unique_ptr<CApplicationSubmix>>>::destroy<std::unique_ptr<CApplicationSubmix>>(
    a1,
    (CApplicationSubmix **)&v3[a2[17]]);
  std::_Deallocate(v3, a2[14], 8uLL);
  throw;
}
