/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@0@0AEAV?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@0@@Z @ 0x1800D5D4C
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient________ptr64_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient________ptr64_std::allocator_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient________::_1_::catch$15 @ 0x1800D5E36 (_std--_Uninitialized_move_al_unchecked_std--unique_ptr_CAppSubmixClient_std--default_delete_CApp.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CAppSubmixClient>>>(__int64 **a1, __int64 **a2)
{
  __int64 **v3; // rbx
  __int64 *v4; // rdi

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(*v3);
        operator delete(v4, (const struct std::nothrow_t *)0x10);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
}
