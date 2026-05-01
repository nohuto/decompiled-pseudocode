/*
 * XREFs of ?get_AreExperienceViewAndCursorOnTheSameMonitor@CVirtualTouchpadExperienceManager@@UEAAJPEAE@Z @ 0x1800B7A40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18018C300 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualTouchpadExperienceManager::get_AreExperienceViewAndCursorOnTheSameMonitor(
        CVirtualTouchpadExperienceManager *this,
        bool *a2)
{
  ExperienceManagerUtils *v3; // rcx
  HWND v5; // rax
  const char *v6; // r9
  HMODULE LibraryW; // rax
  const char *v8; // r9
  HMODULE v9; // rbx
  __int64 v10; // rdx
  FARPROC ProcAddress; // rax
  unsigned int LastError; // edi
  HMONITOR v13; // rdi
  HMONITOR v14; // rax
  POINT pt; // [rsp+20h] [rbp-68h]
  POINT v16; // [rsp+28h] [rbp-60h] BYREF
  __int64 v17; // [rsp+30h] [rbp-58h]
  HMODULE v18; // [rsp+38h] [rbp-50h]
  WINDOWPLACEMENT wndpl; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v17 = -2LL;
  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 10);
  if ( !v3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x204,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  v5 = ExperienceManagerUtils::WindowFromViewWrapper(
         v3,
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2);
  if ( !GetWindowPlacement(v5, &wndpl) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x208,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v6);
  pt = *(POINT *)&wndpl.rcNormalPosition.left;
  LibraryW = LoadLibraryW(L"user32.DLL");
  v9 = LibraryW;
  v18 = LibraryW;
  if ( !LibraryW )
  {
    v10 = 524LL;
LABEL_15:
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v10,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                  v8);
    goto LABEL_17;
  }
  ProcAddress = GetProcAddress(LibraryW, "GetPhysicalCursorPos");
  if ( ProcAddress )
  {
    if ( ((unsigned int (__fastcall *)(POINT *))ProcAddress)(&v16) )
    {
      v13 = MonitorFromPoint(pt, 2u);
      if ( v13 == (HMONITOR)-1LL )
      {
        v10 = 533LL;
      }
      else
      {
        v14 = MonitorFromPoint(v16, 2u);
        if ( v14 != (HMONITOR)-1LL )
        {
          *a2 = v14 == v13;
          LastError = 0;
          goto LABEL_17;
        }
        v10 = 536LL;
      }
    }
    else
    {
      v10 = 530LL;
    }
    goto LABEL_15;
  }
  LastError = -2147024769;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x20F,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)0x8007007FLL);
LABEL_17:
  if ( v9 )
    FreeLibrary(v9);
  return LastError;
}
