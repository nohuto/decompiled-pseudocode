/*
 * XREFs of KeRundownPriQueue @ 0x14024B4E0
 * Callers:
 *     ExpWorkQueueDestroy @ 0x1407C5894 (ExpWorkQueueDestroy.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KeRundownQueueCommon @ 0x14013E274 (KeRundownQueueCommon.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x14013E754 (KiAcquireReleaseObjectRundownLockExclusive.c)
 */

__int64 __fastcall KeRundownPriQueue(unsigned __int64 a1)
{
  unsigned __int8 CurrentIrql; // di

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
  KeRundownQueueCommon(a1, (_QWORD **)(a1 + 672), (_DWORD *)(a1 + 536), 0x20u, 1);
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiAcquireReleaseObjectRundownLockExclusive(a1);
  return KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0, 1u, 0, CurrentIrql);
}
