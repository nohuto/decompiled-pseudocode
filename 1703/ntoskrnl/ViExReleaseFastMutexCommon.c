/*
 * XREFs of ViExReleaseFastMutexCommon @ 0x140780278
 * Callers:
 *     VerifierExReleaseFastMutex @ 0x14077FD10 (VerifierExReleaseFastMutex.c)
 *     VerifierExReleaseFastMutexNoReboot @ 0x14077FD70 (VerifierExReleaseFastMutexNoReboot.c)
 * Callees:
 *     ViExCheckAPCsDisabled @ 0x14078020C (ViExCheckAPCsDisabled.c)
 */

char *__fastcall ViExReleaseFastMutexCommon(__int64 a1)
{
  char CurrentIrql; // al

  if ( (MmVerifierData & 0x800) != 0 )
    CurrentIrql = ViExCheckAPCsDisabled(0x34u, a1);
  else
    CurrentIrql = KeGetCurrentIrql();
  return VfKeIrqlTransitionReserveLogEntry(CurrentIrql, *(_BYTE *)(a1 + 48));
}
