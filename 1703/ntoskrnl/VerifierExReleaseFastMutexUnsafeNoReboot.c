/*
 * XREFs of VerifierExReleaseFastMutexUnsafeNoReboot @ 0x14077FE00
 * Callers:
 *     <none>
 * Callees:
 *     ViExCheckAPCsDisabled @ 0x14078020C (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExReleaseFastMutexUnsafeNoReboot(__int64 a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(58LL, a1);
  return ((__int64 (__fastcall *)(__int64))pXdvExReleaseFastMutexUnsafe)(a1);
}
