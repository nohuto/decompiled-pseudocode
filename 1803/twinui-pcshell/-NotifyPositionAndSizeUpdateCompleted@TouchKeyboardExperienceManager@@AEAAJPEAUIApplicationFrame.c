/*
 * XREFs of ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x18023EF08
 * Callers:
 *     _lambda_f0bf810a5d9c986258710a4a09c5f600_::operator() @ 0x1800A2034 (_lambda_f0bf810a5d9c986258710a4a09c5f600_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _anonymous_namespace_::GetFocusedWindow @ 0x18023E028 (_anonymous_namespace_--GetFocusedWindow.c)
 *     ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@W4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@@Z @ 0x18024A144 (-NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@W4CoreIn.c)
 *     ?OnFramePositionAndSizeUpdateCompleted@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@@Z @ 0x18024A7E8 (-OnFramePositionAndSizeUpdateCompleted@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::NotifyPositionAndSizeUpdateCompleted(
        KeyboardHosting::TabTipAdapter **this,
        struct IApplicationFrame *a2)
{
  int updated; // ebx
  __int64 v4; // rdx
  const char *v6; // r9
  HWND FocusedWindow; // rax
  HWND Ancestor; // rax
  unsigned int v9; // esi
  HWND hWnd; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT Rect; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  updated = (*(__int64 (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)a2 + 40LL))(a2, &hWnd);
  if ( updated < 0 )
  {
    v4 = 1429LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  *(_QWORD *)&Rect.left = 0LL;
  *(_QWORD *)&Rect.right = 0LL;
  if ( !GetWindowRect(hWnd, &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x597,
             (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
             v6);
  updated = KeyboardHosting::TabTipAdapter::OnFramePositionAndSizeUpdateCompleted(this[83], &Rect);
  if ( updated < 0 )
  {
    v4 = 1432LL;
    goto LABEL_3;
  }
  FocusedWindow = anonymous_namespace_::GetFocusedWindow();
  Ancestor = GetAncestor(FocusedWindow, 2u);
  v9 = *(_DWORD *)(*((_QWORD *)this[83] + 12) + 396LL);
  updated = (*(__int64 (__fastcall **)(KeyboardHosting::TabTipAdapter *, HWND, struct tagRECT *, _QWORD))(*(_QWORD *)this[41] + 24LL))(
              this[41],
              Ancestor,
              &Rect,
              v9);
  if ( updated < 0 )
  {
    v4 = 1438LL;
    goto LABEL_3;
  }
  if ( v9 == 2 )
  {
    updated = KeyboardHosting::TabTipAdapter::NotifyOcclusionToCoreInputViewManager(this[83], &Rect, 1LL);
    if ( updated < 0 )
    {
      v4 = 1442LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
