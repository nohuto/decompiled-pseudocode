/*
 * XREFs of ?_CreateTitlebarConfiguration@SurfaceHubPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1802BCFD4
 * Callers:
 *     ?GetChromeConfigurationForView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1802BC910 (-GetChromeConfigurationForView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIAppl.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1802BDA74 (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewTitlebarConfiguration@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800261E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1800261E0.c)
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BF10 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z @ 0x1800F3F70 (-SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x18012C7B0 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 */

__int64 __fastcall SurfaceHubPositioner::_CreateTitlebarConfiguration(
        SurfaceHubPositioner *this,
        struct IApplicationViewTitlebarConfiguration **a2)
{
  __int64 v3; // rbx
  int CanCastTo; // edi
  __int64 v5; // rdx
  int v6; // eax
  unsigned __int64 v7; // r9
  _DWORD *v8; // rcx
  _DWORD *v9; // r9
  const struct _GUID *v10; // rdx
  volatile int *v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  SurfaceHubPositioner *v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = this;
  *a2 = 0LL;
  Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>((__int64 *)&v14);
  v3 = (__int64)v14;
  if ( !v14 )
  {
    CanCastTo = -2147024882;
    v5 = 594LL;
LABEL_15:
    v7 = (unsigned int)CanCastTo;
    goto LABEL_16;
  }
  *((_WORD *)v14 + 24) = 257;
  v6 = ApplicationViewTitlebarConfiguration::SetVisibleButtons(v3, 55, 0);
  CanCastTo = v6;
  if ( v6 < 0 )
  {
    v7 = (unsigned int)v6;
    v5 = 598LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)v7);
    goto LABEL_18;
  }
  *(_DWORD *)(v3 + 72) = 0;
  *(_DWORD *)(v3 + 68) = 255;
  *(_DWORD *)(v3 + 56) = 0;
  *(_DWORD *)(v3 + 52) = 1;
  *(_DWORD *)(v3 + 76) = 1;
  *(_DWORD *)(v3 + 80) = 0;
  *(_BYTE *)(v3 + 84) = 1;
  *(_DWORD *)(v3 + 88) = 0;
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_47dcddaf_0882_4312_b34f_a5ee46048bd6, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a2 = (struct IApplicationViewTitlebarConfiguration *)v3;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  else
  {
    if ( InlineIsEqualGUID(v8, v9) )
    {
      *a2 = (struct IApplicationViewTitlebarConfiguration *)v3;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v3 + 8), v10, (void **)a2);
      if ( CanCastTo == -2147467262 )
        CanCastTo = -2147467262;
      if ( CanCastTo < 0 )
      {
        v5 = 604LL;
        goto LABEL_15;
      }
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
  }
  CanCastTo = 0;
LABEL_18:
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::Release(
      v3,
      v11);
  return (unsigned int)CanCastTo;
}
