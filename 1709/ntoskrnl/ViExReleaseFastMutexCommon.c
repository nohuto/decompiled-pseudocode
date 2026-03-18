/*
 * XREFs of ViExReleaseFastMutexCommon @ 0x1407C2278
 * Callers:
 *     VerifierExReleaseFastMutex @ 0x1407C1D00 (VerifierExReleaseFastMutex.c)
 *     VerifierExReleaseFastMutexNoReboot @ 0x1407C1D60 (VerifierExReleaseFastMutexNoReboot.c)
 * Callees:
 *     VfKeIrqlTransitionReserveLogEntry @ 0x1407BA0B0 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViExCheckAPCsDisabled @ 0x1407C220C (ViExCheckAPCsDisabled.c)
 */

char *__fastcall ViExReleaseFastMutexCommon(__int64 a1)
{
  char CurrentIrql; // al

  if ( (MmVerifierData & 0x800) != 0 )
    CurrentIrql = ViExCheckAPCsDisabled(0x34uLL, a1);
  else
    CurrentIrql = KeGetCurrentIrql();
  return VfKeIrqlTransitionReserveLogEntry(CurrentIrql, *(_BYTE *)(a1 + 48));
}
