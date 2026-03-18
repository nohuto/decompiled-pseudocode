/*
 * XREFs of NtUserAlterWindowStyle @ 0x1C0142570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserAlterWindowStyle(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 CurrentProcessWin32Process; // rax

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = v6;
  if ( v6 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    v8 = *(_QWORD *)(v10 + 16);
    if ( *(_QWORD *)(v8 + 400) == CurrentProcessWin32Process )
      *(_DWORD *)(v10 + 68) = a3 & a2 & 0x30023F | *(_DWORD *)(v10 + 68) & ~(a2 & 0x30023F);
    v9 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
