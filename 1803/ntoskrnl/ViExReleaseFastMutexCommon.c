/*
 * XREFs of ViExReleaseFastMutexCommon @ 0x14082F7D8
 * Callers:
 *     VerifierExReleaseFastMutex @ 0x14082F240 (VerifierExReleaseFastMutex.c)
 *     VerifierExReleaseFastMutexNoReboot @ 0x14082F2A0 (VerifierExReleaseFastMutexNoReboot.c)
 * Callees:
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140827410 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViExCheckAPCsDisabled @ 0x14082F76C (ViExCheckAPCsDisabled.c)
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
