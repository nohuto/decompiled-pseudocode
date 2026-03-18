/*
 * XREFs of NtUserSetThreadDesktop @ 0x1C001A310
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetThreadDesktop @ 0x1C001A398 (xxxSetThreadDesktop.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

_BOOL8 __fastcall NtUserSetThreadDesktop(_BOOL8 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  NTSTATUS v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  ULONG v9; // eax
  __int64 CurrentProcess; // rax
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  LOBYTE(v2) = 1;
  v5 = ValidateHdesk(a1, v2, 0LL, &Object);
  if ( v5 < 0 )
  {
    if ( a1 || (CurrentProcess = PsGetCurrentProcess(v4), v4 = gpepCSRSS, CurrentProcess != gpepCSRSS) )
    {
      a1 = 0LL;
    }
    else
    {
      v5 = xxxSetThreadDesktop(0LL, 0LL);
      LOBYTE(a1) = v5 >= 0;
    }
  }
  else
  {
    v5 = xxxSetThreadDesktop(a1, Object);
    a1 = v5 >= 0;
    ObfDereferenceObject(Object);
  }
  if ( v5 < 0 )
  {
    v9 = RtlNtStatusToDosError(v5);
    UserSetLastError(v9);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v6, v7);
  return a1;
}
