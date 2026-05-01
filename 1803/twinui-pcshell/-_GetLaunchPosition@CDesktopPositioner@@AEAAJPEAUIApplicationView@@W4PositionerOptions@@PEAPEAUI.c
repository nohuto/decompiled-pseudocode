/*
 * XREFs of ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800227EC
 * Callers:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180023088 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUVie.c)
 *     _lambda_977bec7417907ef66834bc0b9f197e1e_::operator() @ 0x180089A9C (_lambda_977bec7417907ef66834bc0b9f197e1e_--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x18001BA10 (-GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?GetAppUserModelId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x18001C2C0 (-GetAppUserModelId@CWinRTApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x1800224FC (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     ?_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x180022E5C (-_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@.c)
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x1800236D8 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800287F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicati.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B360 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicati.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18005FC70 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18005FDD0 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180087200 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180089B74 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x18008A1CC (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRA.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x18008B0F8 (-InternalRelease@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x180132C18 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_PeopleBar@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180283EE8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_PeopleBar@@@wil@@CA-AW4wil_d.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CDesktopPositioner::_GetLaunchPosition(__int64 a1, CWinRTApplicationView *a2, char a3, __int64 *a4)
{
  __int64 (__fastcall *v6)(CWinRTApplicationView *, unsigned __int16 **); // rax
  int AppUserModelId; // eax
  int v8; // edi
  unsigned int v9; // r14d
  __int64 v10; // rax
  bool v11; // dl
  wil::details_abi *v12; // rcx
  struct wil_details_RecordUsageResult *v13; // r9
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details::IFunctorHost *v15; // r8
  unsigned int v16; // ebx
  __int64 (__fastcall *v17)(CWinRTApplicationView *, GUID *, CWinRTApplicationView **); // rax
  int v18; // eax
  __int64 (__fastcall *v19)(CWinRTApplicationView *, struct IImmersiveApplication **); // rax
  int Application; // eax
  struct IImmersiveApplication *v21; // rcx
  int DefaultSizeForRect; // eax
  unsigned __int32 v23; // r15d
  int WorkAreaFromRect; // eax
  int v25; // ebx
  int v26; // eax
  int SystemMetrics; // edi
  int v28; // edi
  HMONITOR v29; // rax
  int v30; // r10d
  LONG left; // ecx
  LONG top; // r12d
  unsigned int v33; // edx
  int v34; // r8d
  unsigned int v35; // edx
  HMONITOR v36; // rbx
  int v37; // eax
  CWinRTApplicationView *v38; // rcx
  int fixed; // eax
  __int64 v40; // rcx
  void *v41; // rcx
  void (*v42)(void); // rax
  void *v44; // rbx
  unsigned __int64 v45; // r9
  __int64 v46; // rdx
  unsigned __int64 v47; // r9
  __int64 v48; // rdx
  unsigned __int64 v49; // r9
  __int64 v50; // rdx
  int v51; // [rsp+28h] [rbp-E0h]
  int v52; // [rsp+28h] [rbp-E0h]
  void *v53; // [rsp+58h] [rbp-B0h] BYREF
  void *v54; // [rsp+60h] [rbp-A8h] BYREF
  CWinRTApplicationView *v55; // [rsp+68h] [rbp-A0h] BYREF
  struct IImmersiveApplication *v56; // [rsp+70h] [rbp-98h] BYREF
  void *v57; // [rsp+78h] [rbp-90h] BYREF
  int v58; // [rsp+80h] [rbp-88h]
  __int16 v59; // [rsp+84h] [rbp-84h]
  int v60; // [rsp+88h] [rbp-80h] BYREF
  LPVOID pv; // [rsp+90h] [rbp-78h] BYREF
  __int64 v62; // [rsp+98h] [rbp-70h]
  __int64 v63; // [rsp+A0h] [rbp-68h]
  int v64; // [rsp+A8h] [rbp-60h] BYREF
  int v65; // [rsp+B0h] [rbp-58h] BYREF
  int v66; // [rsp+B4h] [rbp-54h] BYREF
  __int16 v67; // [rsp+B8h] [rbp-50h]
  CWinRTApplicationView *v68; // [rsp+C0h] [rbp-48h] BYREF
  __int64 *v69; // [rsp+C8h] [rbp-40h] BYREF
  RECT v70; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v71[2]; // [rsp+E8h] [rbp-20h] BYREF
  void **v72; // [rsp+F8h] [rbp-10h] BYREF
  struct wil::details_abi::ThreadLocalData *v73; // [rsp+100h] [rbp-8h]
  int v74; // [rsp+108h] [rbp+0h]
  int v75; // [rsp+10Ch] [rbp+4h]
  _QWORD *v76; // [rsp+110h] [rbp+8h]
  int v77; // [rsp+118h] [rbp+10h]
  __int128 v78; // [rsp+128h] [rbp+20h]
  _QWORD v79[4]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v80[3]; // [rsp+158h] [rbp+50h] BYREF
  __int16 v81; // [rsp+170h] [rbp+68h]
  __int64 v82; // [rsp+178h] [rbp+70h]
  _BYTE v83[24]; // [rsp+180h] [rbp+78h] BYREF
  struct tagRECT v84; // [rsp+198h] [rbp+90h] BYREF
  RECT v85; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v86[2]; // [rsp+1B8h] [rbp+B0h] BYREF
  int v87; // [rsp+1C8h] [rbp+C0h]
  int v88; // [rsp+1CCh] [rbp+C4h]
  struct tagMONITORINFO mi; // [rsp+1D0h] [rbp+C8h] BYREF
  __int128 v90; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 v91; // [rsp+208h] [rbp+100h]
  RECT rc; // [rsp+210h] [rbp+108h] BYREF
  struct tagRECT v93; // [rsp+228h] [rbp+120h] BYREF
  struct tagRECT v94; // [rsp+238h] [rbp+130h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+290h] [rbp+188h]

  v82 = -2LL;
  v68 = a2;
  v69 = a4;
  *a4 = 0LL;
  pv = 0LL;
  v62 = -1LL;
  v63 = -1LL;
  v6 = *(__int64 (__fastcall **)(CWinRTApplicationView *, unsigned __int16 **))(*(_QWORD *)v68 + 136LL);
  if ( v6 == CWinRTApplicationView::GetAppUserModelId )
    AppUserModelId = CWinRTApplicationView::GetAppUserModelId(v68, (unsigned __int16 **)&pv);
  else
    AppUserModelId = v6(v68, (unsigned __int16 **)&pv);
  v8 = AppUserModelId;
  if ( AppUserModelId < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x58D,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)AppUserModelId,
      v51);
    goto LABEL_59;
  }
  v79[0] = &pv;
  v79[1] = a1;
  v79[2] = &v68;
  v79[3] = &v69;
  v80[0] = retaddr;
  v80[1] = "pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp";
  v80[2] = 0LL;
  v81 = 1425;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetCachedFeatureEnabledState();
  v58 = 5;
  LOBYTE(v59) = 3;
  v66 = 5;
  v67 = v59;
  v64 = 3;
  v9 = 1;
  v52 = 1;
  v10 = wil_details_RecordUsageInPropertyCache(
          v83,
          &`wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetFeaturePropertyCache'::`2'::data,
          2LL);
  v90 = *(_OWORD *)v10;
  v91 = *(_QWORD *)(v10 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)0x60F183,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetFeaturePropertyCache'::`2'::data,
        (union wil_details_FeaturePropertyCache *)&v90,
        v13);
    else
      g_wil_details_recordFeatureUsage(
        0x60F183u,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetFeaturePropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v90);
    v12 = (wil::details_abi *)`wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetFeaturePropertyCache'::`2'::data;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
    {
      v86[0] = 0LL;
      v87 = 0;
      v86[1] = 2LL;
      v88 = (`wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(6353283LL, 0LL, v86);
    }
  }
  if ( !(_DWORD)v91 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0x60F183u,
      (const struct FEATURE_LOGGED_TRAITS *)&v66,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v64,
      0LL,
      0,
      1uLL);
  v71[0] = off_180323610;
  v71[1] = v79;
  v72 = &wil::details::FeatureFunctorHost::`vftable';
  LOBYTE(v12) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v12, v11);
  v73 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v75 = *((_DWORD *)ThreadLocalDataCache + 4);
    v74 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v74;
  }
  v76 = v80;
  v77 = 6353283;
  wil::details::RunFunctor((wil::details *)v71, (struct wil::details::IFunctor *)&v72, v15);
  if ( v73 )
    *((_DWORD *)v73 + 4) = v75;
  if ( *v69 )
    goto LABEL_58;
  v53 = 0LL;
  v57 = 0LL;
  if ( (a3 & 1) == 0
    && (*(int (__fastcall **)(_QWORD, LPVOID, void **))(**(_QWORD **)(a1 + 184) + 24LL))(
         *(_QWORD *)(a1 + 184),
         pv,
         &v57) >= 0 )
  {
    v44 = v57;
    v54 = v57;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v54);
    v54 = v53;
    v53 = v44;
    Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease(&v54);
    v9 = 0;
LABEL_52:
    fixed = CDesktopPositioner::_FixPosition(a1, v9, (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v53, v69);
    v8 = fixed;
    if ( fixed >= 0 )
    {
      v40 = (__int64)v57;
      if ( v57 )
      {
        v57 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
      }
      v41 = v53;
      if ( v53 )
      {
        v53 = 0LL;
        v42 = *(void (**)(void))(*(_QWORD *)v41 + 16LL);
        if ( (char *)v42 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release(v41);
        else
          v42();
      }
LABEL_58:
      v8 = 0;
      goto LABEL_59;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D3,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)fixed,
      v52);
    goto LABEL_88;
  }
  v16 = 0;
  v55 = 0LL;
  v17 = **(__int64 (__fastcall ***)(CWinRTApplicationView *, GUID *, CWinRTApplicationView **))v68;
  if ( (char *)v17 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface )
    v18 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface(
            v68,
            &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
            &v55);
  else
    v18 = v17(v68, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &v55);
  if ( v18 >= 0 )
  {
    v56 = 0LL;
    v19 = *(__int64 (__fastcall **)(CWinRTApplicationView *, struct IImmersiveApplication **))(*(_QWORD *)v55 + 24LL);
    if ( v19 == CWinRTApplicationView::GetApplication )
      Application = CWinRTApplicationView::GetApplication(v55, &v56);
    else
      Application = v19(v55, &v56);
    if ( Application >= 0
      && (*(unsigned int (__fastcall **)(struct IImmersiveApplication *, _QWORD))(*(_QWORD *)v56 + 328LL))(v56, 0LL) )
    {
      v16 = 1;
    }
    v21 = v56;
    if ( v56 )
    {
      v56 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v21 + 16LL))(v21);
    }
  }
  DefaultSizeForRect = CDesktopPositioner::_GetDefaultSizeForRect(a1, v16, 0LL, &v70);
  v8 = DefaultSizeForRect;
  if ( DefaultSizeForRect < 0 )
  {
    v45 = (unsigned int)DefaultSizeForRect;
    v46 = 1029LL;
    goto LABEL_73;
  }
  v78 = 0uLL;
  v85 = (RECT)0LL;
  v23 = _InterlockedIncrement(&dword_180438070);
  WorkAreaFromRect = CDesktopPositioner::_GetWorkAreaFromRect((CDesktopPositioner *)a1, 0LL, &v94);
  v8 = WorkAreaFromRect;
  if ( WorkAreaFromRect < 0 )
  {
    v47 = (unsigned int)WorkAreaFromRect;
    v48 = 1081LL;
  }
  else
  {
    v25 = 0;
    v54 = 0LL;
    v84 = 0LL;
    v26 = CDesktopPositioner::_GetWorkAreaFromRect((CDesktopPositioner *)a1, 0LL, &v84);
    v8 = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D3,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v26,
        v52);
    }
    else
    {
      LODWORD(v54) = v84.right - v84.left;
      HIDWORD(v54) = v84.bottom - v84.top;
      v25 = v84.right - v84.left;
      v8 = 0;
    }
    if ( v8 >= 0 )
    {
      SystemMetrics = GetSystemMetrics(32);
      v28 = GetSystemMetrics(30) + SystemMetrics;
      *(_QWORD *)&rc.left = 0LL;
      *(_QWORD *)&rc.right = 0LL;
      v60 = 100;
      v29 = MonitorFromRect(&rc, 0);
      if ( v29 )
        GetScaleFactorForMonitor(v29, &v60);
      v30 = 32 * v60 / 100;
      left = v70.left;
      top = v70.top;
      if ( (v25 - v70.left) / v28 == -1 )
        v33 = 0;
      else
        v33 = v23 % ((v25 - v70.left) / v28 + 1);
      v34 = v28 * v33 + v94.left;
      v70.left = v34;
      if ( (HIDWORD(v54) - v70.top) / v30 == -1 )
        v35 = 0;
      else
        v35 = v23 % ((HIDWORD(v54) - v70.top) / v30 + 1);
      v70.top = v94.top + v30 * v35;
      v70.right = v34 + left;
      v70.bottom = v70.top + top;
      v85 = v70;
      v8 = 0;
      goto LABEL_41;
    }
    v47 = (unsigned int)v8;
    v48 = 1084LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v48,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)v47,
    v52);
LABEL_41:
  if ( v8 >= 0 )
  {
    v8 = 0;
    goto LABEL_43;
  }
  v45 = (unsigned int)v8;
  v46 = 1040LL;
LABEL_73:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v46,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)v45,
    v52);
LABEL_43:
  if ( v8 < 0 )
  {
    v49 = (unsigned int)v8;
    v50 = 1466LL;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 284) )
    {
      Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease(&v53);
      v37 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(&v53);
      v8 = v37;
      if ( v37 >= 0 )
      {
LABEL_50:
        v38 = v55;
        if ( v55 )
        {
          v55 = 0LL;
          (*(void (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v38 + 16LL))(v38);
        }
        goto LABEL_52;
      }
      v50 = 1470LL;
    }
    else
    {
      v93 = v85;
      v36 = MonitorFromRect(&v85, 0);
      if ( v36 )
      {
        memset_0(&mi, 0, sizeof(mi));
        mi.cbSize = 40;
        if ( GetMonitorInfoW(v36, &mi) )
        {
          if ( mi.rcMonitor.left != mi.rcWork.left || mi.rcMonitor.top != mi.rcWork.top )
            OffsetRect(&v93, mi.rcMonitor.left - mi.rcWork.left, mi.rcMonitor.top - mi.rcWork.top);
        }
      }
      v65 = 3;
      v37 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,enum ARRANGEMENT_BASED_VIEW_STATE,tagRECT &>(
              &v53,
              &v65,
              &v93);
      v8 = v37;
      if ( v37 >= 0 )
        goto LABEL_50;
      v50 = 1476LL;
    }
    v49 = (unsigned int)v37;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v50,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)v49,
    v52);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v55);
LABEL_88:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v57);
  Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease(&v53);
LABEL_59:
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v62 = 0LL;
  v63 = 0LL;
  return (unsigned int)v8;
}
