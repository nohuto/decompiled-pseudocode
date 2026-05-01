/*
 * XREFs of ??$Make@VCClassicWindowExternal@@PEAUIClassicWindow@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCClassicWindowExternal@@@12@$$QEAPEAUIClassicWindow@@@Z @ 0x180038538
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7a26999a8ff8ee75627551ee74790a9c___::Run @ 0x180038AC0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7a26999a8ff8ee75627551ee74790a9c___--Run.c)
 * Callees:
 *     ??0CClassicWindowExternal@@QEAA@PEAUIClassicWindow@@@Z @ 0x1800340F8 (--0CClassicWindowExternal@@QEAA@PEAUIClassicWindow@@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIClassicWindowExternal@@U?$InterfaceList@UIClassicWindowContainer@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180037D60 (-Release@-$RuntimeClass@U-$InterfaceList@UIClassicWindowExternal@@U-$InterfaceList@UIClassicWind.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make<CClassicWindowExternal,IClassicWindow *>(
        volatile signed __int32 **a1,
        struct IClassicWindow **a2)
{
  CClassicWindowExternal *v4; // rax
  CClassicWindowExternal *v5; // rdi

  *a1 = 0LL;
  v4 = (CClassicWindowExternal *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = CClassicWindowExternal::CClassicWindowExternal(v4, *a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IClassicWindowExternal,Microsoft::WRL::Details::InterfaceList<IClassicWindowContainer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(*a1);
    *a1 = (volatile signed __int32 *)v5;
  }
  return a1;
}
