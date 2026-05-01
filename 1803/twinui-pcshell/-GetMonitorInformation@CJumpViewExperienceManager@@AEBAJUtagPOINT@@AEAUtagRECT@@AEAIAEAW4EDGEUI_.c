/*
 * XREFs of ?GetMonitorInformation@CJumpViewExperienceManager@@AEBAJUtagPOINT@@AEAUtagRECT@@AEAIAEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x180176E50
 * Callers:
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180176800 (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CJumpViewExperienceManager::GetMonitorInformation(
        CJumpViewExperienceManager *this,
        POINT a2,
        struct tagRECT *a3,
        unsigned int *a4,
        enum EDGEUI_TRAYSTUCKPLACE *a5)
{
  HMONITOR v8; // rdi
  const char *v9; // r9
  __int64 v10; // rdx
  int DpiForMonitor; // eax
  unsigned int v13; // ebx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  int v17[2]; // [rsp+30h] [rbp-31h] BYREF
  _BYTE v18[8]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v19; // [rsp+40h] [rbp-21h]
  struct tagMONITORINFO mi; // [rsp+48h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+57h]

  v19 = -2LL;
  v8 = MonitorFromPoint(a2, 2u);
  if ( v8 == (HMONITOR)-1LL )
  {
    v10 = 699LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v10,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
             v9);
  }
  mi.cbSize = 40;
  memset_0(&mi.rcMonitor, 0, 0x24uLL);
  if ( !GetMonitorInfoW(v8, &mi) )
  {
    v10 = 702LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v10,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
             v9);
  }
  *a3 = mi.rcWork;
  DpiForMonitor = GetDpiForMonitor(v8, 0LL, a4, v18);
  v13 = DpiForMonitor;
  if ( DpiForMonitor >= 0 )
  {
    *(_QWORD *)v17 = 0LL;
    v14 = *((_QWORD *)this + 44);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
    v15 = (*(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, int *))(*(_QWORD *)v14 + 72LL))(
            v14,
            v8,
            &SID_EdgeUi,
            &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
            v17);
    v13 = v15;
    if ( v15 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, enum EDGEUI_TRAYSTUCKPLACE *))(**(_QWORD **)v17 + 80LL))(
              *(_QWORD *)v17,
              a5);
      v13 = v15;
      if ( v15 >= 0 )
      {
        v13 = 0;
        goto LABEL_14;
      }
      v16 = 710LL;
    }
    else
    {
      v16 = 709LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v15);
LABEL_14:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
    return v13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2C2,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)DpiForMonitor);
  return v13;
}
