/*
 * XREFs of ?UpdateFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1801837F0
 * Callers:
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x180182E20 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualTouchpadExperienceManager::UpdateFramePosition(CVirtualTouchpadExperienceManager *this)
{
  HMODULE LibraryW; // rax
  const char *v3; // r9
  HMODULE v4; // rbx
  __int64 v5; // rdx
  FARPROC ProcAddress; // rax
  unsigned int LastError; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  int v12[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  LibraryW = LoadLibraryW(L"user32.DLL");
  v4 = LibraryW;
  if ( !LibraryW )
  {
    v5 = 314LL;
LABEL_7:
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v5,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                  v3);
    goto LABEL_12;
  }
  ProcAddress = GetProcAddress(LibraryW, "CalculatePopupWindowPosition");
  if ( !ProcAddress )
  {
    LastError = -2147024769;
    v8 = 2147942527LL;
    v9 = 317LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)v8);
    goto LABEL_12;
  }
  *(_QWORD *)v12 = 0LL;
  v13 = 0LL;
  if ( !((unsigned int (__fastcall *)(char *, char *, __int64, char *, int *))ProcAddress)(
          (char *)this + 288,
          (char *)this + 276,
          65620LL,
          (char *)this + 312,
          v12) )
  {
    v5 = 325LL;
    goto LABEL_7;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 43) + 64LL))(*((_QWORD *)this + 43), v12);
  LastError = v10;
  if ( v10 < 0 )
  {
    v8 = (unsigned int)v10;
    v9 = 326LL;
    goto LABEL_10;
  }
  LastError = 0;
LABEL_12:
  if ( v4 )
    FreeLibrary(v4);
  return LastError;
}
