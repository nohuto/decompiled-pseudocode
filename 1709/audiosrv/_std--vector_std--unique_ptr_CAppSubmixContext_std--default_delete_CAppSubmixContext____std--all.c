/*
 * XREFs of _std::vector_std::unique_ptr_CAppSubmixContext_std::default_delete_CAppSubmixContext____std::allocator_std::unique_ptr_CAppSubmixContext_std::default_delete_CAppSubmixContext_______::emplace_back_std::unique_ptr_CAppSubmixContext_std::default_delete_CAppSubmixContext______::_1_::catch$103 @ 0x18009EEE3
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x180036B83 (_CxxThrowException_0.c)
 *     ??$destroy@V?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@std@@@?$_Wrap_alloc@V?$allocator@V?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@std@@@std@@@std@@QEAAXPEAV?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@1@@Z @ 0x18009EB38 (--$destroy@V-$unique_ptr@VCAppSubmixContext@@U-$default_delete@VCAppSubmixContext@@@std@@@std@@@.c)
 */

void __fastcall __noreturn std::vector_std::unique_ptr_CAppSubmixContext_std::default_delete_CAppSubmixContext____std::allocator_std::unique_ptr_CAppSubmixContext_std::default_delete_CAppSubmixContext_______::emplace_back_std::unique_ptr_CAppSubmixContext_std::default_delete_CAppSubmixContext______::_1_::catch_103(
        __int64 a1,
        unsigned __int64 *a2)
{
  _QWORD *v3; // rbx

  v3 = (_QWORD *)a2[16];
  std::_Wrap_alloc<std::allocator<std::unique_ptr<CAppSubmixContext>>>::destroy<std::unique_ptr<CAppSubmixContext>>(
    a1,
    (__int64 **)&v3[a2[17]]);
  std::_Deallocate(v3, a2[14], 8uLL);
  throw;
}
