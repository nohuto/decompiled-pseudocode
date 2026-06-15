/*
 * XREFs of ??1?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@QEAA@XZ @ 0x18009F14C
 * Callers:
 *     _CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::dtor$2 @ 0x18009FA8E (_CProcessSubmixManager--GetAppSubmixClientContextHelper_--_1_--dtor$2.c)
 *     _CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::dtor$3 @ 0x18009FA9A (_CProcessSubmixManager--GetAppSubmixClientContextHelper_--_1_--dtor$3.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<CAppSubmixClient>::~unique_ptr<CAppSubmixClient>(__int64 **a1)
{
  __int64 *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x10);
  }
}
