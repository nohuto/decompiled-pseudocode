/*
 * XREFs of NtUserActivateKeyboardLayout @ 0x1C00D80E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _GetProcessWindowStation @ 0x1C00D90A0 (_GetProcessWindowStation.c)
 */

__int64 __fastcall NtUserActivateKeyboardLayout(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  int v6; // eax
  __int64 ProcessWindowStation; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  EnterCrit(0LL, 1LL);
  v5 = 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 464LL) & 0x20000000) != 0 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 728LL);
    v6 = *(_DWORD *)(v4 + 24) & 1;
  }
  else
  {
    v6 = 0;
  }
  if ( v6 )
  {
    UserSetLastError(5LL, v4);
  }
  else
  {
    ProcessWindowStation = GetProcessWindowStation(0LL);
    v5 = xxxActivateKeyboardLayout(ProcessWindowStation, a1, a2, 0LL);
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v5;
}
