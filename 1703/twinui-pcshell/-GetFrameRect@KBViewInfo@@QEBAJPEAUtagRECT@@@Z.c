/*
 * XREFs of ?GetFrameRect@KBViewInfo@@QEBAJPEAUtagRECT@@@Z @ 0x18016AB9C
 * Callers:
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18016C160 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18016C2D0 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KBViewInfo::GetFrameRect(KBViewInfo *this, struct tagRECT *a2)
{
  __int64 v4; // rcx
  unsigned int LastError; // ebx
  int v6; // eax
  __int64 v7; // rdx
  LONG WindowLongW; // eax
  const char *v9; // r9
  __int64 v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-50h] BYREF
  HWND hWnd[3]; // [rsp+28h] [rbp-48h] BYREF
  struct tagPOINT Points[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v15; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  hWnd[1] = (HWND)-2LL;
  SetRectEmpty(a2);
  v4 = *((_QWORD *)this + 1);
  if ( !v4 )
  {
    LastError = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x58,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)0x8000FFFFLL);
    return LastError;
  }
  v12 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 32LL))(v4, &v12);
  LastError = v6;
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v12 + 24LL))(v12, hWnd);
    LastError = v6;
    if ( v6 >= 0 )
    {
      WindowLongW = GetWindowLongW(hWnd[0], -20);
      SetWindowLongW(hWnd[0], -20, WindowLongW | 0x8000000);
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 1) + 56LL))(*((_QWORD *)this + 1), &v15);
      LastError = v6;
      if ( v6 >= 0 )
      {
        *(_OWORD *)&Points[0].x = v15;
        if ( MapWindowPoints(hWnd[0], 0LL, Points, 2u) || !GetLastError() )
        {
          *a2 = *(struct tagRECT *)&Points[0].x;
          LastError = 0;
        }
        else
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x6B,
                        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                        v9);
        }
        goto LABEL_14;
      }
      v7 = 102LL;
    }
    else
    {
      v7 = 94LL;
    }
  }
  else
  {
    v7 = 91LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_14:
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return LastError;
}
