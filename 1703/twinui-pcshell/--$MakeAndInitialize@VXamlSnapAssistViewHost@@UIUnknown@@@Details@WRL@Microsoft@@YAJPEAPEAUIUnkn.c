/*
 * XREFs of ??$MakeAndInitialize@VXamlSnapAssistViewHost@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180141D98
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VXamlSnapAssistViewHost@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180141C60 (-CreateInstance@-$SimpleClassFactory@VXamlSnapAssistViewHost@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnkn.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180023DD8 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??0XamlSnapAssistViewHost@@QEAA@XZ @ 0x18014034C (--0XamlSnapAssistViewHost@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@U?$InterfaceList@UIXamlViewHost@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180141670 (-Release@-$RuntimeClass@U-$InterfaceList@V-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@U-.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@U?$InterfaceList@UIXamlViewHost@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801416E0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@V-$CMultitaskingViewHostBase@UISnapAssistViewHos.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<XamlSnapAssistViewHost,IUnknown>(_QWORD *a1)
{
  volatile signed __int32 *v2; // rbx
  XamlSnapAssistViewHost *v3; // rax
  int Interface; // edi
  int inited; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a1 = 0LL;
  v2 = 0LL;
  v3 = (XamlSnapAssistViewHost *)operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v2 = (volatile signed __int32 *)XamlSnapAssistViewHost::XamlSnapAssistViewHost(v3);
    inited = CObjectWithThreadUseDetection::InitApartmentId((CObjectWithThreadUseDetection *)(v2 + 4));
    Interface = inited;
    if ( inited >= 0 )
      Interface = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x3B,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
        (const char *)(unsigned int)inited);
    if ( Interface >= 0 )
      Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CMultitaskingViewHostBase<ISnapAssistViewHost>,Microsoft::WRL::Details::InterfaceList<IXamlViewHost,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                    (__int64)v2,
                    &GUID_00000000_0000_0000_c000_000000000046,
                    a1);
  }
  else
  {
    Interface = -2147024882;
  }
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CMultitaskingViewHostBase<ISnapAssistViewHost>,Microsoft::WRL::Details::InterfaceList<IXamlViewHost,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v2);
  return (unsigned int)Interface;
}
