/*
 * XREFs of VerifierExAcquireFastMutexNoReboot @ 0x14082F160
 * Callers:
 *     <none>
 * Callees:
 *     ViExAcquireFastMutexCommon @ 0x14082F6B4 (ViExAcquireFastMutexCommon.c)
 */

__int64 __fastcall VerifierExAcquireFastMutexNoReboot(__int64 a1)
{
  return ViExAcquireFastMutexCommon(a1, 0LL);
}
