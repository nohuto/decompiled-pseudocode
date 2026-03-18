/*
 * XREFs of NtUserGetProcessUIContextInformation @ 0x1C00F5560
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetProcessUIContextInformation(HANDLE Handle, _QWORD *a2)
{
  PVOID v4; // rdi
  int v5; // ebx
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  unsigned int v9; // ecx
  ULONG64 v10; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // [rsp+70h] [rbp+8h]
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 1;
  EnterSharedCrit(0LL, 1LL);
  if ( Handle == (HANDLE)-1LL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  }
  else
  {
    v12 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v4 = Object;
    if ( v12 < 0 )
    {
      UserSetLastError(87LL, v13);
      v5 = 0;
      goto LABEL_12;
    }
    if ( (unsigned int)PsGetProcessSessionId(Object) != gSessionId )
    {
      v14 = 87LL;
      goto LABEL_17;
    }
    CurrentProcessWin32Process = PsGetProcessWin32Process(v4);
  }
  if ( CurrentProcessWin32Process && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x21) != 0 )
  {
    v9 = *(_DWORD *)(CurrentProcessWin32Process + 776);
    LODWORD(v15) = (v9 >> 4) & 3;
    HIDWORD(v15) = (v9 & 0x40) != 0;
    if ( (v9 & 0x100) != 0 )
      HIDWORD(v15) = ((v9 & 0x40) != 0) | 2;
    v10 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    *a2 = v15;
    goto LABEL_10;
  }
  v14 = 1471LL;
LABEL_17:
  UserSetLastError(v14, v8);
  v5 = 0;
LABEL_10:
  if ( v4 )
    ObfDereferenceObject(v4);
LABEL_12:
  UserSessionSwitchLeaveCrit(v10, v8);
  return v5;
}
