/*
 * XREFs of ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x1801712A8
 * Callers:
 *     ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180170F80 (-OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18006BC78 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x18006C054 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800787A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18007DE3C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$PositionShoulderTapEnd@PEBGHAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJ@ShoulderTapExperienceManagerTelemetry@@SAX$$QEAPEBG$$QEAHAEAJ22222222222@Z @ 0x1801705B0 (--$PositionShoulderTapEnd@PEBGHAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJ@ShoulderTapExper.c)
 *     ??$PositionShoulderTapStart@PEBG@ShoulderTapExperienceManagerTelemetry@@SAX$$QEAPEBG@Z @ 0x180170724 (--$PositionShoulderTapStart@PEBG@ShoulderTapExperienceManagerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ?GetPeopleBarScreenEdge@CShoulderTapExperienceManager@@AEAAJPEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x180170D04 (-GetPeopleBarScreenEdge@CShoulderTapExperienceManager@@AEAAJPEAW4EDGEUI_TRAYSTUCKPLACE@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CShoulderTapExperienceManager::PositionShoulderTap(CShoulderTapExperienceManager *this)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rbx
  PCWSTR v4; // rax
  int v5; // eax
  unsigned int LastError; // ebx
  __int64 v7; // rbx
  int v8; // eax
  HMONITOR v9; // rsi
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  int PeopleBarScreenEdge; // eax
  int v15; // eax
  unsigned int v16; // r9d
  LONG bottom; // eax
  UINT v18; // ebx
  LONG left; // eax
  HMONITOR v20; // r8
  const char *v21; // r9
  int v22; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v23; // rdx
  HWND v24; // rax
  POINT anchorPoint; // [rsp+78h] [rbp-29h] BYREF
  SIZE windowSize; // [rsp+80h] [rbp-21h] BYREF
  int v28; // [rsp+88h] [rbp-19h] BYREF
  int v29[2]; // [rsp+90h] [rbp-11h] BYREF
  __int64 v30; // [rsp+98h] [rbp-9h] BYREF
  UINT32 length; // [rsp+A0h] [rbp-1h] BYREF
  PCWSTR StringRawBuffer; // [rsp+A8h] [rbp+7h] BYREF
  const unsigned __int16 *v33[2]; // [rsp+B0h] [rbp+Fh] BYREF
  RECT rc; // [rsp+C0h] [rbp+1Fh] BYREF
  RECT excludeRect; // [rsp+D0h] [rbp+2Fh] BYREF
  RECT popupWindowPosition; // [rsp+E0h] [rbp+3Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v33[1] = (const unsigned __int16 *)-2LL;
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 33), 0LL);
  ShoulderTapExperienceManagerTelemetry::PositionShoulderTapStart<unsigned short const *>(&StringRawBuffer, v2);
  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = 0LL;
  length = 0;
  v3 = *((_QWORD *)this + 31);
  v4 = WindowsGetStringRawBuffer(*((HSTRING *)this + 32), &length);
  v5 = (*(__int64 (__fastcall **)(__int64, PCWSTR, RECT *))(*(_QWORD *)v3 + 112LL))(v3, v4, &rc);
  LastError = v5;
  if ( v5 >= 0 )
  {
    v30 = 0LL;
    v7 = *((_QWORD *)this + 30);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
    v8 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v7 + 24LL))(
           v7,
           &SID_IImmersiveMonitorService,
           &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
           &v30);
    LastError = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x116,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
LABEL_30:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
      return LastError;
    }
    v9 = MonitorFromRect(&rc, 1u);
    *(_QWORD *)v29 = 0LL;
    v10 = v30;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v29);
    v11 = (*(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, int *))(*(_QWORD *)v10 + 72LL))(
            v10,
            v9,
            &SID_EdgeUi,
            &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
            v29);
    LastError = v11;
    if ( v11 < 0 )
    {
      v12 = (unsigned int)v11;
      v13 = 283LL;
LABEL_28:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
        (const char *)v12);
      goto LABEL_29;
    }
    v28 = -1;
    PeopleBarScreenEdge = CShoulderTapExperienceManager::GetPeopleBarScreenEdge(
                            this,
                            (enum EDGEUI_TRAYSTUCKPLACE *)&v28);
    LastError = PeopleBarScreenEdge;
    if ( PeopleBarScreenEdge < 0 )
    {
      v12 = (unsigned int)PeopleBarScreenEdge;
      v13 = 286LL;
      goto LABEL_28;
    }
    *(_QWORD *)&excludeRect.left = 0LL;
    *(_QWORD *)&excludeRect.right = 0LL;
    v15 = (*(__int64 (__fastcall **)(_QWORD, RECT *))(**(_QWORD **)v29 + 168LL))(*(_QWORD *)v29, &excludeRect);
    LastError = v15;
    if ( v15 < 0 )
    {
      v12 = (unsigned int)v15;
      v13 = 289LL;
      goto LABEL_28;
    }
    v16 = 184;
    windowSize.cx = 184;
    windowSize.cy = 184;
    if ( v28 == -1 )
      goto LABEL_27;
    if ( v28 )
    {
      if ( v28 == 1 )
      {
        anchorPoint.x = (rc.left + rc.right) / 2;
        bottom = rc.bottom;
        v18 = 65540;
        goto LABEL_17;
      }
      if ( v28 != 2 )
      {
        if ( v28 == 3 )
        {
          anchorPoint.x = (rc.left + rc.right) / 2;
          bottom = rc.top;
          v18 = 65572;
LABEL_17:
          windowSize.cy = 202;
          goto LABEL_22;
        }
LABEL_27:
        LastError = -2147024809;
        v12 = 2147942487LL;
        v13 = 329LL;
        goto LABEL_28;
      }
      left = excludeRect.left;
      v18 = 65560;
    }
    else
    {
      left = excludeRect.right;
      v18 = 65552;
    }
    anchorPoint.x = left;
    v16 = 202;
    windowSize.cx = 202;
    bottom = (rc.bottom + rc.top) / 2;
LABEL_22:
    anchorPoint.y = bottom;
    windowSize.cx = ExperienceManagerUtils::ScaleByPerMonitorDPI(
                      (ExperienceManagerUtils *)v16,
                      (__int64)v9,
                      (HMONITOR)2);
    windowSize.cy = ExperienceManagerUtils::ScaleByPerMonitorDPI(
                      (ExperienceManagerUtils *)(unsigned int)windowSize.cy,
                      (__int64)v9,
                      v20);
    if ( CalculatePopupWindowPosition(&anchorPoint, &windowSize, v18, &excludeRect, &popupWindowPosition) )
    {
      v22 = CSingleViewShellExperience::SetPosition(
              (CShoulderTapExperienceManager *)((char *)this + 40),
              &popupWindowPosition);
      LastError = v22;
      if ( v22 < 0 )
      {
        v12 = (unsigned int)v22;
        v13 = 339LL;
        goto LABEL_28;
      }
      v24 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 8), v23);
      SetWindowPos(v24, 0LL, 0, 0, 0, 0, 0x13u);
      CSingleViewShellExperience::Show(
        (__int64)this + 40,
        (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)1);
      LODWORD(StringRawBuffer) = v28;
      v33[0] = WindowsGetStringRawBuffer(*((HSTRING *)this + 33), 0LL);
      ShoulderTapExperienceManagerTelemetry::PositionShoulderTapEnd<unsigned short const *,int,long &,long &,long &,long &,long &,long &,long &,long &,long &,long &,long &,long &>(
        v33,
        (int *)&StringRawBuffer,
        (int *)&anchorPoint,
        &anchorPoint.y,
        (int *)&windowSize,
        &windowSize.cy,
        &rc.left,
        &rc.right,
        &excludeRect.top,
        &excludeRect.bottom,
        &popupWindowPosition.left,
        &popupWindowPosition.top,
        &popupWindowPosition.right,
        &popupWindowPosition.bottom);
      LastError = 0;
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x152,
                    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
                    v21);
    }
LABEL_29:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v29);
    goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x112,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
  return LastError;
}
