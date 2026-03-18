/*
 * XREFs of NtUserSetDialogControlDpiChangeBehavior @ 0x1C01EB4A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetDialogControlDpiChangeBehavior(__int64 a1, char a2, unsigned __int8 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = v6;
  if ( v6 )
  {
    v15[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v15;
    v15[1] = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gptiCurrent);
    v13 = *(_QWORD *)(v10 + 16);
    if ( *(_QWORD *)(v13 + 400) == CurrentProcessWin32Process )
    {
      v9 = 1LL;
      *(_WORD *)(v10 + 376) = a2 & 3 & a3 | *(_WORD *)(v10 + 376) & ~(a2 & 3);
    }
    else
    {
      UserSetLastError(5LL, v12);
    }
    ThreadUnlock1(v13, v12);
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
