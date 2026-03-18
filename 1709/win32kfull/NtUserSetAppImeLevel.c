/*
 * XREFs of NtUserSetAppImeLevel @ 0x1C01EAEA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     InternalSetProp @ 0x1C009B790 (InternalSetProp.c)
 */

__int64 __fastcall NtUserSetAppImeLevel(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 CurrentProcessWin32Process; // rax

  v2 = a2;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v4;
  if ( v4 )
  {
    if ( (*gpsi & 4) != 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gpsi);
      v6 = *(_QWORD *)(v8 + 16);
      if ( *(_QWORD *)(v6 + 400) == CurrentProcessWin32Process )
      {
        InternalSetProp(v8, (unsigned __int16)atomImeLevel, v2, 5);
        v7 = 1LL;
      }
    }
    else
    {
      UserSetLastError(120LL, v5);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
