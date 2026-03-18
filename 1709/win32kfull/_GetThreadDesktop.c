/*
 * XREFs of _GetThreadDesktop @ 0x1C00F8A44
 * Callers:
 *     NtUserGetThreadDesktop @ 0x1C00F8A10 (NtUserGetThreadDesktop.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     GetConsoleDesktop @ 0x1C01C61A0 (GetConsoleDesktop.c)
 */

HANDLE __fastcall GetThreadDesktop(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  HANDLE result; // rax
  PRKPROCESS *v6; // rbx
  __int64 v7; // rdx
  int v8; // eax
  NTSTATUS v9; // eax
  PVOID v10; // rbx
  int v11; // edi
  __int64 v12; // rcx
  __int64 CurrentProcess; // rax
  HANDLE Handle; // [rsp+58h] [rbp+28h] BYREF
  PVOID Object; // [rsp+60h] [rbp+30h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+68h] [rbp+38h] BYREF

  v1 = a1;
  v2 = PtiFromThreadId(a1);
  v4 = v2;
  if ( v2 )
  {
    result = *(HANDLE *)(v2 + 568);
    Handle = result;
    v6 = *(PRKPROCESS **)(v4 + 400);
  }
  else
  {
    if ( (int)GetConsoleDesktop(v1, &Handle, 0LL, &Object) < 0 )
      return 0LL;
    v6 = (PRKPROCESS *)Object;
    result = Handle;
  }
  if ( result )
  {
    if ( v6 != (PRKPROCESS *)PsGetCurrentProcessWin32Process(v3) )
    {
      KeAttachProcess(*v6);
      v9 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, &HandleInformation);
      v10 = Object;
      v11 = v9;
      KeDetachProcess();
      if ( v11 < 0
        || (CurrentProcess = PsGetCurrentProcess(v12, v7),
            !(unsigned __int8)ObFindHandleForObject(CurrentProcess, v10, 0LL, &HandleInformation, &Handle)) )
      {
        Handle = 0LL;
      }
      if ( v11 >= 0 )
        ObfDereferenceObject(v10);
    }
    if ( Handle )
    {
      v8 = SetHandleFlag(Handle, 1LL, 1LL);
      return (HANDLE)((unsigned __int64)Handle & -(__int64)(v8 != 0));
    }
    else
    {
      UserSetLastError(5LL, v7);
      return Handle;
    }
  }
  return result;
}
