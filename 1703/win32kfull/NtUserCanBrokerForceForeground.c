/*
 * XREFs of NtUserCanBrokerForceForeground @ 0x1C00052B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C00B3D10 (-CheckLegacyForegroundAccess@@YAHXZ.c)
 */

__int64 __fastcall NtUserCanBrokerForceForeground(_DWORD *a1)
{
  int v2; // ebx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx

  EnterCrit(0LL, 1LL);
  v2 = 0;
  if ( (unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 376LL)) )
  {
    v3 = CheckLegacyForegroundAccess();
    v7 = W32UserProbeAddress;
    if ( (unsigned __int64)a1 >= W32UserProbeAddress )
      a1 = (_DWORD *)W32UserProbeAddress;
    *a1 = v3;
    v2 = 1;
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v7, v4, v5, v6);
  return v2;
}
