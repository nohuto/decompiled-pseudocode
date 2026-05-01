/*
 * XREFs of ??$MakeAndInitialize@VPeoplePaneViewManager@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800ECEBC
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VPeoplePaneViewManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800ECB30 (-CreateInstance@-$SimpleClassFactory@VPeoplePaneViewManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnkno.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x180023C8C (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithSite@@U?$InterfaceList@UIPeoplePaneViewManager@@U?$InterfaceList@UIPeopleExperienceHostManager@@U?$InterfaceList@UIApplicationViewChangeListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EBD60 (-Release@-$RuntimeClass@U-$InterfaceList@VCImmersiveShellComponentWithSite@@U-$InterfaceList@UIP.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithSite@@U?$InterfaceList@UIPeoplePaneViewManager@@U?$InterfaceList@UIPeopleExperienceHostManager@@U?$InterfaceList@UIApplicationViewChangeListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EBDD0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCImmersiveShellComponentWithSite@@U-$InterfaceL.c)
 *     ??0PeoplePaneViewManager@@QEAA@XZ @ 0x1800EC738 (--0PeoplePaneViewManager@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PeoplePaneViewManager,IUnknown>(_QWORD *a1)
{
  PeoplePaneViewManager *v2; // rbx
  PeoplePaneViewManager *v3; // rax
  unsigned int Interface; // edi
  int v5; // eax
  GUID v7; // [rsp+48h] [rbp-28h] BYREF
  __int64 v8; // [rsp+58h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  *a1 = 0LL;
  v2 = 0LL;
  v3 = (PeoplePaneViewManager *)operator new(0x120uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v2 = PeoplePaneViewManager::PeoplePaneViewManager(v3);
    *((_DWORD *)v2 + 53) = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
    v7 = GUID_a1ae3363_f729_466f_b0f2_2ed6e5bfaa68;
    v8 = 0LL;
    v9 = 0LL;
    v5 = CImmersiveShellComponent::RegisterServiceInformation(
           (PeoplePaneViewManager *)((char *)v2 + 16),
           (__int64)&v7,
           1uLL);
    Interface = v5;
    if ( v5 >= 0 )
      Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithSite,Microsoft::WRL::Details::InterfaceList<IPeoplePaneViewManager,Microsoft::WRL::Details::InterfaceList<IPeopleExperienceHostManager,Microsoft::WRL::Details::InterfaceList<IApplicationViewChangeListener,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                    (__int64)v2,
                    &GUID_00000000_0000_0000_c000_000000000046,
                    a1);
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v5);
  }
  else
  {
    Interface = -2147024882;
  }
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithSite,Microsoft::WRL::Details::InterfaceList<IPeoplePaneViewManager,Microsoft::WRL::Details::InterfaceList<IPeopleExperienceHostManager,Microsoft::WRL::Details::InterfaceList<IApplicationViewChangeListener,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((__int64)v2);
  return Interface;
}
