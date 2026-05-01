/*
 * XREFs of ?CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1802C5FEC
 * Callers:
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1802C5C5C (-CreateAndInitApplicationViewOperation@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIAp.c)
 *     ?GetChromeConfigurationForView@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1802C6C70 (-GetChromeConfigurationForView@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIAppl.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewTitlebarConfiguration@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800261E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1800261E0.c)
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BF10 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18008E774 (-IsPPIEdition@@YA_NXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180093198 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z @ 0x1800F3F70 (-SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x18012C7B0 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 *     ?OverlayTitlebarsInTabletMode@TitlebarOverlayHelpers@@YA_NXZ @ 0x1802C9284 (-OverlayTitlebarsInTabletMode@TitlebarOverlayHelpers@@YA_NXZ.c)
 */

__int64 __fastcall TabletModePositioner::CreateTitlebarConfiguration(
        struct IApplicationView *a1,
        struct IApplicationViewTitlebarConfiguration **a2)
{
  unsigned int v2; // edi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  TitlebarOverlayHelpers *v7; // rcx
  _DWORD *v8; // rcx
  _DWORD *v9; // r9
  const struct _GUID *v10; // rdx
  int CanCastTo; // eax
  volatile int *v12; // rdx
  void (*v13)(void); // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v16; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  *a2 = 0LL;
  Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(&v16);
  v6 = v16;
  if ( v16 )
  {
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v4, 3u, v5);
    if ( TitlebarOverlayHelpers::OverlayTitlebarsInTabletMode(v7) )
    {
      *(_WORD *)(v6 + 48) = 1;
      *(_DWORD *)(v6 + 52) = 1;
      *(_DWORD *)(v6 + 56) = 1;
    }
    else
    {
      *(_WORD *)(v6 + 48) = 257;
      *(_QWORD *)(v6 + 52) = 1LL;
    }
    *(_DWORD *)(v6 + 88) = 0;
    if ( IsPPIEdition() )
    {
      ApplicationViewTitlebarConfiguration::SetVisibleButtons(v6, 55, 16);
      *(_DWORD *)(v6 + 76) = 0;
    }
    else
    {
      ApplicationViewTitlebarConfiguration::SetVisibleButtons(v6, 55, 20);
      *(_DWORD *)(v6 + 76) = 64;
    }
    *(_QWORD *)(v6 + 68) = 255LL;
    *(_DWORD *)(v6 + 80) = 1;
    *(_BYTE *)(v6 + 84) = 1;
    *a2 = 0LL;
    if ( InlineIsEqualGUID(&GUID_47dcddaf_0882_4312_b34f_a5ee46048bd6, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a2 = (struct IApplicationViewTitlebarConfiguration *)v6;
      v13 = *(void (**)(void))(*(_QWORD *)v6 + 8LL);
    }
    else
    {
      if ( InlineIsEqualGUID(v8, v9) )
      {
        *a2 = (struct IApplicationViewTitlebarConfiguration *)v6;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v6 + 8), v10, (void **)a2);
        if ( CanCastTo == -2147467262 )
          CanCastTo = -2147467262;
        if ( CanCastTo < 0 )
          goto LABEL_19;
      }
      v13 = *(void (**)(void))(*(_QWORD *)*a2 + 8LL);
    }
    v13();
LABEL_19:
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::Release(
      v6,
      v12);
    return v2;
  }
  v2 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAF0,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)0x8007000ELL);
  return v2;
}
