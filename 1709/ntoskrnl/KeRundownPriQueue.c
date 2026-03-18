/*
 * XREFs of KeRundownPriQueue @ 0x14020D150
 * Callers:
 *     ExpWorkQueueDestroy @ 0x14075EB14 (ExpWorkQueueDestroy.c)
 * Callees:
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KeRundownQueueCommon @ 0x1400DB574 (KeRundownQueueCommon.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1400DB9FC (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 */

void __fastcall KeRundownPriQueue(unsigned __int64 a1)
{
  unsigned __int8 CurrentIrql; // di

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
  KeRundownQueueCommon(a1, (volatile signed __int32 **)(a1 + 672), (_DWORD *)(a1 + 536), 0x20u, 1);
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiAcquireReleaseObjectRundownLockExclusive(a1);
  KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0LL, 1u, 0, CurrentIrql);
}
