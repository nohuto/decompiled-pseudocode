/*
 * XREFs of NtUserCheckProcessForClipboardAccess @ 0x1C01D6D70
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C001BB38 (LockProcessByClientId.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     InForegroundQueue @ 0x1C00B3ED0 (InForegroundQueue.c)
 */

__int64 __fastcall NtUserCheckProcessForClipboardAccess(int a1, _DWORD *a2)
{
  void *v3; // rbx
  int v4; // edi
  int v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 ProcessWin32Process; // rax
  __int64 i; // rbx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v3 = (void *)a1;
  v4 = 0;
  v5 = 0;
  EnterCrit(0LL, 1LL);
  if ( (int)LockProcessByClientId(v3, (PEPROCESS *)&Object) >= 0
    && (ProcessWin32Process = PsGetProcessWin32Process(Object)) != 0 )
  {
    for ( i = *(_QWORD *)(ProcessWin32Process + 288); i; i = *(_QWORD *)(i + 584) )
    {
      v5 = InForegroundQueue((struct tagTHREADINFO *)i, 1);
      if ( v5 )
        break;
    }
    v4 = 1;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (_DWORD *)W32UserProbeAddress;
    *a2 = v5;
    ObfDereferenceObject(Object);
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v4;
}
