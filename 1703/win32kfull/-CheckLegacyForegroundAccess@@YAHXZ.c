/*
 * XREFs of ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C00B3D10
 * Callers:
 *     NtUserCanBrokerForceForeground @ 0x1C00052B0 (NtUserCanBrokerForceForeground.c)
 *     CheckForegroundRight @ 0x1C00B431C (CheckForegroundRight.c)
 *     NtUserSetWindowArrangement @ 0x1C01DFF40 (NtUserSetWindowArrangement.c)
 * Callees:
 *     CanForceForeground @ 0x1C001BDE0 (CanForceForeground.c)
 *     IsForegroundLocked @ 0x1C00B45FC (IsForegroundLocked.c)
 */

_BOOL8 __fastcall CheckLegacyForegroundAccess(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // ebx

  LOBYTE(v3) = 0;
  if ( (unsigned int)IsForegroundLocked(a1, a2, gptiCurrent) && *(_QWORD *)(v2 + 376) != gppiInputProvider )
    return 0LL;
  if ( (*(_DWORD *)(v2 + 440) & 0x2C) != 0 || (unsigned int)CanForceForeground(*(_QWORD *)(v2 + 376)) )
    return 1LL;
  if ( !gptiForeground )
    return 0LL;
  if ( *(_DWORD *)(gptiForeground + 552LL) <= 0x400u )
    v3 = *(_DWORD *)(gptiForeground + 568LL);
  return (v3 & 0x40) != 0;
}
