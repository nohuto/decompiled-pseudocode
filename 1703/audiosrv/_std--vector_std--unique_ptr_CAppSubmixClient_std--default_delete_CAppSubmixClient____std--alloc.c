/*
 * XREFs of _std::vector_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient____std::allocator_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient_______::emplace_back_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient______::_1_::catch$99 @ 0x1800AE85F
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x180057F94 (_CxxThrowException_0.c)
 *     ??$destroy@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@?$_Wrap_alloc@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@std@@@std@@QEAAXPEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@1@@Z @ 0x1800AE6DC (--$destroy@V-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixClient@@@std@@@std@@@-$.c)
 */

void __fastcall __noreturn std::vector_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient____std::allocator_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient_______::emplace_back_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient______::_1_::catch_99(
        __int64 a1,
        unsigned __int64 *a2)
{
  _QWORD *v3; // rbx

  v3 = (_QWORD *)a2[16];
  std::_Wrap_alloc<std::allocator<std::unique_ptr<CAppSubmixClient>>>::destroy<std::unique_ptr<CAppSubmixClient>>(
    a1,
    (__int64 **)&v3[a2[17]]);
  std::_Deallocate(v3, a2[14], 8uLL);
  throw;
}
