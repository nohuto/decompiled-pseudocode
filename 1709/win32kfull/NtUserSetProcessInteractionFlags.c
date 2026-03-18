/*
 * XREFs of NtUserSetProcessInteractionFlags @ 0x1C01EBD50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserSetProcessInteractionFlags(char a1, char a2, char a3)
{
  __int64 v6; // rcx
  _BYTE *CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  EnterCrit(0LL, 1LL);
  CurrentProcessWin32Process = (_BYTE *)PsGetCurrentProcessWin32Process(v6);
  CurrentProcessWin32Process[985] = a1;
  CurrentProcessWin32Process[984] = a2;
  CurrentProcessWin32Process[986] = a3;
  UserSessionSwitchLeaveCrit(v9, v8);
  return 1LL;
}
