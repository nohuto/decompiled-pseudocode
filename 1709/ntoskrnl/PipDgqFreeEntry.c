/*
 * XREFs of PipDgqFreeEntry @ 0x1406D46A4
 * Callers:
 *     PiDmaGuardQueueRemoveEntry @ 0x140200D2C (PiDmaGuardQueueRemoveEntry.c)
 *     PipDmgConsoleUnlockCallback @ 0x1406C3110 (PipDmgConsoleUnlockCallback.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PipDgqFreeEntry(PVOID *P)
{
  ObfDereferenceObjectWithTag(P[2], 0x64706E50u);
  P[2] = 0LL;
  ExFreePoolWithTag(P, 0x64706E50u);
}
