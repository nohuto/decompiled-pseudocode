/*
 * XREFs of NtUserShutdownReasonDestroy @ 0x1C0123860
 * Callers:
 *     <none>
 * Callees:
 *     InternalRemoveProp @ 0x1C0062014 (InternalRemoveProp.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall NtUserShutdownReasonDestroy(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v5 = 0LL;
  v6 = v2;
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    v4 = *(_QWORD *)(v6 + 16);
    if ( *(_QWORD *)(v4 + 400) == CurrentProcessWin32Process )
    {
      v8 = InternalRemoveProp(v6, (unsigned __int16)gatomShutdownBlockingReason, 1LL);
      if ( v8 )
      {
        Win32FreePool(v8, v9, v10);
        v5 = 1LL;
      }
      else
      {
        UserSetLastError(87LL, v9);
      }
    }
    else
    {
      v5 = 5LL;
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
