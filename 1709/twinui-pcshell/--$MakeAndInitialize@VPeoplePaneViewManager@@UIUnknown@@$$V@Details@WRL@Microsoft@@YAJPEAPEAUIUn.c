/*
 * XREFs of ??$MakeAndInitialize@VPeoplePaneViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801178AC
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VPeoplePaneViewManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180117630 (-CreateInstance@-$SimpleClassFactory@VPeoplePaneViewManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnkno.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800245AC (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIPeoplePaneViewManager@@UIPeopleExperienceHostManager@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180115C20 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180115C20.c)
 *     ??0PeoplePaneViewManager@@QEAA@XZ @ 0x180117188 (--0PeoplePaneViewManager@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PeoplePaneViewManager,IUnknown,>(_QWORD *a1)
{
  PeoplePaneViewManager *v2; // rax
  unsigned int Interface; // ebx
  PeoplePaneViewManager *v4; // rdi
  int v5; // eax
  GUID v7; // [rsp+40h] [rbp-30h] BYREF
  __int64 v8; // [rsp+50h] [rbp-20h]
  __int64 v9; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  *a1 = 0LL;
  v2 = (PeoplePaneViewManager *)operator new(0x240uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = PeoplePaneViewManager::PeoplePaneViewManager(v2);
    *((_DWORD *)v4 + 125) = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
    v7 = GUID_69f7be28_e794_47d3_8ec4_e9386520c172;
    v8 = 0LL;
    v9 = 0LL;
    v5 = CImmersiveShellComponent::RegisterServiceInformation(
           (PeoplePaneViewManager *)((char *)v4 + 24),
           (__int64)&v7,
           1uLL);
    Interface = v5;
    if ( v5 >= 0 )
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IPeoplePaneViewManager,IPeopleExperienceHostManager,IApplicationViewChangeListener,ITabletModeChangeListener>::QueryInterface(
                    (__int64)v4,
                    &GUID_00000000_0000_0000_c000_000000000046,
                    a1);
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6B,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v5);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4 + 31, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v4 + 3) + 64LL))((__int64)v4 + 24, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return Interface;
}
