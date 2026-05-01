/*
 * XREFs of ?SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1800B6FDC
 * Callers:
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1800B77A0 (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?OnViewDestroyed@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B8490 (-OnViewDestroyed@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z @ 0x18008A788 (-_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z.c)
 *     ??$ControllerMoved@AEAJAEAJAEBU_GUID@@@TouchpadControllerExperienceManagerTelemetry@@SAXAEAJ0AEBU_GUID@@@Z @ 0x1800B94A8 (--$ControllerMoved@AEAJAEAJAEBU_GUID@@@TouchpadControllerExperienceManagerTelemetry@@SAXAEAJ0AEB.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualTouchpadExperienceManager::SaveFramePosition(CVirtualTouchpadExperienceManager *this)
{
  int v2; // eax
  unsigned int LastError; // ebx
  int v4; // eax
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  const char *v8; // r9
  int v9; // eax
  __int64 v10; // rcx
  __int64 v12; // [rsp+30h] [rbp-50h] BYREF
  HWND hWndFrom[3]; // [rsp+38h] [rbp-48h] BYREF
  struct tagPOINT Points[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v15; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  hWndFrom[1] = (HWND)-2LL;
  v15 = 0uLL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 43) + 56LL))(*((_QWORD *)this + 43), &v15);
  LastError = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x14C,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    return LastError;
  }
  v12 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 43) + 32LL))(*((_QWORD *)this + 43), &v12);
  LastError = v4;
  if ( v4 < 0 )
  {
    v5 = (unsigned int)v4;
    v6 = 335LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)v5);
    goto LABEL_16;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v12 + 24LL))(v12, hWndFrom);
  LastError = v7;
  if ( v7 < 0 )
  {
    v5 = (unsigned int)v7;
    v6 = 338LL;
    goto LABEL_14;
  }
  *(_OWORD *)&Points[0].x = v15;
  if ( !MapWindowPoints(hWndFrom[0], 0LL, Points, 2u) && GetLastError() )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x157,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                  v8);
    goto LABEL_16;
  }
  v9 = _RegSetKeyValue(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\Touchpad\\", L"Location", 3u, (BYTE *)Points, 0x10u);
  LastError = (unsigned __int16)v9 | 0x80070000;
  if ( v9 <= 0 )
    LastError = v9;
  if ( (LastError & 0x80000000) != 0 )
  {
    v5 = LastError;
    v6 = 345LL;
    goto LABEL_14;
  }
  TouchpadControllerExperienceManagerTelemetry::ControllerMoved<long &,long &,_GUID const &>(
    Points,
    &Points[1],
    *((_QWORD *)this + 51) + 8LL);
  LastError = 0;
LABEL_16:
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return LastError;
}
