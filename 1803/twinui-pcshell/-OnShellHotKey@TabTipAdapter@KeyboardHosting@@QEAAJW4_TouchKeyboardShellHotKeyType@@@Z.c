/*
 * XREFs of ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x18024B940
 * Callers:
 *     ?OnShellHotKey@TouchKeyboardExperienceManager@@UEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x18023FDD0 (-OnShellHotKey@TouchKeyboardExperienceManager@@UEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 *     ?ShowClipboardView@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1802418B0 (-ShowClipboardView@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180248C98 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@@Z @ 0x18024BDAC (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnShellHotKey(RTL_SRWLOCK **a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  int IsReady; // eax
  unsigned int v6; // edi
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a2;
  IsReady = KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady(a1, a2, a3);
  v6 = IsReady;
  if ( IsReady < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49B,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)IsReady);
    return v6;
  }
  v8 = 2LL;
  if ( v3 != 1 )
  {
    if ( v3 == 2 )
    {
      v8 = 4LL;
    }
    else
    {
      v8 = 3LL;
      if ( v3 != 3 )
        return 2147549183LL;
    }
  }
  v9 = KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange(a1, v8, 4LL);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4AF,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
