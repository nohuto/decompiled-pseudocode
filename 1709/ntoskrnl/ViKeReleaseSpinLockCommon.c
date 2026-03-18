/*
 * XREFs of ViKeReleaseSpinLockCommon @ 0x1407BA570
 * Callers:
 *     VerifierKeReleaseSpinLock @ 0x1407B9730 (VerifierKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLock @ 0x1407B9E80 (VerifierPortKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLockNoXdv @ 0x1407B9EE0 (VerifierPortKeReleaseSpinLockNoXdv.c)
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x1407A6D9C (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 *     ViKeLowerIrqlSanityChecks @ 0x1407BA380 (ViKeLowerIrqlSanityChecks.c)
 */

char *__fastcall ViKeReleaseSpinLockCommon(ULONG_PTR BugCheckParameter3, unsigned __int8 a2)
{
  unsigned __int8 CurrentIrql; // bl

  VfUtilCheckKernelAddress(BugCheckParameter3, 8uLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( (MmVerifierData & 2) != 0 && CurrentIrql < 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x32uLL, CurrentIrql, BugCheckParameter3, 0LL);
  return ViKeLowerIrqlSanityChecks(CurrentIrql, a2);
}
