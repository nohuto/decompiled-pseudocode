/*
 * XREFs of NtUserOpenDesktop @ 0x1C0010DA0
 * Callers:
 *     <none>
 * Callees:
 *     _OpenDesktop @ 0x1C0010E24 (_OpenDesktop.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall NtUserOpenDesktop(int a1, int a2, int a3)
{
  __int64 v3; // rbp
  int v7; // edx
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  ULONG v14; // eax
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = OpenDesktop(a1, v7, a2, a3, (__int64)&v15);
  if ( v8 < 0 )
  {
    v14 = RtlNtStatusToDosError(v8);
    UserSetLastError(v14);
  }
  else
  {
    v3 = v15;
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v3;
}
