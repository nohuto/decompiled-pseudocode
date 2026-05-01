/*
 * XREFs of ?SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1801828B4
 * Callers:
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18018177C (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?OnViewDestroyed@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180182020 (-OnViewDestroyed@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z @ 0x180149878 (-_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z.c)
 *     ??$ControllerMoved@AEAJAEAJAEBU_GUID@@@TouchpadControllerExperienceManagerTelemetry@@SAXAEAJ0AEBU_GUID@@@Z @ 0x18017FD04 (--$ControllerMoved@AEAJAEAJAEBU_GUID@@@TouchpadControllerExperienceManagerTelemetry@@SAXAEAJ0AEB.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualTouchpadExperienceManager::SaveFramePosition(CVirtualTouchpadExperienceManager *this)
{
  int v2; // eax
  unsigned int LastError; // ebx
  __int64 v4; // rbx
  int v5; // eax
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  const char *v9; // r9
  int v10; // eax
  __int64 v12; // [rsp+30h] [rbp-50h] BYREF
  HWND hWndFrom[3]; // [rsp+38h] [rbp-48h] BYREF
  struct tagPOINT Points[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v15; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  hWndFrom[1] = (HWND)-2LL;
  v15 = 0uLL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 43) + 56LL))(*((_QWORD *)this + 43), &v15);
  LastError = v2;
  if ( v2 >= 0 )
  {
    v12 = 0LL;
    v4 = *((_QWORD *)this + 43);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 32LL))(v4, &v12);
    LastError = v5;
    if ( v5 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v12 + 24LL))(v12, hWndFrom);
      LastError = v8;
      if ( v8 >= 0 )
      {
        *(_OWORD *)&Points[0].x = v15;
        if ( !MapWindowPoints(hWndFrom[0], 0LL, Points, 2u) && GetLastError() )
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x158,
                        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                        v9);
LABEL_16:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
          return LastError;
        }
        v10 = _RegSetKeyValue(
                HKEY_CURRENT_USER,
                L"SOFTWARE\\Microsoft\\Touchpad\\",
                L"Location",
                3u,
                (BYTE *)Points,
                0x10u);
        LastError = v10;
        if ( v10 > 0 )
          LastError = (unsigned __int16)v10 | 0x80070000;
        if ( (LastError & 0x80000000) == 0 )
        {
          TouchpadControllerExperienceManagerTelemetry::ControllerMoved<long &,long &,_GUID const &>(
            (__int64)Points,
            (__int64)&Points[1],
            (__int128 *)(*((_QWORD *)this + 51) + 8LL));
          LastError = 0;
          goto LABEL_16;
        }
        v6 = LastError;
        v7 = 346LL;
      }
      else
      {
        v6 = (unsigned int)v8;
        v7 = 339LL;
      }
    }
    else
    {
      v6 = (unsigned int)v5;
      v7 = 336LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)v6);
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14D,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)v2);
  return LastError;
}
