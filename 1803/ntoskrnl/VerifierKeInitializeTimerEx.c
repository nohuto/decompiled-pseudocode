/*
 * XREFs of VerifierKeInitializeTimerEx @ 0x140826370
 * Callers:
 *     VerifierKeInitializeTimer @ 0x140826350 (VerifierKeInitializeTimer.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KeCheckForTimer @ 0x140241F58 (KeCheckForTimer.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140814224 (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall VerifierKeInitializeTimerEx(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  VfUtilSynchronizationObjectSanityChecks(BugCheckParameter3, 0x40uLL);
  if ( (MmVerifierData & 0x400000) == 0 )
    KeCheckForTimer(BugCheckParameter3, 64LL);
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD))pXdvKeInitializeTimerEx)(BugCheckParameter3, a2);
}
