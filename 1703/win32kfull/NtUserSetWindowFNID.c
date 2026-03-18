/*
 * XREFs of NtUserSetWindowFNID @ 0x1C00FD100
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C001DCFC (IsWindowBeingDestroyed.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetWindowFNID(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rcx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5);
    v6 = *(_QWORD *)(v10 + 16);
    if ( *(_QWORD *)(v6 + 376) == CurrentProcessWin32Process )
    {
      if ( a2 == 0x4000
        || (unsigned __int16)(a2 - 673) <= 9u
        && (*(_WORD *)(v10 + 82) & 0x3FFF) == 0
        && !(unsigned int)IsWindowBeingDestroyed(v10)
        && !*(_DWORD *)(v10 + 252) )
      {
        *(_WORD *)(v10 + 82) |= a2;
        v9 = 1LL;
        goto LABEL_12;
      }
      v12 = 87LL;
    }
    else
    {
      v12 = 5LL;
    }
    UserSetLastError(v12);
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
