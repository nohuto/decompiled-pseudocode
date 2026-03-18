/*
 * XREFs of NtUserRemoveClipboardFormatListener @ 0x1C00080F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C00144F0 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00AF8CC (CheckClipboardAccess.c)
 */

__int64 __fastcall NtUserRemoveClipboardFormatListener(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 CurrentProcessWin32Process; // rax

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v2;
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    v4 = *(_QWORD *)(v8 + 16);
    if ( *(_QWORD *)(v4 + 376) == CurrentProcessWin32Process )
    {
      if ( CheckClipboardAccess() )
      {
        if ( (*(_DWORD *)(v8 + 304) & 1) != 0 )
        {
          _RemoveClipboardFormatListener((struct tagWND *)v8);
          v7 = 1LL;
        }
        else
        {
          UserSetLastError(87LL);
        }
      }
    }
    else
    {
      v7 = 5LL;
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
