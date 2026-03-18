/*
 * XREFs of NtUserSetWindowDisplayAffinity @ 0x1C01E0100
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     SetDisplayAffinity @ 0x1C0211780 (SetDisplayAffinity.c)
 */

__int64 __fastcall NtUserSetWindowDisplayAffinity(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = v4;
  if ( v4 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v4 + 16) + 376LL) != PsGetCurrentProcessWin32Process(v6, v5) )
    {
      v11 = 5LL;
LABEL_14:
      UserSetLastError(v11);
      goto LABEL_15;
    }
    v12 = *(_QWORD *)(v10 + 104);
    if ( v12 && (*(_DWORD *)(*(_QWORD *)(v12 + 16) + 1096LL) & 0x40000) != 0 )
      v10 = *(_QWORD *)(v10 + 104);
    if ( !(unsigned int)IsTopLevelWindow(v10) || a2 && (a2 & 1) == 0 )
    {
      v11 = 87LL;
      goto LABEL_14;
    }
    if ( !(unsigned int)SetDisplayAffinity((struct tagWND *)v10) )
    {
      v11 = 8LL;
      goto LABEL_14;
    }
    v9 = 1LL;
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
