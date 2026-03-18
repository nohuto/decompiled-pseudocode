/*
 * XREFs of NtUserOpenThreadDesktop @ 0x1C01E9EE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _OpenThreadDesktop @ 0x1C01C62BC (_OpenThreadDesktop.c)
 */

HANDLE __fastcall NtUserOpenThreadDesktop(unsigned int a1, char a2, int a3, int a4)
{
  HANDLE v4; // r14
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  ULONG v12; // eax
  __int64 v13; // rdx
  HANDLE v15; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 1LL);
  v9 = OpenThreadDesktop(a1, a2, a3, a4, &v15);
  if ( v9 >= 0 )
  {
    v4 = v15;
  }
  else
  {
    v12 = RtlNtStatusToDosError(v9);
    UserSetLastError(v12, v13);
  }
  UserSessionSwitchLeaveCrit(v11, v10);
  return v4;
}
