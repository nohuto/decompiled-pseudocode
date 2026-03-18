/*
 * XREFs of NtUserCloseWindowStation @ 0x1C0010730
 * Callers:
 *     <none>
 * Callees:
 *     _GetProcessWindowStation @ 0x1C0010D60 (_GetProcessWindowStation.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall NtUserCloseWindowStation(unsigned __int64 Handle)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  int v8; // edi
  ULONG v10; // eax
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  LOBYTE(v2) = 1;
  v7 = 0LL;
  if ( (int)ValidateHwinsta(Handle, v2, 0LL, &Object) >= 0 )
  {
    GetProcessWindowStation(&v11);
    if ( ((Handle ^ v11) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
      v8 = ObCloseHandle((HANDLE)Handle, 1);
    else
      v8 = -2147483631;
    ObfDereferenceObject(Object);
    if ( v8 < 0 )
    {
      v10 = RtlNtStatusToDosError(v8);
      UserSetLastError(v10);
    }
    else
    {
      v7 = 1LL;
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
