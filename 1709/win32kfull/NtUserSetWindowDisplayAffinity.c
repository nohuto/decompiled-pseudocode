/*
 * XREFs of NtUserSetWindowDisplayAffinity @ 0x1C01EC280
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     SetDisplayAffinity @ 0x1C0212C94 (SetDisplayAffinity.c)
 */

__int64 __fastcall NtUserSetWindowDisplayAffinity(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v4;
  if ( v4 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v4 + 16) + 400LL) != PsGetCurrentProcessWin32Process(v6) )
    {
      v9 = 5LL;
LABEL_14:
      UserSetLastError(v9, v5);
      goto LABEL_15;
    }
    v10 = *(_QWORD *)(v8 + 104);
    if ( v10 && (*(_DWORD *)(*(_QWORD *)(v10 + 16) + 1184LL) & 0x40000) != 0 )
      v8 = *(_QWORD *)(v8 + 104);
    if ( !(unsigned int)IsTopLevelWindow(v8) || a2 && (a2 & 1) == 0 )
    {
      v9 = 87LL;
      goto LABEL_14;
    }
    if ( !(unsigned int)SetDisplayAffinity((struct tagWND *)v8) )
    {
      v9 = 8LL;
      goto LABEL_14;
    }
    v7 = 1LL;
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
