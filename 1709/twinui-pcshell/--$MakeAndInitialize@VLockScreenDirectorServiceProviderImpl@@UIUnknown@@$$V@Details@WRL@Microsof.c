/*
 * XREFs of ??$MakeAndInitialize@VLockScreenDirectorServiceProviderImpl@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800E32E4
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VLockScreenDirectorServiceProviderImpl@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800E3250 (-CreateInstance@-$SimpleClassFactory@VLockScreenDirectorServiceProviderImpl@@$0A@@WRL@Microsoft@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CImmersiveShellComponentWithGITSite@@QEAA@XZ @ 0x1800185BC (--0CImmersiveShellComponentWithGITSite@@QEAA@XZ.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800245AC (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILockScreenDirectorServiceProvider@@VCImmersiveShellComponentWithGITSite@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E2CB0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILockScre.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<LockScreenDirectorServiceProviderImpl,IUnknown,>(
        _QWORD *a1)
{
  char *v2; // rax
  __int64 v3; // rbx
  int Interface; // edi
  _QWORD *v5; // rdi
  int v6; // eax
  GUID v8; // [rsp+38h] [rbp-30h] BYREF
  __int64 v9; // [rsp+48h] [rbp-20h]
  __int64 v10; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a1 = 0LL;
  v2 = (char *)operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = (__int64)v2;
  if ( v2 )
  {
    v5 = v2 + 8;
    CImmersiveShellComponentWithGITSite::CImmersiveShellComponentWithGITSite((CImmersiveShellComponentWithGITSite *)(v2 + 8));
    *(_DWORD *)(v3 + 124) = 1;
    *(_QWORD *)v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ILockScreenDirectorServiceProvider,CImmersiveShellComponentWithGITSite>::`vftable'{for `ILockScreenDirectorServiceProvider'};
    *v5 = &LockScreenDirectorServiceProviderImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,CImmersiveShellComponentWithGITSite>'};
    *(_QWORD *)(v3 + 48) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ILockScreenDirectorServiceProvider,CImmersiveShellComponentWithGITSite>::`vftable'{for `IImmersiveShellComponent'};
    *(_QWORD *)(v3 + 56) = &LockScreenDirectorServiceProviderImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v3 = &LockScreenDirectorServiceProviderImpl::`vftable'{for `ILockScreenDirectorServiceProvider'};
    *v5 = &LockScreenDirectorServiceProviderImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,CImmersiveShellComponentWithGITSite>'};
    *(_QWORD *)(v3 + 48) = &LockScreenDirectorServiceProviderImpl::`vftable'{for `IImmersiveShellComponent'};
    *(_QWORD *)(v3 + 56) = &LockScreenDirectorServiceProviderImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
    *(_QWORD *)(v3 + 128) = 0LL;
    *(_QWORD *)(v3 + 136) = 0LL;
    *(_QWORD *)(v3 + 144) = 0LL;
    *(_QWORD *)(v3 + 152) = 0LL;
    v8 = IID_ILockScreenDirector;
    v9 = 0LL;
    v10 = 0LL;
    v6 = CImmersiveShellComponent::RegisterServiceInformation((CImmersiveShellComponent *)(v3 + 48), (__int64)&v8, 1uLL);
    Interface = v6;
    if ( v6 >= 0 )
      Interface = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x12,
        (__int64)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
        (const char *)(unsigned int)v6);
    if ( Interface >= 0 )
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ILockScreenDirectorServiceProvider,CImmersiveShellComponentWithGITSite>::QueryInterface(
                    v3,
                    &GUID_00000000_0000_0000_c000_000000000046,
                    a1);
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 124), 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v3 + 48) + 64LL))(v3 + 48, 1LL);
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
