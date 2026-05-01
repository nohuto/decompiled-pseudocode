/*
 * XREFs of ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x1801CBB90
 * Callers:
 *     ?SetDefaultIconForProxyWindowThumbnail@CortanaDesktopExperienceView@@CAJPEAUHWND__@@@Z @ 0x1800DAC80 (-SetDefaultIconForProxyWindowThumbnail@CortanaDesktopExperienceView@@CAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ??1LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAA@XZ @ 0x1801CA7EC (--1LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAA@XZ.c)
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z @ 0x1801CAB84 (-GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z.c)
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1801CB860 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 *     ?Stop@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801CC3B4 (-Stop@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AppsFolderTaskbarIconLoading@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801CC9F0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_AppsFolderTaskbarIconLoading.c)
 *     ??$Start@AEAPEBG@LoadIconW@ImmersiveIconsLoggingTelemetry@@SA?AV01@AEAPEBG@Z @ 0x1801CCD38 (--$Start@AEAPEBG@LoadIconW@ImmersiveIconsLoggingTelemetry@@SA-AV01@AEAPEBG@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

__int64 __fastcall ImmersiveIcons::LoadImmersiveIcon(
        ImmersiveIcons *this,
        struct tagSIZE a2,
        struct tagSIZE a3,
        struct tagSIZE a4,
        unsigned int a5,
        bool a6,
        struct tagSIZE *a7)
{
  LONG cx; // r14d
  int v11; // r14d
  int v12; // r14d
  int v13; // r14d
  int IconData; // eax
  struct tagSIZE v15; // r9
  unsigned int v16; // r14d
  __int64 v17; // rdx
  const struct ImmersiveIcons::IconData2 *v19; // [rsp+28h] [rbp-D8h]
  __int16 v20; // [rsp+44h] [rbp-BCh]
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v22; // [rsp+4Ch] [rbp-B4h]
  __int128 pvParam; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A0h]
  __int128 v25; // [rsp+70h] [rbp-90h]
  __int64 v26; // [rsp+80h] [rbp-80h]
  _BYTE v27[320]; // [rsp+90h] [rbp-70h] BYREF
  bool v28[528]; // [rsp+1D0h] [rbp+D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+428h] [rbp+328h]

  cx = a4.cx;
  *(_QWORD *)&pvParam = L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI";
  if ( (`wil::Feature<__WilFeatureTraits_Feature_AppsFolderTaskbarIconLoading>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_AppsFolderTaskbarIconLoading>::GetCachedFeatureEnabledState();
  LOBYTE(v20) = 3;
  v21 = 0;
  v22 = v20;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_AppsFolderTaskbarIconLoading>::GetFeaturePropertyCache'::`2'::data,
    0xA7D132u,
    (const struct FEATURE_LOGGED_TRAITS *)&v21,
    1,
    3);
  *a7 = 0LL;
  ImmersiveIconsLoggingTelemetry::LoadIconW::Start<unsigned short const * &>((ImmersiveIconsLoggingTelemetry::LoadIconW *)v27);
  LODWORD(v26) = cx;
  *(struct tagSIZE *)&v25 = a2;
  *((struct tagSIZE *)&v25 + 1) = a3;
  v11 = 0;
  pvParam = 0x10uLL;
  if ( SystemParametersInfoW(0x42u, 0x10u, &pvParam, 0) && (BYTE4(pvParam) & 1) != 0 )
  {
    v12 = 5 * (unsigned __int8)((unsigned __int16)GetSysColor(5) >> 8);
    v13 = (unsigned __int8)(GetSysColor(5) >> 16) + v12;
    v11 = (v13 + 2 * (unsigned int)(unsigned __int8)GetSysColor(5) > 0x400) + 2;
  }
  HIDWORD(v26) = v11;
  memset(v28, 0, sizeof(v28));
  pvParam = v25;
  v24 = v26;
  IconData = ImmersiveIcons::GetIconData(
               (WCHAR *)L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI",
               (unsigned __int16 *)&pvParam,
               (__int64)v28);
  v16 = IconData;
  if ( IconData >= 0 )
  {
    IconData = ImmersiveIcons::CreateIconBitmap(this, a2, a3, v15, (__int64)v28, v19, a7);
    v16 = IconData;
    if ( IconData >= 0 )
    {
      wil::ActivityBase<ImmersiveIconsLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((ImmersiveIconsLoggingTelemetry::LoadIconW *)v27);
      v16 = 0;
      goto LABEL_12;
    }
    v17 = 325LL;
  }
  else
  {
    v17 = 323LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v17,
    (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
    (const char *)(unsigned int)IconData);
LABEL_12:
  ImmersiveIconsLoggingTelemetry::LoadIconW::~LoadIconW((ImmersiveIconsLoggingTelemetry::LoadIconW *)v27);
  return v16;
}
