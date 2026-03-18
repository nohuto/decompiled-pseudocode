/*
 * XREFs of ExGetTimerDueTime @ 0x14025CBD4
 * Callers:
 *     PspSetProcessTimerDelayForKTimers @ 0x140239944 (PspSetProcessTimerDelayForKTimers.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KeGetTimer2DueTime @ 0x1402063F4 (KeGetTimer2DueTime.c)
 */

char __fastcall ExGetTimerDueTime(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  char v4; // r8

  if ( (*(_BYTE *)(a1 + 16) & 8) != 0 )
    return KeGetTimer2DueTime(a1 - 160, a2);
  v3 = a1 - 288;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a1 - 288));
  v4 = 0;
  if ( (*(_BYTE *)(v3 + 3) & 0x40) != 0 )
  {
    v4 = 1;
    *a2 = *(_QWORD *)(v3 + 24);
  }
  _InterlockedAnd((volatile signed __int32 *)v3, 0xFFFFFF7F);
  return v4;
}
