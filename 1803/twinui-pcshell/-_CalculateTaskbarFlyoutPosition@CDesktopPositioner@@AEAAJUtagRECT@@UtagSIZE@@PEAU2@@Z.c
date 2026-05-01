/*
 * XREFs of ?_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z @ 0x1802C0744
 * Callers:
 *     ?_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1802C1490 (-_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicat.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180022050 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x1800236D8 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x1802C0FAC (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ?_GetEdgeUIPositionForMonitor@CDesktopPositioner@@AEAAJQEAUHMONITOR__@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1802C12E0 (-_GetEdgeUIPositionForMonitor@CDesktopPositioner@@AEAAJQEAUHMONITOR__@@PEAUtagRECT@@PEAW4EDGEUI_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopPositioner::_CalculateTaskbarFlyoutPosition(
        CDesktopPositioner *this,
        LPCRECT lprc,
        struct tagSIZE a3,
        struct tagRECT *a4)
{
  HMONITOR v7; // r12
  int EdgeUIPositionForMonitor; // eax
  unsigned int LastError; // edi
  __int64 v10; // rdi
  int v11; // eax
  IUnknown *v12; // rcx
  int WorkAreaFromRect; // eax
  __int64 v14; // rdx
  const char *v15; // r9
  struct IApplicationViewTitlebarConfiguration *v17; // [rsp+40h] [rbp-59h] BYREF
  __int64 v18; // [rsp+48h] [rbp-51h] BYREF
  POINT anchorPoint; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v20[8]; // [rsp+58h] [rbp-41h] BYREF
  SIZE windowSize; // [rsp+60h] [rbp-39h] BYREF
  __int64 v22; // [rsp+68h] [rbp-31h]
  RECT popupWindowPosition; // [rsp+70h] [rbp-29h] BYREF
  RECT excludeRect; // [rsp+80h] [rbp-19h] BYREF
  struct tagRECT v25; // [rsp+90h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v22 = -2LL;
  *(_QWORD *)&excludeRect.left = 0LL;
  *(_QWORD *)&excludeRect.right = 0LL;
  v7 = MonitorFromRect(lprc, 1u);
  EdgeUIPositionForMonitor = CDesktopPositioner::_GetEdgeUIPositionForMonitor(
                               this,
                               v7,
                               &excludeRect,
                               (enum EDGEUI_TRAYSTUCKPLACE *)v20);
  LastError = EdgeUIPositionForMonitor;
  if ( EdgeUIPositionForMonitor >= 0 )
  {
    anchorPoint.x = (lprc->left + lprc->right) / 2;
    anchorPoint.y = (lprc->top + lprc->bottom) / 2;
    v18 = 0LL;
    v10 = *((_QWORD *)this + 22);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v18);
    v11 = (*(__int64 (__fastcall **)(__int64, HMONITOR, __int64 *))(*(_QWORD *)v10 + 48LL))(v10, v7, &v18);
    LastError = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x537,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v11);
LABEL_17:
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v18);
      return LastError;
    }
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    WorkAreaFromRect = CDesktopPositioner::_CreateTitlebarConfiguration(v12, 0LL, &v17);
    LastError = WorkAreaFromRect;
    if ( WorkAreaFromRect < 0 )
    {
      v14 = 1339LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)WorkAreaFromRect);
      goto LABEL_16;
    }
    (*(void (__fastcall **)(_QWORD, struct tagSIZE, __int64, __int64, int, struct IApplicationViewTitlebarConfiguration *, SIZE *))(**((_QWORD **)this + 25) + 48LL))(
      *((_QWORD *)this + 25),
      a3,
      v18,
      1LL,
      1,
      v17,
      &windowSize);
    if ( !CalculatePopupWindowPosition(&anchorPoint, &windowSize, 0x10054u, &excludeRect, &popupWindowPosition) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x544,
                    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                    v15);
LABEL_16:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      goto LABEL_17;
    }
    if ( (unsigned int)CDesktopPositioner::_FixRectForWorkArea(this, 1LL, &popupWindowPosition, 0LL) == -2147024809 )
    {
      WorkAreaFromRect = CDesktopPositioner::_GetWorkAreaFromRect(this, &popupWindowPosition, &v25);
      LastError = WorkAreaFromRect;
      if ( WorkAreaFromRect < 0 )
      {
        v14 = 1357LL;
        goto LABEL_14;
      }
      popupWindowPosition.top = v25.top;
      popupWindowPosition.bottom = v25.bottom;
      WorkAreaFromRect = CDesktopPositioner::_FixRectForWorkArea(this, 1LL, &popupWindowPosition, 0LL);
      LastError = WorkAreaFromRect;
      if ( WorkAreaFromRect < 0 )
      {
        v14 = 1362LL;
        goto LABEL_14;
      }
    }
    LastError = 0;
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x530,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)EdgeUIPositionForMonitor);
  return LastError;
}
