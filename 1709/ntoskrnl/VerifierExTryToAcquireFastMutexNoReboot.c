/*
 * XREFs of VerifierExTryToAcquireFastMutexNoReboot @ 0x1407C1E90
 * Callers:
 *     <none>
 * Callees:
 *     ViExTryToAcquireFastMutexCommon @ 0x1407C22B8 (ViExTryToAcquireFastMutexCommon.c)
 */

__int64 __fastcall VerifierExTryToAcquireFastMutexNoReboot(__int64 a1)
{
  return ViExTryToAcquireFastMutexCommon(a1, 0LL);
}
