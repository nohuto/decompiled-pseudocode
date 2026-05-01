/*
 * XREFs of ?GetMonitorInformation@CJumpViewExperienceManager@@AEBAJUtagPOINT@@AEAUtagRECT@@AEAIAEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1800BEAE4
 * Callers:
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800BE618 (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CJumpViewExperienceManager::GetMonitorInformation(
        CJumpViewExperienceManager *this,
        POINT a2,
        struct tagRECT *a3,
        unsigned int *a4,
        enum EDGEUI_TRAYSTUCKPLACE *a5)
{
  HMONITOR v8; // rsi
  const char *v9; // r9
  __int64 v10; // rdx
  int DpiForMonitor; // eax
  int v13; // ebx
  __int64 *v14; // rdi
  __int64 v15; // rbx
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // [rsp+30h] [rbp-31h] BYREF
  _BYTE v21[8]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v22; // [rsp+40h] [rbp-21h]
  struct tagMONITORINFO mi; // [rsp+48h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+57h]

  v22 = -2LL;
  v8 = MonitorFromPoint(a2, 2u);
  if ( v8 == (HMONITOR)-1LL )
  {
    v10 = 706LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v10,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
             v9);
  }
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 0x24uLL);
  if ( !GetMonitorInfoW(v8, &mi) )
  {
    v10 = 709LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v10,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
             v9);
  }
  *a3 = mi.rcWork;
  DpiForMonitor = GetDpiForMonitor(v8, 0LL, a4, v21);
  v13 = DpiForMonitor;
  if ( DpiForMonitor < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2C9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)DpiForMonitor);
    return (unsigned int)v13;
  }
  v20 = 0LL;
  v14 = (__int64 *)*((_QWORD *)this + 44);
  v15 = *v14;
  v16 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v20);
  v13 = (*(__int64 (__fastcall **)(__int64 *, HMONITOR, SID *, GUID *, __int64 *))(v15 + 72))(
          v14,
          v8,
          &SID_EdgeUi,
          &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
          v16);
  if ( v13 < 0 )
  {
    v17 = 716LL;
    goto LABEL_11;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, enum EDGEUI_TRAYSTUCKPLACE *))(*(_QWORD *)v20 + 80LL))(v20, a5);
  if ( v13 < 0 )
  {
    v17 = 717LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
    v18 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    return (unsigned int)v13;
  }
  v19 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return 0LL;
}
