/*
 * XREFs of VerifierExAcquireFastMutexUnsafeNoReboot @ 0x14082F1C0
 * Callers:
 *     VerifierExAcquireFastMutexUnsafe @ 0x14082F180 (VerifierExAcquireFastMutexUnsafe.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ViExCheckAPCsDisabled @ 0x14082F76C (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExAcquireFastMutexUnsafeNoReboot(ULONG_PTR a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(0x39uLL, a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExAcquireFastMutexUnsafe)(a1);
}
