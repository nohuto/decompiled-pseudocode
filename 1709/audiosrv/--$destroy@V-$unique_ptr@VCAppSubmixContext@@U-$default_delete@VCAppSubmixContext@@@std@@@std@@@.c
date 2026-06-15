/*
 * XREFs of ??$destroy@V?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@std@@@?$_Wrap_alloc@V?$allocator@V?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@std@@@std@@@std@@QEAAXPEAV?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@1@@Z @ 0x18009EB38
 * Callers:
 *     _std::vector_std::unique_ptr_CAppSubmixContext_std::default_delete_CAppSubmixContext____std::allocator_std::unique_ptr_CAppSubmixContext_std::default_delete_CAppSubmixContext_______::emplace_back_std::unique_ptr_CAppSubmixContext_std::default_delete_CAppSubmixContext______::_1_::catch$103 @ 0x18009EEE3 (_std--vector_std--unique_ptr_CAppSubmixContext_std--default_delete_CAppSubmixContext____std--all.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Wrap_alloc<std::allocator<std::unique_ptr<CAppSubmixContext>>>::destroy<std::unique_ptr<CAppSubmixContext>>(
        __int64 a1,
        __int64 **a2)
{
  __int64 *v2; // rbx

  v2 = *a2;
  if ( *a2 )
  {
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(*a2);
    operator delete(v2, (const struct std::nothrow_t *)8);
  }
}
