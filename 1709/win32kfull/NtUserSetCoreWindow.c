/*
 * XREFs of NtUserSetCoreWindow @ 0x1C0116E60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C00733A0 (SetWindowSubtreeCoreWindowStatus.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C009AB94 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserSetCoreWindow(HWND a1, unsigned int a2)
{
  BOOL v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagWND *v10; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHWNDND(a1, &v10);
  v6 = 0LL;
  if ( v4 )
  {
    SetOrClrWF(a2, v10, 0xFB02u, 1);
    SetWindowSubtreeCoreWindowStatus((__int64)v10, a2);
    v6 = 1LL;
  }
  else
  {
    UserSetLastError(87LL, v5);
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v6;
}
