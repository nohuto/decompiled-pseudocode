/*
 * XREFs of NtUserCanBrokerForceForeground @ 0x1C0009E10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C00CB9BC (-CheckLegacyForegroundAccess@@YAHXZ.c)
 */

__int64 __fastcall NtUserCanBrokerForceForeground(_DWORD *a1)
{
  int v2; // ebx
  int v3; // eax
  ULONG64 v4; // rcx
  ULONG64 v5; // rdx

  EnterCrit(0LL, 1LL);
  v2 = 0;
  if ( (unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 400LL)) )
  {
    v3 = CheckLegacyForegroundAccess();
    v4 = MmUserProbeAddress;
    v5 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_DWORD *)MmUserProbeAddress;
    *a1 = v3;
    v2 = 1;
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v4, v5);
  return v2;
}
