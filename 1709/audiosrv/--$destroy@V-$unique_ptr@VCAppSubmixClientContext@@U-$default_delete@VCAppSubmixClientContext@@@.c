/*
 * XREFs of ??$destroy@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@?$_Wrap_alloc@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@std@@@std@@QEAAXPEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@1@@Z @ 0x18009EB0C
 * Callers:
 *     _std::vector_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____std::allocator_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext_______::emplace_back_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext______::_1_::catch$103 @ 0x18009EDA3 (_std--vector_std--unique_ptr_CAppSubmixClientContext_std--default_delete_CAppSubmixClientContext.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAppSubmixClientContext@@QEAA@XZ @ 0x18009F1A4 (--1CAppSubmixClientContext@@QEAA@XZ.c)
 */

void __fastcall std::_Wrap_alloc<std::allocator<std::unique_ptr<CAppSubmixClientContext>>>::destroy<std::unique_ptr<CAppSubmixClientContext>>(
        __int64 a1,
        CAppSubmixClientContext **a2)
{
  CAppSubmixClientContext *v2; // rbx

  v2 = *a2;
  if ( *a2 )
  {
    CAppSubmixClientContext::~CAppSubmixClientContext(*a2);
    operator delete(v2, (const struct std::nothrow_t *)0x48);
  }
}
