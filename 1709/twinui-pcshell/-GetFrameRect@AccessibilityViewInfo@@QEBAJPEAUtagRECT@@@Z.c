/*
 * XREFs of ?GetFrameRect@AccessibilityViewInfo@@QEBAJPEAUtagRECT@@@Z @ 0x1801B3884
 * Callers:
 *     ?OnPositionChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1801B0D10 (-OnPositionChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnChromeOffsetsChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1801B0E60 (-OnChromeOffsetsChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibilityViewInfo::GetFrameRect(AccessibilityViewInfo *this, struct tagRECT *a2)
{
  __int64 v4; // rcx
  unsigned int LastError; // ebx
  int v6; // eax
  __int64 v7; // rdx
  const char *v8; // r9
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-50h] BYREF
  HWND hWndFrom[3]; // [rsp+28h] [rbp-48h] BYREF
  struct tagPOINT Points[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v14; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  hWndFrom[1] = (HWND)-2LL;
  SetRectEmpty(a2);
  v4 = *((_QWORD *)this + 1);
  if ( !v4 )
  {
    LastError = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilitymanager.h",
      (const char *)0x8000FFFFLL);
    return LastError;
  }
  v11 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 32LL))(v4, &v11);
  LastError = v6;
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v11 + 24LL))(v11, hWndFrom);
    LastError = v6;
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 1) + 56LL))(*((_QWORD *)this + 1), &v14);
      LastError = v6;
      if ( v6 >= 0 )
      {
        *(_OWORD *)&Points[0].x = v14;
        if ( MapWindowPoints(hWndFrom[0], 0LL, Points, 2u) || !GetLastError() )
        {
          *a2 = *(struct tagRECT *)&Points[0].x;
          LastError = 0;
        }
        else
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x39,
                        (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilitymanager.h",
                        v8);
        }
        goto LABEL_14;
      }
      v7 = 51LL;
    }
    else
    {
      v7 = 48LL;
    }
  }
  else
  {
    v7 = 45LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilitymanager.h",
    (const char *)(unsigned int)v6);
LABEL_14:
  v9 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return LastError;
}
