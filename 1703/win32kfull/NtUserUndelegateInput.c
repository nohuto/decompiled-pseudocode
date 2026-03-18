/*
 * XREFs of NtUserUndelegateInput @ 0x1C010BD50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C010BE00 (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 */

__int64 __fastcall NtUserUndelegateInput(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v13; // rcx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = v4;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 336) && a2 - 1 <= 1 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v4 + 16) + 376LL) == PsGetCurrentProcessWin32Process(v6, v5) )
      {
        v11 = *(_QWORD *)(v10 + 328);
        _HandleDelegatedInput(v11, a2, 0LL);
        CleanupInputDelegation(v11, v10);
        v9 = 1LL;
        goto LABEL_6;
      }
      v13 = 5LL;
    }
    else
    {
      v13 = 87LL;
    }
    UserSetLastError(v13);
  }
LABEL_6:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
