/*
 * XREFs of ?DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z @ 0x1802BF250
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x1800224FC (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x1800236D8 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewOperation@@UIApplicationViewTabOperation@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180026E90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewO.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x18008B0F8 (-InternalRelease@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180093198 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_GetMonitorFromPoint@CDesktopPositioner@@AEAAJPEBUtagPOINT@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1800F5268 (-_GetMonitorFromPoint@CDesktopPositioner@@AEAAJPEBUtagPOINT@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x180132C18 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18014C46C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x1802BF664 (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x1802C1418 (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDesktopPositioner::DragCompleted(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct tagPOINT a3)
{
  LONG y; // esi
  CDesktopPositioner *v7; // rcx
  int FullPositionSnapshot; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  HMONITOR v11; // rax
  enum DEVICE_SCALE_FACTOR ScaleFactorForRect; // eax
  int v13; // r15d
  int v14; // edi
  int v15; // eax
  int MonitorFromPoint; // eax
  __int64 v17; // rdx
  int v18; // esi
  int v19; // ebx
  int v20; // eax
  int fixed; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  struct tagPOINT *v24; // rbx
  __int64 v25; // r9
  __int64 v26; // rdx
  struct tagPOINT v27; // rdi
  int v28; // eax
  int nNumerator; // [rsp+20h] [rbp-69h] BYREF
  struct tagPOINT v31; // [rsp+28h] [rbp-61h] BYREF
  struct tagPOINT v32; // [rsp+30h] [rbp-59h] BYREF
  void *v33; // [rsp+38h] [rbp-51h] BYREF
  struct IImmersiveMonitor *v34; // [rsp+40h] [rbp-49h] BYREF
  struct IOcclusionBasedApplicationViewPosition *v35; // [rsp+48h] [rbp-41h] BYREF
  __int64 v36[2]; // [rsp+50h] [rbp-39h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-29h] BYREF
  struct tagRECT v38; // [rsp+70h] [rbp-19h] BYREF
  struct tagRECT v39; // [rsp+80h] [rbp-9h] BYREF
  _BYTE v40[4]; // [rsp+90h] [rbp+7h] BYREF
  int v41; // [rsp+94h] [rbp+Bh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v36[1] = -2LL;
  v31 = a3;
  y = a3.y;
  v35 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
  FullPositionSnapshot = CDesktopPositioner::_GetFullPositionSnapshot(v7, a2, &v35);
  v9 = FullPositionSnapshot;
  if ( FullPositionSnapshot >= 0 )
  {
    FullPositionSnapshot = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, struct tagRECT *))(*(_QWORD *)v35 + 56LL))(
                             v35,
                             &v38);
    v9 = FullPositionSnapshot;
    if ( FullPositionSnapshot < 0 )
    {
      v10 = 809LL;
      goto LABEL_7;
    }
    v11 = ::MonitorFromPoint(a3, 1u);
    FullPositionSnapshot = GetScaleFactorForMonitor(v11, &nNumerator);
    v9 = FullPositionSnapshot;
    if ( FullPositionSnapshot < 0 )
    {
      v10 = 815LL;
      goto LABEL_7;
    }
    ScaleFactorForRect = GetScaleFactorForRect(&v38);
    v13 = ScaleFactorForRect;
    rc = v38;
    if ( ScaleFactorForRect != nNumerator )
    {
      v14 = MulDiv(v38.right - v38.left, nNumerator, ScaleFactorForRect);
      v15 = MulDiv(v38.bottom - v38.top, nNumerator, v13);
      rc.right = v14 + rc.left;
      rc.bottom = rc.top + v15;
    }
    OffsetRect(&rc, a3.x - v38.left, y - v38.top);
    v34 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v34);
    MonitorFromPoint = CDesktopPositioner::_GetMonitorFromPoint((CDesktopPositioner *)((char *)this - 112), &v31, &v34);
    v9 = MonitorFromPoint;
    if ( MonitorFromPoint < 0 )
    {
      v17 = 843LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)MonitorFromPoint);
LABEL_39:
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v34);
      goto LABEL_40;
    }
    MonitorFromPoint = (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveMonitor *, _BYTE *))(**((_QWORD **)this + 11)
                                                                                              + 64LL))(
                         *((_QWORD *)this + 11),
                         v34,
                         v40);
    v9 = MonitorFromPoint;
    if ( MonitorFromPoint < 0 )
    {
      v17 = 846LL;
      goto LABEL_16;
    }
    v18 = v41 / -2;
    v19 = nNumerator * *((_DWORD *)this + 42) / -100;
    MonitorFromPoint = CDesktopPositioner::_GetWorkAreaFromRect((CDesktopPositioner *)((char *)this - 112), &rc, &v39);
    v9 = MonitorFromPoint;
    if ( MonitorFromPoint < 0 )
    {
      v17 = 859LL;
      goto LABEL_16;
    }
    if ( v18 + rc.top < v39.top )
      v18 = v39.top - rc.top;
    if ( v19 + rc.left < v39.left )
      v19 = v39.left - rc.left;
    OffsetRect(&rc, v19, v18);
    v33 = 0LL;
    Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)&v33);
    v20 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
            &v33,
            (__int128 *)&rc.left);
    v9 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36E,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v20);
LABEL_38:
      Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)&v33);
      goto LABEL_39;
    }
    v32 = 0LL;
    Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)&v32);
    fixed = CDesktopPositioner::_FixPosition(
              (__int64)this - 112,
              4u,
              (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v33,
              (__int64 *)&v32);
    v9 = fixed;
    if ( fixed < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x372,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)fixed);
LABEL_37:
      Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)&v32);
      goto LABEL_38;
    }
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(v36);
    v24 = (struct tagPOINT *)v36[0];
    if ( v36[0] )
    {
      v27 = v32;
      if ( *(_QWORD *)(v36[0] + 72) != v32 )
      {
        v31 = v32;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v31);
        v31 = v24[9];
        v24[9] = v27;
        Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)&v31);
      }
      wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v22, 0, v23);
      v28 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct tagPOINT *))(*(_QWORD *)a2 + 320LL))(a2, v24);
      v9 = v28;
      if ( v28 >= 0 )
      {
        v28 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 56LL))(a2);
        v9 = v28;
        if ( v28 >= 0 )
          goto LABEL_35;
        v26 = 904LL;
      }
      else
      {
        v26 = 901LL;
      }
      v25 = (unsigned int)v28;
    }
    else
    {
      v9 = -2147024882;
      v25 = 2147942414LL;
      v26 = 886LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)v25);
LABEL_35:
    if ( v24 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewOperation,Windows::Internal::ComposableShell::Tabs::IApplicationViewTabOperation,Microsoft::WRL::FtmBase>::Release((__int64)v24);
    goto LABEL_37;
  }
  v10 = 806LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)FullPositionSnapshot);
LABEL_40:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
  return v9;
}
