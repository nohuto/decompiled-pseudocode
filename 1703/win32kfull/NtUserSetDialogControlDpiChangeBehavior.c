/*
 * XREFs of NtUserSetDialogControlDpiChangeBehavior @ 0x1C01DF2B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetDialogControlDpiChangeBehavior(__int64 a1, char a2, unsigned __int8 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v11 = 0LL;
  v12 = v6;
  if ( v6 )
  {
    v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v17;
    v17[1] = v6;
    ++*(_DWORD *)(v6 + 8);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gptiCurrent, v7);
    v15 = *(_QWORD *)(v12 + 16);
    if ( *(_QWORD *)(v15 + 376) == CurrentProcessWin32Process )
    {
      v11 = 1LL;
      *(_WORD *)(v12 + 376) = a2 & 3 & a3 | *(_WORD *)(v12 + 376) & ~(a2 & 3);
    }
    else
    {
      UserSetLastError(5LL);
    }
    ThreadUnlock1(v15, v14);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
