/*
 * XREFs of NtUserAddClipboardFormatListener @ 0x1C00C4EF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00C6624 (CheckClipboardAccess.c)
 */

__int64 __fastcall NtUserAddClipboardFormatListener(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rsi
  __int64 v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v5 = 0LL;
  v6 = v2;
  if ( !v2 )
    goto LABEL_9;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  v4 = *(_QWORD *)(v6 + 16);
  if ( *(_QWORD *)(v4 + 400) != CurrentProcessWin32Process )
  {
    v5 = 5LL;
    goto LABEL_9;
  }
  if ( (*(_DWORD *)(v6 + 304) & 1) != 0 )
  {
    v10 = 87LL;
LABEL_13:
    UserSetLastError(v10, v3);
    goto LABEL_9;
  }
  v3 = CheckClipboardAccess();
  if ( !v3 )
    goto LABEL_9;
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 400LL) + 640LL) != v3 )
  {
    UserSetLastError(87LL, v3);
    v10 = 0LL;
    goto LABEL_13;
  }
  v8 = v3 + 120;
  if ( *(_QWORD *)(v3 + 120) )
  {
    v12 = *(_QWORD *)(v3 + 120);
    v11 = v6 + 296;
    HMAssignmentLock(&v11);
  }
  v11 = v8;
  v12 = v6;
  HMAssignmentLock(&v11);
  *(_DWORD *)(v6 + 304) |= 1u;
  v5 = 1LL;
LABEL_9:
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
