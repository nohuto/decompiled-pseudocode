/*
 * XREFs of NtUserOpenInputDesktop @ 0x1C00107D0
 * Callers:
 *     <none>
 * Callees:
 *     _GetProcessWindowStation @ 0x1C0010D60 (_GetProcessWindowStation.c)
 *     OpenDesktopCompletion @ 0x1C0012728 (OpenDesktopCompletion.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x1C00C736C (CloseProtectedHandle.c)
 */

HANDLE __fastcall NtUserOpenInputDesktop(unsigned int a1, int a2, int a3)
{
  KPROCESSOR_MODE AccessMode; // si
  __int64 ProcessWindowStation; // rax
  PVOID v8; // rbx
  __int64 CurrentProcess; // rax
  NTSTATUS v10; // eax
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
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
  v8 = gbDesktopLocked ? gspdeskShouldBeForeground : (PVOID)grpdeskRitInput;
  if ( !v8 )
  {
LABEL_16:
    Handle = 0LL;
    v19 = 110LL;
    goto LABEL_15;
  }
  CurrentProcess = PsGetCurrentProcess();
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    AccessMode = 0;
    RtlInitUnicodeString(&DestinationString, L"Default");
    NameInfo = (const UNICODE_STRING *)ObQueryNameInfo(v8);
    if ( NameInfo )
      NameInfo = (const UNICODE_STRING *)(ObQueryNameInfo(v8) + 8);
    if ( !RtlEqualUnicodeString(&DestinationString, NameInfo, 0) )
      a3 = 64;
  }
  v10 = ObOpenObjectByPointer(
          v8,
          a2 != 0 ? 2 : 0,
          0LL,
          a3 | 0x81,
          (POBJECT_TYPE)ExDesktopObjectType,
          AccessMode,
          &Handle);
  if ( v10 < 0 )
  {
    v18 = v10;
LABEL_14:
    Handle = 0LL;
    v19 = RtlNtStatusToDosError(v18);
LABEL_15:
    UserSetLastError(v19);
    goto LABEL_11;
  }
  v11 = OpenDesktopCompletion(v8, Handle, a1);
  if ( v11 < 0 || !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
  {
    CloseProtectedHandle(Handle);
    if ( v11 >= 0 )
      v11 = -1073741801;
    v18 = v11;
    goto LABEL_14;
  }
LABEL_11:
  v16 = Handle;
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v16;
}
