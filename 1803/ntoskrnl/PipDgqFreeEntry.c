/*
 * XREFs of PipDgqFreeEntry @ 0x14073DE08
 * Callers:
 *     PiDmaGuardQueueRemoveEntry @ 0x14023DE00 (PiDmaGuardQueueRemoveEntry.c)
 *     PipDmgConsoleUnlockCallback @ 0x1407291F0 (PipDmgConsoleUnlockCallback.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall PipDgqFreeEntry(PVOID *P)
{
  ObfDereferenceObjectWithTag(P[2], 0x64706E50u);
  P[2] = 0LL;
  ExFreePoolWithTag(P, 0x64706E50u);
}
