/*
 * XREFs of NtUserGetKeyboardLayoutList @ 0x1C00D8C90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _GetKeyboardLayoutList @ 0x1C00D8D20 (_GetKeyboardLayoutList.c)
 *     _GetProcessWindowStation @ 0x1C00D90A0 (_GetProcessWindowStation.c)
 */

__int64 __fastcall NtUserGetKeyboardLayoutList(unsigned int a1, volatile void *a2)
{
  __int64 v4; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 ProcessWindowStation; // rax
  unsigned int KeyboardLayoutList; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx

  EnterSharedCrit(0LL, 1LL);
  if ( a2 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v4);
    ProbeForWrite(a2, 8LL * a1, CurrentProcessWow64Process != 0 ? 1 : 4);
  }
  else
  {
    a1 = 0;
  }
  ProcessWindowStation = GetProcessWindowStation(0LL);
  KeyboardLayoutList = GetKeyboardLayoutList(ProcessWindowStation, a1, a2);
  UserSessionSwitchLeaveCrit(v9, v8);
  return KeyboardLayoutList;
}
