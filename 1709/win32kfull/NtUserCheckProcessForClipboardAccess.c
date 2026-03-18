/*
 * XREFs of NtUserCheckProcessForClipboardAccess @ 0x1C01E3510
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     LockProcessByClientId @ 0x1C00907F8 (LockProcessByClientId.c)
 *     InForegroundQueue @ 0x1C00CB420 (InForegroundQueue.c)
 */

__int64 __fastcall NtUserCheckProcessForClipboardAccess(int a1, _DWORD *a2)
{
  void *v3; // rbx
  int v4; // edi
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 ProcessWin32Process; // rax
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 i; // rbx
  __int64 CurrentProcessWin32Process; // rax
  unsigned __int64 v14; // rcx
  unsigned int v15; // eax
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v3 = (void *)a1;
  v4 = 0;
  v5 = 0;
  EnterSharedCrit(0LL, 1LL);
  if ( (int)LockProcessByClientId(v3, (PEPROCESS *)&Object) >= 0
    && (ProcessWin32Process = PsGetProcessWin32Process(Object), (v11 = ProcessWin32Process) != 0) )
  {
    for ( i = *(_QWORD *)(ProcessWin32Process + 296); i; i = *(_QWORD *)(i + 640) )
    {
      v5 = InForegroundQueue((struct tagTHREADINFO *)i, 1);
      if ( v5 )
        break;
    }
    if ( !v5 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
      if ( (unsigned int)IsImmersiveBroker(CurrentProcessWin32Process) )
      {
        v14 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v15 = *(_DWORD *)(v11 + 1036);
        if ( v15 <= (unsigned int)v14 )
          v5 = (unsigned int)v14 - v15 <= 0xFA;
      }
    }
    v4 = 1;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = v5;
    ObfDereferenceObject(Object);
  }
  else
  {
    UserSetLastError(87LL, v6);
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v4;
}
