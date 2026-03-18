/*
 * XREFs of NtUserSetThreadState @ 0x1C011C0A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetThreadState(unsigned int a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rcx

  v4 = 1LL;
  EnterCrit(0LL, 1LL);
  if ( (a1 & 0xFFFFBFFF) != 0 )
  {
    UserSetLastError(3221225485LL, v5);
    v4 = 0LL;
  }
  else
  {
    v6 = *(_QWORD *)(gptiCurrent + 408LL);
    v7 = *(_DWORD *)(v6 + 380) ^ a2 & (a1 ^ *(_DWORD *)(v6 + 380));
    *(_DWORD *)(v6 + 380) = v7;
  }
  UserSessionSwitchLeaveCrit(v7, v5);
  return v4;
}
