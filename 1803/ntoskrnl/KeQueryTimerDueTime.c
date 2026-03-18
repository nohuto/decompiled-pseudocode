/*
 * XREFs of KeQueryTimerDueTime @ 0x140242130
 * Callers:
 *     ExGetNextWakeTimeForDeepSleep @ 0x1402BAB9C (ExGetNextWakeTimeForDeepSleep.c)
 *     ExGetWakeTimerList @ 0x1402BAC10 (ExGetWakeTimerList.c)
 *     ExGetNextWakeTime @ 0x14048773C (ExGetNextWakeTime.c)
 *     NtQueryTimer @ 0x1407BEC64 (NtQueryTimer.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
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
