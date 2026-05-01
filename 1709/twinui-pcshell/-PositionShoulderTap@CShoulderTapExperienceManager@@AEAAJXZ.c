/*
 * XREFs of ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x1800B4D54
 * Callers:
 *     ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B4AB0 (-OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?Instance@ShoulderTapExperienceManagerTelemetry@@KAPEAV1@XZ @ 0x1800B3714 (-Instance@ShoulderTapExperienceManagerTelemetry@@KAPEAV1@XZ.c)
 *     ?PositionShoulderTapStart_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG@Z @ 0x1800B3978 (-PositionShoulderTapStart_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG@Z.c)
 *     ?PositionShoulderTapEnd_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBGHHHHHHHHHHHHH@Z @ 0x1800B3A28 (-PositionShoulderTapEnd_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBGHHHHHHHHHHHHH@Z.c)
 *     ?GetPeopleBarScreenEdge@CShoulderTapExperienceManager@@AEAAJPEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1800B4634 (-GetPeopleBarScreenEdge@CShoulderTapExperienceManager@@AEAAJPEAW4EDGEUI_TRAYSTUCKPLACE@@@Z.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1801D0E34 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1801D18D0 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DB6E4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1801DB760 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CShoulderTapExperienceManager::PositionShoulderTap(CShoulderTapExperienceManager *this)
{
  const unsigned __int16 *StringRawBuffer; // rbx
  _DWORD *v3; // rcx
  ShoulderTapExperienceManagerTelemetry *v4; // rcx
  __int64 v5; // rbx
  PCWSTR v6; // rax
  int v7; // eax
  unsigned int LastError; // ebx
  __int64 *v9; // rdi
  __int64 v10; // rbx
  __int64 *v11; // rax
  int v12; // eax
  HMONITOR v13; // r14
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  __int64 *v16; // rax
  int PeopleBarScreenEdge; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  UINT v20; // ebx
  LONG bottom; // eax
  LONG left; // eax
  HMONITOR v23; // r8
  const char *v24; // r9
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v25; // rdx
  HWND v26; // rax
  int v27; // ebx
  const unsigned __int16 *v28; // rdi
  _DWORD *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  POINT anchorPoint; // [rsp+88h] [rbp-29h] BYREF
  SIZE windowSize; // [rsp+90h] [rbp-21h] BYREF
  int v35; // [rsp+98h] [rbp-19h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-11h] BYREF
  _QWORD *v37; // [rsp+A8h] [rbp-9h] BYREF
  UINT32 length; // [rsp+B0h] [rbp-1h] BYREF
  __int64 v39; // [rsp+B8h] [rbp+7h]
  RECT rc; // [rsp+C0h] [rbp+Fh] BYREF
  RECT excludeRect; // [rsp+D0h] [rbp+1Fh] BYREF
  RECT popupWindowPosition; // [rsp+E0h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v39 = -2LL;
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 33), 0LL);
  v3 = (_DWORD *)*((_QWORD *)ShoulderTapExperienceManagerTelemetry::Instance() + 1);
  if ( v3 && *v3 )
  {
    ShoulderTapExperienceManagerTelemetry::Instance();
    ShoulderTapExperienceManagerTelemetry::PositionShoulderTapStart_(v4, StringRawBuffer);
  }
  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = 0LL;
  length = 0;
  v5 = *((_QWORD *)this + 31);
  v6 = WindowsGetStringRawBuffer(*((HSTRING *)this + 32), &length);
  v7 = (*(__int64 (__fastcall **)(__int64, PCWSTR, RECT *))(*(_QWORD *)v5 + 112LL))(v5, v6, &rc);
  LastError = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x112,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    return LastError;
  }
  v37 = 0LL;
  v9 = (__int64 *)*((_QWORD *)this + 30);
  v10 = *v9;
  v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v37);
  v12 = (*(__int64 (__fastcall **)(__int64 *, SID *, GUID *, __int64 *))(v10 + 24))(
          v9,
          &SID_IImmersiveMonitorService,
          &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
          v11);
  LastError = v12;
  if ( v12 >= 0 )
  {
    v13 = MonitorFromRect(&rc, 1u);
    v36 = 0LL;
    v14 = v37;
    v15 = *v37;
    v16 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v36);
    PeopleBarScreenEdge = (*(__int64 (__fastcall **)(_QWORD *, HMONITOR, SID *, GUID *, __int64 *))(v15 + 72))(
                            v14,
                            v13,
                            &SID_EdgeUi,
                            &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
                            v16);
    LastError = PeopleBarScreenEdge;
    if ( PeopleBarScreenEdge < 0 )
    {
      v18 = 283LL;
LABEL_29:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
        (const char *)(unsigned int)PeopleBarScreenEdge);
      goto LABEL_35;
    }
    v35 = -1;
    PeopleBarScreenEdge = CShoulderTapExperienceManager::GetPeopleBarScreenEdge(
                            this,
                            (enum EDGEUI_TRAYSTUCKPLACE *)&v35);
    LastError = PeopleBarScreenEdge;
    if ( PeopleBarScreenEdge < 0 )
    {
      v18 = 286LL;
      goto LABEL_29;
    }
    *(_QWORD *)&excludeRect.left = 0LL;
    *(_QWORD *)&excludeRect.right = 0LL;
    PeopleBarScreenEdge = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v36 + 168LL))(v36, &excludeRect);
    LastError = PeopleBarScreenEdge;
    if ( PeopleBarScreenEdge < 0 )
    {
      v18 = 289LL;
      goto LABEL_29;
    }
    v19 = 184LL;
    windowSize.cx = 184;
    windowSize.cy = 184;
    if ( v35 == -1 )
      goto LABEL_34;
    if ( v35 )
    {
      if ( v35 == 1 )
      {
        v20 = 65540;
        goto LABEL_20;
      }
      if ( v35 != 2 )
      {
        if ( v35 == 3 )
        {
          v20 = 65572;
LABEL_20:
          anchorPoint.x = (rc.left + rc.right) / 2;
          bottom = excludeRect.bottom;
          windowSize.cy = 202;
LABEL_25:
          anchorPoint.y = bottom;
          windowSize.cx = ExperienceManagerUtils::ScaleByPerMonitorDPI(
                            (ExperienceManagerUtils *)(unsigned int)v19,
                            (int)v13,
                            (HMONITOR)v19);
          windowSize.cy = ExperienceManagerUtils::ScaleByPerMonitorDPI(
                            (ExperienceManagerUtils *)(unsigned int)windowSize.cy,
                            (int)v13,
                            v23);
          if ( !CalculatePopupWindowPosition(&anchorPoint, &windowSize, v20, &excludeRect, &popupWindowPosition) )
          {
            LastError = wil::details::in1diag3::Return_GetLastError(
                          retaddr,
                          (void *)0x152,
                          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
                          v24);
            goto LABEL_35;
          }
          PeopleBarScreenEdge = CSingleViewShellExperience::SetPosition(
                                  (CShoulderTapExperienceManager *)((char *)this + 40),
                                  &popupWindowPosition);
          LastError = PeopleBarScreenEdge;
          if ( PeopleBarScreenEdge >= 0 )
          {
            v26 = ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 8), v25);
            SetWindowPos(v26, 0LL, 0, 0, 0, 0, 0x13u);
            CSingleViewShellExperience::Show((char *)this + 40, 1LL);
            v27 = v35;
            v28 = WindowsGetStringRawBuffer(*((HSTRING *)this + 33), 0LL);
            v29 = (_DWORD *)*((_QWORD *)ShoulderTapExperienceManagerTelemetry::Instance() + 1);
            if ( v29 && *v29 )
            {
              ShoulderTapExperienceManagerTelemetry::Instance();
              ShoulderTapExperienceManagerTelemetry::PositionShoulderTapEnd_(
                (ShoulderTapExperienceManagerTelemetry *)(unsigned int)popupWindowPosition.right,
                v28,
                v27,
                anchorPoint.x,
                anchorPoint.y,
                windowSize.cx,
                windowSize.cy,
                rc.left,
                rc.right,
                excludeRect.top,
                excludeRect.bottom,
                popupWindowPosition.left,
                popupWindowPosition.top,
                popupWindowPosition.right,
                popupWindowPosition.bottom);
            }
            LastError = 0;
            goto LABEL_35;
          }
          v18 = 339LL;
          goto LABEL_29;
        }
LABEL_34:
        LastError = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x149,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
          (const char *)0x80070057LL);
LABEL_35:
        v30 = v36;
        if ( v36 )
        {
          v36 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
        }
        goto LABEL_37;
      }
      left = excludeRect.left;
      v20 = 65560;
    }
    else
    {
      left = excludeRect.right;
      v20 = 65552;
    }
    anchorPoint.x = left;
    v19 = 202LL;
    windowSize.cx = 202;
    bottom = (rc.bottom + rc.top) / 2;
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x116,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
    (const char *)(unsigned int)v12);
LABEL_37:
  v31 = (__int64)v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  return LastError;
}
