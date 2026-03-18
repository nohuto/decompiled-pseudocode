/*
 * XREFs of NtUserUndelegateInput @ 0x1C0116910
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C01169C0 (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 */

__int64 __fastcall NtUserUndelegateInput(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v11; // rcx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v4;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 336) && a2 - 1 <= 1 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v4 + 16) + 400LL) == PsGetCurrentProcessWin32Process(v6) )
      {
        v9 = *(_QWORD *)(v8 + 328);
        _HandleDelegatedInput(v9, a2, 0LL);
        CleanupInputDelegation(v9, v8);
        v7 = 1LL;
        goto LABEL_6;
      }
      v11 = 5LL;
    }
    else
    {
      v11 = 87LL;
    }
    UserSetLastError(v11, v5);
  }
LABEL_6:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
