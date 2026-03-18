/*
 * XREFs of VerifierKeInitializeTimerEx @ 0x1407B90C0
 * Callers:
 *     VerifierKeInitializeTimer @ 0x1407B90A0 (VerifierKeInitializeTimer.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KeCheckForTimer @ 0x140204778 (KeCheckForTimer.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1407A70A4 (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall VerifierKeInitializeTimerEx(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  VfUtilSynchronizationObjectSanityChecks(BugCheckParameter3, 0x40uLL);
  KeCheckForTimer(BugCheckParameter3, 64LL);
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD))pXdvKeInitializeTimerEx)(BugCheckParameter3, a2);
}
