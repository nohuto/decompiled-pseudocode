/*
 * XREFs of ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x1802CF6F4
 * Callers:
 *     ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x1802CA400 (-ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x18013E9F4 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1802840BC (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ??1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ @ 0x1802C3B74 (--1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1802C6270 (-EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?FullScreenAppIgnored@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ @ 0x1802C64D8 (-FullScreenAppIgnored@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ.c)
 *     ?GetFrameRectForView@TabletModePositioner@@CAXPEAUIApplicationView@@PEAUtagRECT@@@Z @ 0x1802C6EC8 (-GetFrameRectForView@TabletModePositioner@@CAXPEAUIApplicationView@@PEAUtagRECT@@@Z.c)
 *     ?IsOldFullScreenView@TabletModePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1802C83F8 (-IsOldFullScreenView@TabletModePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsViewRectValid@TabletModePositioner@@AEAA_NAEBUtagRECT@@0@Z @ 0x1802C8510 (-IsViewRectValid@TabletModePositioner@@AEAA_NAEBUtagRECT@@0@Z.c)
 *     ?ResizeViewHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@H@Z @ 0x1802C993C (-ResizeViewHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ?Restored@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ @ 0x1802C9A08 (-Restored@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ.c)
 *     ?RestoredAppAddedToLayout@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ @ 0x1802C9B00 (-RestoredAppAddedToLayout@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x1802CE3BC (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?ViewForceEvicted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x1802CEE80 (-ViewForceEvicted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView.c)
 *     ?ViewForceMaximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x1802CF090 (-ViewForceMaximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationVi.c)
 *     ?ViewPositionAdjusted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x1802CF310 (-ViewPositionAdjusted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplication.c)
 */

void __fastcall TabletModePositioner::ViewRestored(
        __int64 a1,
        __int64 (__fastcall ***a2)(CWin32ApplicationView *this, struct _GUID *a2, void **a3),
        TabletModeTraceLogging::ShellTrackedWindowPosChanged *a3)
{
  bool v6; // bl
  struct IApplicationView *v7; // rdx
  HRESULT Service; // eax
  __int64 v9; // rdx
  __int64 v10; // rbx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rbx
  int v15; // eax
  void *ppvOut[2]; // [rsp+30h] [rbp-40h] BYREF
  struct _GUID v17; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v18; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  TabletModeTraceLogging::ShellTrackedWindowPosChanged::Restored(a3);
  v6 = 0;
  if ( TabletModePositioner::IsOldFullScreenView((TabletModePositioner *)a1, (struct IUnknown *)a2) )
  {
    ppvOut[0] = 0LL;
    *(_QWORD *)&v17.Data1 = 0LL;
    *(_QWORD *)v17.Data4 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)ppvOut);
    Service = IUnknown_QueryService(
                *(IUnknown **)(a1 + 16),
                &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                ppvOut);
    if ( Service >= 0 )
    {
      Service = (*(__int64 (__fastcall **)(void *, struct _GUID *))(*(_QWORD *)ppvOut[0] + 72LL))(ppvOut[0], &v17);
      if ( Service >= 0 )
      {
        *(_QWORD *)&v18.left = 0LL;
        *(_QWORD *)&v18.right = 0LL;
        TabletModePositioner::GetFrameRectForView(a2, &v18);
        v6 = Platform::Guid::Equals((Platform::Guid *)&v18, &v17);
        if ( v6 )
          TabletModeTraceLogging::ShellTrackedWindowPosChanged::FullScreenAppIgnored(a3);
LABEL_9:
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)ppvOut);
        if ( v6 )
          goto LABEL_28;
        goto LABEL_10;
      }
      v9 = 1826LL;
    }
    else
    {
      v9 = 1825LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      v9,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)Service);
    goto LABEL_9;
  }
LABEL_10:
  if ( TabletModePositionerHelpers::IsOperableView(a2, v7) )
  {
    *(_QWORD *)&v18.left = 0LL;
    v10 = *(_QWORD *)(a1 + 248);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18.left);
    if ( (*(int (__fastcall **)(__int64, __int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **), struct tagRECT *, _QWORD))(*(_QWORD *)v10 + 152LL))(
           v10,
           a2,
           &v18,
           0LL) < 0 )
    {
      ppvOut[0] = 0LL;
      v14 = *(_QWORD *)(a1 + 336);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)ppvOut);
      if ( (*(int (__fastcall **)(__int64, void **))(*(_QWORD *)v14 + 72LL))(v14, ppvOut) >= 0 )
      {
        if ( (unsigned int)SHIsSameObject((struct IUnknown *)ppvOut[0], (struct IUnknown *)a2) )
        {
          TabletModeTraceLogging::ShellTrackedWindowPosChanged::RestoredAppAddedToLayout(a3);
          v15 = TabletModePositioner::SwitchToAppHelper(a1, (struct IApplicationView *)a2, 1u, 0LL, 0LL);
          if ( v15 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              1900LL,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
              (const char *)(unsigned int)v15);
        }
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)ppvOut);
      goto LABEL_27;
    }
    *(_QWORD *)&v17.Data1 = 0LL;
    *(_QWORD *)v17.Data4 = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, struct _GUID *))(**(_QWORD **)&v18.left + 56LL))(
      *(_QWORD *)&v18.left,
      0LL,
      &v17);
    *(_OWORD *)ppvOut = 0LL;
    TabletModePositioner::GetFrameRectForView(a2, (struct tagRECT *)ppvOut);
    if ( !TabletModePositioner::IsViewRectValid(
            (TabletModePositioner *)a1,
            (const struct tagRECT *)ppvOut,
            (const struct tagRECT *)&v17) )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **)))(**(_QWORD **)(a1 + 320) + 24LL))(
              *(_QWORD *)(a1 + 320),
              a2)
          - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          TabletModeTraceLogging::ShellTrackedWindowPosChanged::ViewForceEvicted(
            a3,
            (struct IApplicationView *)a2,
            (const struct tagRECT *)&v17,
            (const struct tagRECT *)ppvOut);
          v12 = TabletModePositioner::EvictAppHelper((IUnknown *)a1, (__int64)a2, 8u);
          if ( v12 < 0 )
          {
            v13 = 1886LL;
            goto LABEL_21;
          }
        }
        else
        {
          TabletModeTraceLogging::ShellTrackedWindowPosChanged::ViewPositionAdjusted(
            a3,
            (struct IApplicationView *)a2,
            (const struct tagRECT *)&v17,
            (const struct tagRECT *)ppvOut);
          v12 = TabletModePositioner::ResizeViewHelper(
                  (IUnknown *)a1,
                  (struct IApplicationView *)a2,
                  LODWORD(ppvOut[1]) - LODWORD(ppvOut[0]));
          if ( v12 < 0 )
          {
            v13 = 1870LL;
LABEL_21:
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              v13,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
              (const char *)(unsigned int)v12);
          }
        }
      }
      else
      {
        TabletModeTraceLogging::ShellTrackedWindowPosChanged::ViewForceMaximized(
          a3,
          (struct IApplicationView *)a2,
          (const struct tagRECT *)&v17,
          (const struct tagRECT *)ppvOut);
        v12 = TabletModePositioner::SwitchToAppHelper(a1, (struct IApplicationView *)a2, 4u, 0LL, 0LL);
        if ( v12 < 0 )
        {
          v13 = 1879LL;
          goto LABEL_21;
        }
      }
    }
LABEL_27:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18.left);
  }
LABEL_28:
  TabletModeTraceLogging::ShellTrackedWindowPosChanged::~ShellTrackedWindowPosChanged((volatile signed __int32 **)a3);
}
