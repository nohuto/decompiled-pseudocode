/*
 * XREFs of ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x18019BA5C
 * Callers:
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z @ 0x18019B4E0 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _anonymous_namespace_::GetFocusedWindow @ 0x180198938 (_anonymous_namespace_--GetFocusedWindow.c)
 *     ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@W4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@@Z @ 0x1801A47DC (-NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@W4CoreIn.c)
 *     ?HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x1801AAB40 (-HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Found.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::NotifyPositionAndSizeUpdateCompleted(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrame *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  const char *v6; // r9
  __int64 v7; // rsi
  int updated; // eax
  __int64 v9; // rdx
  HWND FocusedWindow; // rax
  HWND Ancestor; // rax
  unsigned int v12; // esi
  int v13; // [rsp+38h] [rbp-48h]
  HWND hWnd[2]; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT Rect; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  hWnd[1] = (HWND)-2LL;
  v3 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)a2 + 40LL))(a2, hWnd);
  if ( v3 < 0 )
  {
    v4 = 915LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  *(_QWORD *)&Rect.left = 0LL;
  *(_QWORD *)&Rect.right = 0LL;
  if ( !GetWindowRect(hWnd[0], &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x395,
             (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
             v6);
  v7 = *((_QWORD *)this + 79);
  updated = KeyboardHosting::TabTipAdapterPolicy::HandleFramePositionAndSizeUpdateCompleted(*(KeyboardHosting::TabTipAdapterPolicy **)(v7 + 96));
  v3 = updated;
  if ( updated >= 0 )
  {
    if ( v13 != 3
      || (updated = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v7 + 24) + 360LL))(
                      *(_QWORD *)(v7 + 24),
                      0LL),
          v3 = updated,
          updated >= 0) )
    {
      v3 = 0;
      goto LABEL_13;
    }
    v9 = 1037LL;
  }
  else
  {
    v9 = 1033LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)updated);
LABEL_13:
  if ( v3 < 0 )
  {
    v4 = 918LL;
    goto LABEL_3;
  }
  FocusedWindow = anonymous_namespace_::GetFocusedWindow();
  Ancestor = GetAncestor(FocusedWindow, 2u);
  v12 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 79) + 96LL) + 364LL);
  v3 = (*(__int64 (__fastcall **)(_QWORD, HWND, struct tagRECT *, _QWORD))(**((_QWORD **)this + 37) + 24LL))(
         *((_QWORD *)this + 37),
         Ancestor,
         &Rect,
         v12);
  if ( v3 < 0 )
  {
    v4 = 924LL;
    goto LABEL_3;
  }
  if ( v12 == 2 )
  {
    v3 = KeyboardHosting::TabTipAdapter::NotifyOcclusionToCoreInputViewManager(*((_QWORD *)this + 79), &Rect, 1LL);
    if ( v3 < 0 )
    {
      v4 = 928LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
