/*
 * XREFs of ??$MakeAndInitialize@VXamlAltTabViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18016E544
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VXamlAltTabViewHost@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18016E4B0 (-CreateInstance@-$SimpleClassFactory@VXamlAltTabViewHost@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x1800246F8 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??0XamlAltTabViewHost@@QEAA@XZ @ 0x18016CBBC (--0XamlAltTabViewHost@@QEAA@XZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UIXamlViewHost@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18016DE30 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18016DE30.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<XamlAltTabViewHost,IUnknown,>(_QWORD *a1)
{
  XamlAltTabViewHost *v2; // rax
  int Interface; // ebx
  volatile signed __int32 *v4; // rdi
  int inited; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a1 = 0LL;
  v2 = (XamlAltTabViewHost *)operator new(0xC8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = (volatile signed __int32 *)XamlAltTabViewHost::XamlAltTabViewHost(v2);
    inited = CObjectWithThreadUseDetection::InitApartmentId((CObjectWithThreadUseDetection *)(v4 + 6));
    Interface = inited;
    if ( inited >= 0 )
      Interface = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x3F,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
        (const char *)(unsigned int)inited);
    if ( Interface >= 0 )
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<IAltTabViewHost>,IXamlViewHost>::QueryInterface(
                    (__int64)v4,
                    &GUID_00000000_0000_0000_c000_000000000046,
                    a1);
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd(v4 + 33, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 88LL))(v4, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)Interface;
}
