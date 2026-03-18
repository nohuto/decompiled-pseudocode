/*
 * XREFs of NtUserActivateKeyboardLayout @ 0x1C000FDD0
 * Callers:
 *     <none>
 * Callees:
 *     _GetProcessWindowStation @ 0x1C0010D60 (_GetProcessWindowStation.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall NtUserActivateKeyboardLayout(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  int v5; // eax
  __int64 ProcessWindowStation; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  EnterCrit(0LL, 1LL);
  v4 = 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x20000000) != 0 )
    v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 720LL) + 24LL) & 1;
  else
    v5 = 0;
  if ( v5 )
  {
    UserSetLastError(5LL);
  }
  else
  {
    ProcessWindowStation = GetProcessWindowStation(0LL);
    v4 = xxxActivateKeyboardLayout(ProcessWindowStation, a1, a2, 0LL);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v4;
}
