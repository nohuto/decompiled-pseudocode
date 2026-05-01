/*
 * XREFs of ?_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800D998C
 * Callers:
 *     ?GetChromeConfigurationForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800D8350 (-GetChromeConfigurationForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApp.c)
 *     ?_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DB438 (-_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_UpdateViewStateDataForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DB8B4 (-_UpdateViewStateDataForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x18005B6C4 (--$Make@VApplicationViewTitlebarConfiguration@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicatio.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIApplicationViewTitlebarConfiguration@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005D720 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIApplicationViewTitlebarConfigurat_ea_18005D720.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIApplicationViewTitlebarConfiguration@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005EAB0 (-Release@-$RuntimeClass@U-$InterfaceList@UIApplicationViewTitlebarConfiguration@@U-_ea_18005EAB0.c)
 */

__int64 __fastcall HolographicPositioner::_CreateTitleBarConfiguration(
        HolographicPositioner *this,
        struct IApplicationViewTitlebarConfiguration **a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  int Interface; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HolographicPositioner *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = this;
  *a2 = 0LL;
  Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration>(&v8);
  v3 = (__int64)v8;
  if ( v8 )
  {
    *((_DWORD *)v8 + 10) = 2;
    *(_DWORD *)(v3 + 44) = 1;
    *(_DWORD *)(v3 + 48) = 1;
    *(_DWORD *)(v3 + 80) = 0;
    *(_QWORD *)(v3 + 52) = 255LL;
    *(_QWORD *)(v3 + 60) = 255LL;
    Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IApplicationViewTitlebarConfiguration,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                  v3,
                  (__int64)&GUID_47dcddaf_0882_4312_b34f_a5ee46048bd6,
                  (void **)a2);
    v4 = Interface;
    if ( Interface >= 0 )
      v4 = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x3D8,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)Interface);
  }
  else
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3CD,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x8007000ELL);
  }
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IApplicationViewTitlebarConfiguration,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v3);
  return v4;
}
