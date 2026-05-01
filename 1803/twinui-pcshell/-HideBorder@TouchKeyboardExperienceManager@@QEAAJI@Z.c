/*
 * XREFs of ?HideBorder@TouchKeyboardExperienceManager@@QEAAJI@Z @ 0x18023E450
 * Callers:
 *     ?OnShellRequestedHide@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x18024B9F0 (-OnShellRequestedHide@TabTipAdapter@KeyboardHosting@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z @ 0x18023E088 (-GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z.c)
 *     ?UpdateWindowAccent@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x180244D0C (-UpdateWindowAccent@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@W4ACCENT_STATE@@KPEBUtagREC.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::HideBorder(RTL_SRWLOCK *this)
{
  __int64 v1; // rcx
  int FrameWindowByViewId; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HWND v6; // [rsp+50h] [rbp+18h] BYREF

  FrameWindowByViewId = TouchKeyboardExperienceManager::GetFrameWindowByViewId(this, 0, &v6);
  if ( FrameWindowByViewId < 0 )
  {
    v3 = 2167LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)FrameWindowByViewId);
    return (unsigned int)FrameWindowByViewId;
  }
  FrameWindowByViewId = TouchKeyboardExperienceManager::UpdateWindowAccent(v1, v6, 0LL);
  if ( FrameWindowByViewId < 0 )
  {
    v3 = 2168LL;
    goto LABEL_3;
  }
  return 0LL;
}
