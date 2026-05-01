/*
 * XREFs of ?CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18014E8BC
 * Callers:
 *     ?GetChromeConfigurationForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18014D660 (-GetChromeConfigurationForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIAppl.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@@Z @ 0x18014DA94 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewTitlebarConfiguration@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800261E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1800261E0.c)
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BF10 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18008E774 (-IsPPIEdition@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z @ 0x1800F3F70 (-SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x18012C7B0 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 *     ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18014EB84 (-IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FullScreenPositionerHelpers::CreateTitlebarConfiguration(
        FullScreenPositionerHelpers *this,
        struct IApplicationView *a2,
        void **a3,
        struct IApplicationViewTitlebarConfiguration **a4)
{
  unsigned __int8 v5; // bp
  __int64 v7; // rbx
  int CanCastTo; // edi
  __int64 v9; // rdx
  int v10; // esi
  int v11; // r15d
  int v12; // eax
  struct IApplicationView *v13; // rdx
  unsigned __int64 v14; // r9
  int v15; // eax
  bool IsFullScreenCompatQuirkedApp; // al
  BOOL v17; // ecx
  int v18; // eax
  _DWORD *v19; // rcx
  _DWORD *v20; // r9
  const struct _GUID *v21; // rdx
  volatile int *v22; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v25; // [rsp+70h] [rbp+18h] BYREF

  v5 = (unsigned __int8)a2;
  *a3 = 0LL;
  Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(&v25);
  v7 = v25;
  if ( !v25 )
  {
    CanCastTo = -2147024882;
    v9 = 51LL;
LABEL_30:
    v14 = (unsigned int)CanCastTo;
    goto LABEL_31;
  }
  v10 = 1;
  *(_WORD *)(v25 + 48) = 1;
  *(_DWORD *)(v7 + 52) = 1;
  *(_DWORD *)(v7 + 56) = 1;
  *(_DWORD *)(v7 + 88) = 0;
  *(_DWORD *)(v7 + 68) = 255;
  *(_DWORD *)(v7 + 72) = 0;
  if ( IsPPIEdition() )
  {
    v15 = ApplicationViewTitlebarConfiguration::SetVisibleButtons(v7, 55, 32);
    CanCastTo = v15;
    if ( v15 < 0 )
    {
      v14 = (unsigned int)v15;
      v9 = 71LL;
      goto LABEL_31;
    }
    *(_DWORD *)(v7 + 76) = 0;
  }
  else
  {
    v11 = v5 ^ 1;
    v12 = ApplicationViewTitlebarConfiguration::SetVisibleButtons(v7, 55, v11 + 36);
    CanCastTo = v12;
    if ( v12 < 0 )
    {
      v14 = (unsigned int)v12;
      v9 = 64LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositionerhelpers.cpp",
        (const char *)v14);
      goto LABEL_33;
    }
    *(_DWORD *)(v7 + 76) = 32 * (v11 + 2);
  }
  IsFullScreenCompatQuirkedApp = FullScreenPositionerHelpers::IsFullScreenCompatQuirkedApp(this, v13);
  v17 = v5 && !IsFullScreenCompatQuirkedApp;
  *(_DWORD *)(v7 + 80) = v17;
  *(_BYTE *)(v7 + 84) = 1;
  if ( IsFullScreenCompatQuirkedApp )
  {
    if ( v5 || IsPPIEdition() )
      v10 = 0;
    v18 = ApplicationViewTitlebarConfiguration::SetVisibleButtons(v7, 51, v10);
    CanCastTo = v18;
    if ( v18 < 0 )
    {
      v14 = (unsigned int)v18;
      v9 = 89LL;
      goto LABEL_31;
    }
  }
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_47dcddaf_0882_4312_b34f_a5ee46048bd6, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a3 = (void *)v7;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    if ( InlineIsEqualGUID(v19, v20) )
    {
      *a3 = (void *)v7;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v7 + 8), v21, a3);
      if ( CanCastTo == -2147467262 )
        CanCastTo = -2147467262;
      if ( CanCastTo < 0 )
      {
        v9 = 92LL;
        goto LABEL_30;
      }
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
  }
  CanCastTo = 0;
LABEL_33:
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::Release(
      v7,
      v22);
  return (unsigned int)CanCastTo;
}
