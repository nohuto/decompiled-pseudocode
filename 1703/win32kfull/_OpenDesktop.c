/*
 * XREFs of _OpenDesktop @ 0x1C0010E24
 * Callers:
 *     NtUserOpenDesktop @ 0x1C0010DA0 (NtUserOpenDesktop.c)
 *     xxxResolveDesktop @ 0x1C0010FB0 (xxxResolveDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01C37AC (xxxResolveDesktopForWOW.c)
 * Callees:
 *     OpenDesktopCompletion @ 0x1C0012728 (OpenDesktopCompletion.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x1C00C736C (CloseProtectedHandle.c)
 */

__int64 __fastcall OpenDesktop(__int64 a1, __int64 a2, __int64 a3, int a4, HANDLE *a5)
{
  unsigned int v5; // r14d
  KPROCESSOR_MODE v6; // si
  NTSTATUS v8; // ebx
  int v9; // eax
  PVOID v10; // rdi
  __int64 CurrentProcess; // rax
  ULONG v13; // eax
  ULONG v14; // eax
  ULONG v15; // eax
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  PVOID Object; // [rsp+48h] [rbp-8h] BYREF

  v5 = a3;
  v6 = 1;
  LOBYTE(a3) = 1;
  v8 = ObOpenObjectByName(a1, ExDesktopObjectType, a3, 0LL, a4 | 0x81u, 0LL, &Handle);
  if ( v8 < 0 )
  {
    CurrentProcess = PsGetCurrentProcess();
    if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    {
      v6 = 0;
      v8 = ObOpenObjectByName(a1, ExDesktopObjectType, 0LL, 0LL, 193, 0LL, &Handle);
    }
    if ( v8 < 0 )
    {
      v13 = RtlNtStatusToDosError(v8);
      UserSetLastError(v13);
      return (unsigned int)v8;
    }
  }
  v9 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, v6, &Object, 0LL);
  v8 = v9;
  if ( v9 < 0 )
  {
    v14 = RtlNtStatusToDosError(v9);
    UserSetLastError(v14);
LABEL_16:
    CloseProtectedHandle(Handle);
    return (unsigned int)v8;
  }
  v10 = Object;
  if ( *(_DWORD *)Object != gSessionId )
  {
    v8 = -1073741816;
    v15 = RtlNtStatusToDosError(-1073741816);
    UserSetLastError(v15);
    ObfDereferenceObject(v10);
    goto LABEL_16;
  }
  v8 = OpenDesktopCompletion(Object, Handle, v5);
  if ( v8 < 0 )
  {
    CloseProtectedHandle(Handle);
    Handle = 0LL;
  }
  ObfDereferenceObject(v10);
  if ( v8 >= 0 )
  {
    if ( (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
    {
      v8 = 0;
      *a5 = Handle;
    }
    else
    {
      CloseProtectedHandle(Handle);
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v8;
}
