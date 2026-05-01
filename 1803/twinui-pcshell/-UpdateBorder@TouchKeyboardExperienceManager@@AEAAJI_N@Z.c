/*
 * XREFs of ?UpdateBorder@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x180243754
 * Callers:
 *     _lambda_114373a7e1561dd71911e06c6b6df4ef_::operator() @ 0x1800A1480 (_lambda_114373a7e1561dd71911e06c6b6df4ef_--operator().c)
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N@Z @ 0x18023FA6C (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z @ 0x18023E088 (-GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z.c)
 *     ?UpdateWindowAccent@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x180244D0C (-UpdateWindowAccent@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@W4ACCENT_STATE@@KPEBUtagREC.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::UpdateBorder(RTL_SRWLOCK *this, int a2, char a3)
{
  __int64 v5; // rcx
  int FrameWindowByViewId; // ebx
  __int64 v7; // rdx
  __int64 v9; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HWND v11; // [rsp+58h] [rbp+20h] BYREF

  FrameWindowByViewId = TouchKeyboardExperienceManager::GetFrameWindowByViewId(this, a2, &v11);
  if ( FrameWindowByViewId < 0 )
  {
    v7 = 2204LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)FrameWindowByViewId);
    return (unsigned int)FrameWindowByViewId;
  }
  if ( ((a2 - 1) & 0xFFFFFFFB) == 0 || a3 )
    v9 = 0LL;
  else
    v9 = 4LL;
  FrameWindowByViewId = TouchKeyboardExperienceManager::UpdateWindowAccent(v5, v11, v9);
  if ( FrameWindowByViewId < 0 )
  {
    v7 = 2218LL;
    goto LABEL_3;
  }
  return 0LL;
}
