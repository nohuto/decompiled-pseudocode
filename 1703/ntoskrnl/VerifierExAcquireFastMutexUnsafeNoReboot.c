/*
 * XREFs of VerifierExAcquireFastMutexUnsafeNoReboot @ 0x14077FC90
 * Callers:
 *     VerifierExAcquireFastMutexUnsafe @ 0x14077FC50 (VerifierExAcquireFastMutexUnsafe.c)
 * Callees:
 *     ViExCheckAPCsDisabled @ 0x14078020C (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExAcquireFastMutexUnsafeNoReboot(__int64 a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(57LL, a1);
  return ((__int64 (__fastcall *)(__int64))pXdvExAcquireFastMutexUnsafe)(a1);
}
