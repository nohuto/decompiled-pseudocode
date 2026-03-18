/*
 * XREFs of NtUserOpenInputDesktop @ 0x1C00D8B30
 * Callers:
 *     <none>
 * Callees:
 *     CloseProtectedHandle @ 0x1C0048FAC (CloseProtectedHandle.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _GetProcessWindowStation @ 0x1C00D90A0 (_GetProcessWindowStation.c)
 *     OpenDesktopCompletion @ 0x1C00DA9E8 (OpenDesktopCompletion.c)
 */

HANDLE __fastcall NtUserOpenInputDesktop(unsigned int a1, int a2, int a3)
{
  KPROCESSOR_MODE AccessMode; // si
  __int64 v7; // rdx
  __int64 ProcessWindowStation; // rax
  __int64 v9; // rcx
  PVOID v10; // rbx
  __int64 CurrentProcess; // rax
  NTSTATUS v12; // eax
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  HANDLE v16; // rbx
  NTSTATUS v18; // ecx
  __int64 v19; // rcx
  const UNICODE_STRING *NameInfo; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+38h] BYREF

  Handle = 0LL;
  AccessMode = 1;
  EnterCrit(0LL, 1LL);
  if ( !grpdeskRitInput )
    goto LABEL_16;
  ProcessWindowStation = GetProcessWindowStation(&DestinationString);
  if ( !ProcessWindowStation )
  {
    Handle = 0LL;
    v19 = 5LL;
    goto LABEL_15;
  }
  if ( (*(_DWORD *)(ProcessWindowStation + 32) & 4) != 0 )
  {
    Handle = 0LL;
    v19 = 1LL;
    goto LABEL_15;
  }
  v10 = gbDesktopLocked ? gspdeskShouldBeForeground : (PVOID)grpdeskRitInput;
  if ( !v10 )
  {
LABEL_16:
    Handle = 0LL;
    v19 = 110LL;
    goto LABEL_15;
  }
  CurrentProcess = PsGetCurrentProcess(v9, v7);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    AccessMode = 0;
    RtlInitUnicodeString(&DestinationString, L"Default");
    NameInfo = (const UNICODE_STRING *)ObQueryNameInfo(v10);
    if ( NameInfo )
      NameInfo = (const UNICODE_STRING *)(ObQueryNameInfo(v10) + 8);
    if ( !RtlEqualUnicodeString(&DestinationString, NameInfo, 0) )
      a3 = 64;
  }
  v12 = ObOpenObjectByPointer(
          v10,
          a2 != 0 ? 2 : 0,
          0LL,
          a3 | 0x81,
          (POBJECT_TYPE)ExDesktopObjectType,
          AccessMode,
          &Handle);
  if ( v12 < 0 )
  {
    v18 = v12;
LABEL_14:
    Handle = 0LL;
    v19 = RtlNtStatusToDosError(v18);
LABEL_15:
    UserSetLastError(v19, v7);
    goto LABEL_11;
  }
  v13 = OpenDesktopCompletion(v10, Handle, a1);
  if ( v13 < 0 || !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
  {
    CloseProtectedHandle(Handle, 1);
    if ( v13 >= 0 )
      v13 = -1073741801;
    v18 = v13;
    goto LABEL_14;
  }
LABEL_11:
  v16 = Handle;
  UserSessionSwitchLeaveCrit(v15, v14);
  return v16;
}
