/*
 * XREFs of ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x180303EB4
 * Callers:
 *     ?SetDefaultIconForProxyWindowThumbnail@CortanaDesktopExperienceView@@CAJPEAUHWND__@@@Z @ 0x1801872AC (-SetDefaultIconForProxyWindowThumbnail@CortanaDesktopExperienceView@@CAJPEAUHWND__@@@Z.c)
 *     ?s_LoadIconSync@CWinRTAppIconLoader@@SAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAPEAUHBITMAP__@@@Z @ 0x1802735C0 (-s_LoadIconSync@CWinRTAppIconLoader@@SAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAPEAUHBITMA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ??0?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180302620 (--0-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 *     ??1LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAA@XZ @ 0x1803026F8 (--1LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAA@XZ.c)
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1803029CC (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z @ 0x180303104 (-GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z.c)
 *     ?GetMrtContrast@ImmersiveIcons@@YA?AW4RESOURCE_CONTRAST@@XZ @ 0x180303CF0 (-GetMrtContrast@ImmersiveIcons@@YA-AW4RESOURCE_CONTRAST@@XZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AppsFolderTaskbarIconLoading@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180304730 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AppsFolderTaskbarIconLoading@@@wil@@.c)
 *     ?StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z @ 0x1803047E8 (-StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z.c)
 *     ?Stop@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180304928 (-Stop@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 */

__int64 __fastcall ImmersiveIcons::LoadImmersiveIcon(
        ImmersiveIcons *this,
        struct tagSIZE a2,
        struct tagSIZE a3,
        struct tagSIZE a4,
        struct tagSIZE a5,
        unsigned __int16 *a6,
        struct tagSIZE *a7)
{
  LONG cx; // r14d
  int IconData; // eax
  struct tagSIZE v12; // r9
  unsigned int v13; // r14d
  __int64 v14; // rdx
  const struct ImmersiveIcons::IconData2 *v16; // [rsp+28h] [rbp-D8h]
  __int128 v17; // [rsp+40h] [rbp-C0h]
  __int64 v18; // [rsp+50h] [rbp-B0h]
  __int128 v19; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+70h] [rbp-90h]
  _QWORD v21[40]; // [rsp+80h] [rbp-80h] BYREF
  bool v22[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+418h] [rbp+318h]

  cx = a4.cx;
  wil::Feature<__WilFeatureTraits_Feature_AppsFolderTaskbarIconLoading>::ReportUsageToService();
  *a7 = 0LL;
  wil::ActivityBase<ImmersiveIconsLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ImmersiveIconsLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v21);
  v21[0] = &ImmersiveIconsLoggingTelemetry::LoadIconW::`vftable';
  ImmersiveIconsLoggingTelemetry::LoadIconW::StartActivity((ImmersiveIconsLoggingTelemetry::LoadIconW *)v21, a6);
  *(struct tagSIZE *)&v17 = a2;
  *((struct tagSIZE *)&v17 + 1) = a3;
  LODWORD(v18) = cx;
  HIDWORD(v18) = ImmersiveIcons::GetMrtContrast();
  memset_0(v22, 0, 0x210uLL);
  v19 = v17;
  v20 = v18;
  IconData = ImmersiveIcons::GetIconData(a6, (unsigned __int16 *)&v19, (__int64)v22);
  v13 = IconData;
  if ( IconData >= 0 )
  {
    LOBYTE(v12.cx) = a5.cx;
    IconData = ImmersiveIcons::CreateIconBitmap(this, a2, a3, v12, (__int64)v22, v16, a7);
    v13 = IconData;
    if ( IconData >= 0 )
    {
      wil::ActivityBase<ImmersiveIconsLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v21);
      v13 = 0;
      goto LABEL_7;
    }
    v14 = 323LL;
  }
  else
  {
    v14 = 321LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
    (const char *)(unsigned int)IconData);
LABEL_7:
  ImmersiveIconsLoggingTelemetry::LoadIconW::~LoadIconW((ImmersiveIconsLoggingTelemetry::LoadIconW *)v21);
  return v13;
}
