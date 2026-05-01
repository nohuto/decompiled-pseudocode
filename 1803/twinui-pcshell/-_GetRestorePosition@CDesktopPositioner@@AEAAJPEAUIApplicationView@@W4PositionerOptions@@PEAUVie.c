/*
 * XREFs of ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180023088
 * Callers:
 *     ?_RestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@@Z @ 0x180023304 (-_RestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUViewSi.c)
 *     _lambda_d40303f400b27b9399fd75f15be23f87_::operator() @ 0x1802BEC1C (_lambda_d40303f400b27b9399fd75f15be23f87_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_UsePreferredSizeForStandaloneWindows@CDesktopPositioner@@AEBA_NPEAUIApplicationView@@@Z @ 0x1800217DC (-_UsePreferredSizeForStandaloneWindows@CDesktopPositioner@@AEBA_NPEAUIApplicationView@@@Z.c)
 *     ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800226F8 (-_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIAppli.c)
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800227EC (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAPEAUI.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002BF80 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18005FC70 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18005FDD0 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180087200 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     _lambda_977bec7417907ef66834bc0b9f197e1e_::operator() @ 0x180089A9C (_lambda_977bec7417907ef66834bc0b9f197e1e_--operator().c)
 *     ?InternalRelease@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x18008B0F8 (-InternalRelease@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18009CBFC (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_PeopleBar@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180283EE8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_PeopleBar@@@wil@@CA-AW4wil_d.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x1802C1418 (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 *     ?_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1802C1728 (-_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CDesktopPositioner::_GetRestorePosition(
        CDesktopPositioner *a1,
        struct IApplicationView *a2,
        __int64 a3,
        _QWORD *a4,
        struct IApplicationViewPosition **a5)
{
  __int64 v7; // rax
  bool v8; // dl
  wil::details_abi *v9; // rcx
  struct wil_details_RecordUsageResult *v10; // r9
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v12; // rbx
  int v13; // eax
  struct IApplicationView *v14; // rdx
  int v15; // edi
  HWND WindowForView; // rax
  CDesktopPositioner *v17; // rcx
  int LaunchPosition; // eax
  unsigned int v19; // ebx
  struct IApplicationView *v20; // rcx
  __int64 v22; // rbx
  struct IApplicationView *v23; // rbx
  int v24; // eax
  CDesktopPositioner *v25; // rcx
  int v26; // eax
  struct DiagnosticsInfo *v27; // [rsp+20h] [rbp-E0h]
  struct IApplicationView *v28; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+58h] [rbp-A8h]
  __int16 v30; // [rsp+5Ch] [rbp-A4h]
  int v31; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h] BYREF
  struct IApplicationViewPosition **v33; // [rsp+70h] [rbp-90h] BYREF
  struct IApplicationView *v34; // [rsp+78h] [rbp-88h] BYREF
  struct IOcclusionBasedApplicationViewPosition *v35; // [rsp+80h] [rbp-80h] BYREF
  int v36; // [rsp+88h] [rbp-78h] BYREF
  int v37; // [rsp+90h] [rbp-70h] BYREF
  int v38; // [rsp+94h] [rbp-6Ch] BYREF
  __int16 v39; // [rsp+98h] [rbp-68h]
  int v40[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v41; // [rsp+A8h] [rbp-58h]
  int v42; // [rsp+ACh] [rbp-54h]
  __int64 v43; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v44[4]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v45[2]; // [rsp+D8h] [rbp-28h] BYREF
  const char *v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  __int16 v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  _BYTE v50[24]; // [rsp+100h] [rbp+0h] BYREF
  RECT rc; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v52[2]; // [rsp+128h] [rbp+28h] BYREF
  int v53; // [rsp+138h] [rbp+38h]
  int v54; // [rsp+13Ch] [rbp+3Ch]
  __int128 v55; // [rsp+140h] [rbp+40h] BYREF
  __int64 v56; // [rsp+150h] [rbp+50h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v49 = -2LL;
  v34 = a2;
  v33 = a5;
  v31 = 0;
  *a5 = 0LL;
  v44[0] = &v34;
  v44[1] = a1;
  v44[2] = &v31;
  v44[3] = &v33;
  *(_QWORD *)v45 = retaddr;
  v46 = "pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp";
  v47 = 0LL;
  v48 = 1170;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetCachedFeatureEnabledState();
  v29 = 5;
  LOBYTE(v30) = 3;
  v38 = 5;
  v39 = v30;
  v36 = 3;
  LODWORD(v27) = 1;
  v7 = wil_details_RecordUsageInPropertyCache(
         v50,
         &`wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetFeaturePropertyCache'::`2'::data,
         2LL);
  v55 = *(_OWORD *)v7;
  v56 = *(_QWORD *)(v7 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)0x60F183,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetFeaturePropertyCache'::`2'::data,
        (union wil_details_FeaturePropertyCache *)&v55,
        v10);
    else
      g_wil_details_recordFeatureUsage(
        0x60F183u,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetFeaturePropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v55);
    v9 = (wil::details_abi *)`wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetFeaturePropertyCache'::`2'::data;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
    {
      v52[0] = 0LL;
      v53 = 0;
      v52[1] = 2LL;
      v54 = (`wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(6353283LL, 0LL, v52);
    }
  }
  if ( !(_DWORD)v56 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0x60F183u,
      (const struct FEATURE_LOGGED_TRAITS *)&v38,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v36,
      0LL,
      0,
      1uLL);
  LOBYTE(v9) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v9, v8);
  v12 = ThreadLocalDataCache;
  *(_QWORD *)v40 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v42 = *((_DWORD *)ThreadLocalDataCache + 4);
    v41 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v41;
    v12 = *(struct wil::details_abi::ThreadLocalData **)v40;
  }
  v13 = lambda_977bec7417907ef66834bc0b9f197e1e_::operator()(v44);
  v15 = v13;
  if ( v13 < 0 )
  {
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v13,
      (int)v40,
      (struct wil::ThreadErrorContext *)0x60F183,
      (unsigned int)v45,
      v27);
    v12 = *(struct wil::details_abi::ThreadLocalData **)v40;
  }
  if ( v12 )
    *((_DWORD *)v12 + 4) = v42;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x492,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v15,
      (int)v27);
    return (unsigned int)v15;
  }
  else
  {
    if ( *v33 )
      return 0LL;
    WindowForView = ApplicationViewHelpers::GetWindowForView(v34, v14);
    if ( WindowForView && (GetWindowLongPtrW(WindowForView, -16) & 0x10000) != 0 )
    {
      *(_QWORD *)&rc.left = 0LL;
      *(_QWORD *)&rc.right = 0LL;
      v28 = 0LL;
      if ( a4 )
      {
        if ( *a4 )
        {
          v22 = *((_QWORD *)a1 + 26);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v28);
          if ( (*(int (__fastcall **)(__int64, _QWORD, struct IApplicationView **))(*(_QWORD *)v22 + 48LL))(
                 v22,
                 *a4,
                 &v28) >= 0 )
          {
            v32 = 0LL;
            v23 = v28;
            Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease(&v32);
            if ( (*(int (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)v23 + 104LL))(
                   v23,
                   &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
                   &v32) >= 0
              && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v32 + 32LL))(v32, &v37) >= 0 )
            {
              if ( v37 == 2 )
              {
                v24 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v32 + 24LL))(v32, &rc);
                if ( v24 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x4B4,
                    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                    (const char *)(unsigned int)v24,
                    (int)v27);
              }
              else
              {
                v35 = 0LL;
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
                if ( CDesktopPositioner::_GetFullPositionSnapshot(v25, v28, &v35) >= 0 )
                {
                  v26 = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, RECT *))(*(_QWORD *)v35 + 56LL))(
                          v35,
                          &rc);
                  if ( v26 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x4BF,
                      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                      (const char *)(unsigned int)v26,
                      (int)v27);
                }
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
              }
            }
            Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease(&v32);
          }
        }
      }
      if ( !CDesktopPositioner::_UsePreferredSizeForStandaloneWindows(
              v17,
              (__int64 (__fastcall ***)(struct IApplicationView *, GUID *, CWinRTApplicationView **))v34)
        && !IsRectEmpty(&rc)
        && CDesktopPositioner::_GetOffsetPosition(a1, &rc, v33) >= 0
        || (v43 = 0LL, (int)CDesktopPositioner::_GetPreferredPosition(a1, v34, &rc, v33) >= 0)
        || (LaunchPosition = CDesktopPositioner::_GetLaunchPosition((__int64)a1, v34, v31, (__int64 *)v33),
            v19 = LaunchPosition,
            LaunchPosition >= 0) )
      {
        v20 = v28;
        if ( v28 )
        {
          v28 = 0LL;
          (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v20 + 16LL))(v20);
        }
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D2,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)LaunchPosition,
        (int)v27);
      Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease(&v43);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v28);
    }
    else
    {
      v19 = -2147023728;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x49D,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)0x80070490LL,
        (int)v27);
    }
    return v19;
  }
}
