/*
 * XREFs of VerifierExAcquireFastMutexNoReboot @ 0x1407C1C20
 * Callers:
 *     <none>
 * Callees:
 *     ViExAcquireFastMutexCommon @ 0x1407C2168 (ViExAcquireFastMutexCommon.c)
 */

__int64 __fastcall VerifierExAcquireFastMutexNoReboot(__int64 a1)
{
  return ViExAcquireFastMutexCommon(a1, 0LL);
}
