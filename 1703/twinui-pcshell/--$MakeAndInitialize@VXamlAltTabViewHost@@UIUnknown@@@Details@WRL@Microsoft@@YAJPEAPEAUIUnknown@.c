/*
 * XREFs of ??$MakeAndInitialize@VXamlAltTabViewHost@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801400D8
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VXamlAltTabViewHost@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18013FEE0 (-CreateInstance@-$SimpleClassFactory@VXamlAltTabViewHost@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180023DD8 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??0XamlAltTabViewHost@@QEAA@XZ @ 0x18013EA54 (--0XamlAltTabViewHost@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@U?$InterfaceList@UIXamlViewHost@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18013F8E0 (-Release@-$RuntimeClass@U-$InterfaceList@V-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@U-$Int.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@U?$InterfaceList@UIXamlViewHost@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18013F990 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@V-$CMultitaskingViewHostBase@UIAltTabViewHost@@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<XamlAltTabViewHost,IUnknown>(_QWORD *a1)
{
  volatile signed __int32 *v2; // rbx
  XamlAltTabViewHost *v3; // rax
  int Interface; // edi
  int inited; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a1 = 0LL;
  v2 = 0LL;
  v3 = (XamlAltTabViewHost *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v2 = (volatile signed __int32 *)XamlAltTabViewHost::XamlAltTabViewHost(v3);
    inited = CObjectWithThreadUseDetection::InitApartmentId((CObjectWithThreadUseDetection *)(v2 + 4));
    Interface = inited;
    if ( inited >= 0 )
      Interface = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x3D,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
        (const char *)(unsigned int)inited);
    if ( Interface >= 0 )
      Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CMultitaskingViewHostBase<IAltTabViewHost>,Microsoft::WRL::Details::InterfaceList<IXamlViewHost,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                    (__int64)v2,
                    &GUID_00000000_0000_0000_c000_000000000046,
                    a1);
  }
  else
  {
    Interface = -2147024882;
  }
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CMultitaskingViewHostBase<IAltTabViewHost>,Microsoft::WRL::Details::InterfaceList<IXamlViewHost,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v2);
  return (unsigned int)Interface;
}
