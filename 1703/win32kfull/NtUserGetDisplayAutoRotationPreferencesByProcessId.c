/*
 * XREFs of NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x1C01D88A0
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C001BB38 (LockProcessByClientId.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDisplayAutoRotationPreferencesByProcessId(int a1, _DWORD *a2, _DWORD *a3)
{
  void *v5; // rbx
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 ProcessWin32Process; // rax
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v5 = (void *)a1;
  EnterSharedCrit(0LL, 1LL);
  v6 = LockProcessByClientId(v5, (PEPROCESS *)&Object);
  v7 = 0;
  if ( v6 >= 0 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    if ( ProcessWin32Process )
    {
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        a2 = (_DWORD *)W32UserProbeAddress;
      *a2 = *(_DWORD *)(ProcessWin32Process + 864);
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        a3 = (_DWORD *)W32UserProbeAddress;
      *a3 = 0;
      v7 = 1;
    }
    else
    {
      UserSetLastError(5LL);
    }
    ObfDereferenceObject(Object);
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v7;
}
