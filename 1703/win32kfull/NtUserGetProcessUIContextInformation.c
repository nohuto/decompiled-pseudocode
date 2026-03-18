/*
 * XREFs of NtUserGetProcessUIContextInformation @ 0x1C00E35C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetProcessUIContextInformation(HANDLE Handle, _QWORD *a2)
{
  PVOID v4; // rdi
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  __int64 v16; // [rsp+70h] [rbp+8h]
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 1;
  EnterSharedCrit(0LL, 1LL);
  if ( Handle == (HANDLE)-1LL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, v6);
  }
  else
  {
    v14 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v4 = Object;
    if ( v14 < 0 )
    {
      UserSetLastError(87LL);
      v5 = 0;
      goto LABEL_12;
    }
    if ( (unsigned int)PsGetProcessSessionId(Object) != gSessionId )
    {
      v15 = 87LL;
      goto LABEL_17;
    }
    CurrentProcessWin32Process = PsGetProcessWin32Process(v4);
  }
  if ( CurrentProcessWin32Process && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x21) != 0 )
  {
    v12 = *(unsigned int *)(CurrentProcessWin32Process + 768);
    HIDWORD(v16) = (v12 & 0x40) != 0;
    if ( (v12 & 0x100) != 0 )
      HIDWORD(v16) = ((v12 & 0x40) != 0) | 2;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (_QWORD *)W32UserProbeAddress;
    LODWORD(v16) = ((unsigned int)v12 >> 4) & 3;
    *a2 = v16;
    goto LABEL_10;
  }
  v15 = 1471LL;
LABEL_17:
  UserSetLastError(v15);
  v5 = 0;
LABEL_10:
  if ( v4 )
    ObfDereferenceObject(v4);
LABEL_12:
  UserSessionSwitchLeaveCrit(v12, v9, v10, v11);
  return v5;
}
