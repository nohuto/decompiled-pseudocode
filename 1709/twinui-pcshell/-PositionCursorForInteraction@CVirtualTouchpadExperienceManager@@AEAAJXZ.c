/*
 * XREFs of ?PositionCursorForInteraction@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1800CB484
 * Callers:
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1800CB620 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800032F0 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualTouchpadExperienceManager::PositionCursorForInteraction(POINT *this)
{
  const char *v1; // r9
  __int64 v2; // rdx
  HMONITOR v4; // rbx
  HMODULE LibraryW; // rax
  const char *v6; // r9
  HMODULE v7; // rbx
  unsigned int LastError; // eax
  FARPROC ProcAddress; // r8
  unsigned int v10; // edi
  wil::details *v11; // rcx
  LPARAM dwData; // [rsp+20h] [rbp-50h] BYREF
  HMONITOR v13; // [rsp+28h] [rbp-48h]
  __int64 v14; // [rsp+30h] [rbp-40h]
  HMODULE v15; // [rsp+38h] [rbp-38h]
  struct tagMONITORINFO mi; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v14 = -2LL;
  dwData = 0LL;
  v13 = 0LL;
  dwData = (LPARAM)MonitorFromPoint(this[36], 2u);
  if ( dwData == -1 )
  {
    v2 = 362LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v2,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v1);
  }
  EnumDisplayMonitors(0LL, 0LL, lambda_5aa216c7af6f6fd7b6ce6477cfaab2f2_::_lambda_invoker_cdecl_, (LPARAM)&dwData);
  v4 = v13;
  if ( !v13 )
    v4 = (HMONITOR)dwData;
  v13 = v4;
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 0x24uLL);
  if ( !GetMonitorInfoW(v4, &mi) )
  {
    v2 = 386LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v2,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v1);
  }
  LibraryW = LoadLibraryW(L"user32.DLL");
  v7 = LibraryW;
  v15 = LibraryW;
  if ( !LibraryW )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x185,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                  v6);
LABEL_14:
    v10 = LastError;
    goto LABEL_16;
  }
  ProcAddress = GetProcAddress(LibraryW, "SetPhysicalCursorPos");
  if ( ProcAddress )
  {
    if ( ((unsigned int (__fastcall *)(_QWORD, _QWORD))ProcAddress)(
           (unsigned int)(mi.rcMonitor.left + (mi.rcMonitor.right - mi.rcMonitor.left) / 2),
           (unsigned int)(mi.rcMonitor.top + (mi.rcMonitor.bottom - mi.rcMonitor.top) / 2)) )
    {
      v10 = 0;
      goto LABEL_16;
    }
    LastError = wil::details::GetLastErrorFailHr(v11);
    goto LABEL_14;
  }
  v10 = -2147024769;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x188,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)0x8007007FLL);
LABEL_16:
  if ( v7 )
    FreeLibrary(v7);
  return v10;
}
