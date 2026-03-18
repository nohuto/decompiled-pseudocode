/*
 * XREFs of VfUtilSynchronizationObjectSanityChecks @ 0x1407A70A4
 * Callers:
 *     VerifierKeInitializeEvent @ 0x1407B8F30 (VerifierKeInitializeEvent.c)
 *     VerifierKeInitializeSemaphore @ 0x1407B9050 (VerifierKeInitializeSemaphore.c)
 *     VerifierKeInitializeTimerEx @ 0x1407B90C0 (VerifierKeInitializeTimerEx.c)
 *     ViKeInitializeMutantCommon @ 0x1407BA23C (ViKeInitializeMutantCommon.c)
 *     ViKeInitializeMutexCommon @ 0x1407BA278 (ViKeInitializeMutexCommon.c)
 *     ViKeWaitSanityChecks @ 0x1407BA808 (ViKeWaitSanityChecks.c)
 *     VerifierExInitializeLookasideListEx @ 0x1407BE8D0 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x1407BEA20 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x1407BEB40 (VerifierExInitializePagedLookasideList.c)
 *     VerifierExInitializeResourceLite @ 0x1407BF870 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140083FA0 (MmIsSessionAddress.c)
 *     MmIsNonPagedSystemAddressValid @ 0x140219990 (MmIsNonPagedSystemAddressValid.c)
 *     VfUtilCheckKernelAddress @ 0x1407A6D9C (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 */

BOOLEAN __fastcall VfUtilSynchronizationObjectSanityChecks(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  BOOLEAN result; // al

  VfUtilCheckKernelAddress(BugCheckParameter2, a2);
  if ( (MmVerifierData & 0x800) != 0 && MmIsSessionAddress(BugCheckParameter2) )
    VerifierBugCheckIfAppropriate(0xC4u, 0xDFuLL, BugCheckParameter2, 0LL, 0LL);
  result = MmVerifierData;
  if ( (MmVerifierData & 2) != 0 )
  {
    result = MmIsNonPagedSystemAddressValid((PVOID)BugCheckParameter2);
    if ( !result )
      return VerifierBugCheckIfAppropriate(0xC4u, 0xE1uLL, BugCheckParameter2, 0LL, 0LL);
  }
  return result;
}
