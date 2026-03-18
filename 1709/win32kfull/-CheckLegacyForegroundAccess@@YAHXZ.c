/*
 * XREFs of ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C00CB9BC
 * Callers:
 *     NtUserCanBrokerForceForeground @ 0x1C0009E10 (NtUserCanBrokerForceForeground.c)
 *     CheckForegroundRight @ 0x1C00CBD2C (CheckForegroundRight.c)
 *     NtUserSetWindowArrangement @ 0x1C01EC0C0 (NtUserSetWindowArrangement.c)
 * Callees:
 *     CanForceForeground @ 0x1C0090A90 (CanForceForeground.c)
 *     IsForegroundLocked @ 0x1C00CC014 (IsForegroundLocked.c)
 */

_BOOL8 __fastcall CheckLegacyForegroundAccess(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // ebx

  LOBYTE(v3) = 0;
  if ( (unsigned int)IsForegroundLocked(a1, a2, gptiCurrent) && *(_QWORD *)(v2 + 400) != gppiInputProvider )
    return 0LL;
  if ( (*(_DWORD *)(v2 + 464) & 0x2C) != 0 || (unsigned int)CanForceForeground(*(_QWORD *)(v2 + 400)) )
    return 1LL;
  if ( !gptiForeground )
    return 0LL;
  if ( *(_DWORD *)(gptiForeground + 608LL) <= 0x400u )
    v3 = *(_DWORD *)(gptiForeground + 624LL);
  return (v3 & 0x40) != 0;
}
