/*
 * XREFs of KiAcquireReleaseObjectRundownLockExclusive @ 0x1400DB9FC
 * Callers:
 *     KeRundownQueueEx @ 0x1400DB4A4 (KeRundownQueueEx.c)
 *     KeReleaseMutant @ 0x1400DB760 (KeReleaseMutant.c)
 *     KeRundownPriQueue @ 0x14020D150 (KeRundownPriQueue.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall KiAcquireReleaseObjectRundownLockExclusive(unsigned __int64 a1)
{
  volatile LONG *v1; // rbx

  v1 = &KiObjectRundownLocks[16 * ((a1 >> 4) & 0x3F)];
  ExAcquireSpinLockExclusiveAtDpcLevel(v1);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
}
