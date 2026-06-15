/*
 * XREFs of ??1?$unique_ptr@UProcessSubmixParams@@U?$default_delete@UProcessSubmixParams@@@std@@@std@@QEAA@XZ @ 0x18005C7CC
 * Callers:
 *     _BuildDeviceGraphForStream_::_1_::dtor$1 @ 0x180037B30 (_BuildDeviceGraphForStream_--_1_--dtor$1.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<ProcessSubmixParams>::~unique_ptr<ProcessSubmixParams>(__int64 **a1)
{
  __int64 *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x18);
  }
}
