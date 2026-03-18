/*
 * XREFs of NtUserOpenThreadDesktop @ 0x1C01DDDF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _OpenThreadDesktop @ 0x1C01C359C (_OpenThreadDesktop.c)
 */

HANDLE __fastcall NtUserOpenThreadDesktop(unsigned int a1, char a2, int a3, int a4)
{
  HANDLE v4; // r14
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  ULONG v14; // eax
  HANDLE v16; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  v9 = OpenThreadDesktop(a1, a2, a3, a4, &v16);
  if ( v9 >= 0 )
  {
    v4 = v16;
  }
  else
  {
    v14 = RtlNtStatusToDosError(v9);
    UserSetLastError(v14);
  }
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v4;
}
