/*
 * XREFs of KeQueryTimerDueTime @ 0x140204914
 * Callers:
 *     ExGetNextWakeTimeForDeepSleep @ 0x14028649C (ExGetNextWakeTimeForDeepSleep.c)
 *     ExGetWakeTimerList @ 0x140286510 (ExGetWakeTimerList.c)
 *     ExGetNextWakeTime @ 0x14043AB44 (ExGetNextWakeTime.c)
 *     NtQueryTimer @ 0x140758010 (NtQueryTimer.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KeQueryTimerDueTime(__int64 a1)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // si

  v2 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
  if ( (*(_BYTE *)(a1 + 3) & 0x40) != 0 )
    v2 = *(_QWORD *)(a1 + 24);
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  __writecr8(CurrentIrql);
  return v2;
}
