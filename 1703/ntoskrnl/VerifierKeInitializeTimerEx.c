/*
 * XREFs of VerifierKeInitializeTimerEx @ 0x140777260
 * Callers:
 *     VerifierKeInitializeTimer @ 0x140777250 (VerifierKeInitializeTimer.c)
 * Callees:
 *     KeCheckForTimer @ 0x1401FE4D8 (KeCheckForTimer.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1407654D0 (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall VerifierKeInitializeTimerEx(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  VfUtilSynchronizationObjectSanityChecks((PVOID)BugCheckParameter3, 64LL);
  KeCheckForTimer(BugCheckParameter3, 64LL);
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD))pXdvKeInitializeTimerEx)(BugCheckParameter3, a2);
}
