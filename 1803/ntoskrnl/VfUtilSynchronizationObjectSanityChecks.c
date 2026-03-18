/*
 * XREFs of VfUtilSynchronizationObjectSanityChecks @ 0x140814224
 * Callers:
 *     VerifierKeInitializeEvent @ 0x1408261E0 (VerifierKeInitializeEvent.c)
 *     VerifierKeInitializeSemaphore @ 0x140826300 (VerifierKeInitializeSemaphore.c)
 *     VerifierKeInitializeTimerEx @ 0x140826370 (VerifierKeInitializeTimerEx.c)
 *     ViKeInitializeMutantCommon @ 0x1408275A4 (ViKeInitializeMutantCommon.c)
 *     ViKeInitializeMutexCommon @ 0x1408275E0 (ViKeInitializeMutexCommon.c)
 *     ViKeWaitSanityChecks @ 0x140827BB0 (ViKeWaitSanityChecks.c)
 *     VerifierExInitializeLookasideListEx @ 0x14082BD30 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x14082BE80 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x14082BFA0 (VerifierExInitializePagedLookasideList.c)
 *     VerifierExInitializeResourceLite @ 0x14082CD70 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140103610 (MmIsSessionAddress.c)
 *     MmIsNonPagedSystemAddressValid @ 0x140256470 (MmIsNonPagedSystemAddressValid.c)
 *     VfUtilCheckKernelAddress @ 0x140813F1C (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14081D3A4 (VerifierBugCheckIfAppropriate.c)
 */

char __fastcall VfUtilSynchronizationObjectSanityChecks(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  int v3; // eax

  LOBYTE(v3) = VfUtilCheckKernelAddress(BugCheckParameter2, a2);
  if ( (MmVerifierData & 0x800) != 0 )
  {
    LOBYTE(v3) = MmIsSessionAddress(BugCheckParameter2);
    if ( v3 )
      LOBYTE(v3) = VerifierBugCheckIfAppropriate(0xC4u, 0xDFuLL, BugCheckParameter2, 0LL, 0LL);
    if ( (MmVerifierData & 0x800) != 0 )
    {
      LOBYTE(v3) = MmIsNonPagedSystemAddressValid((PVOID)BugCheckParameter2);
      if ( !(_BYTE)v3 )
        LOBYTE(v3) = VerifierBugCheckIfAppropriate(0xC4u, 0xE1uLL, BugCheckParameter2, 0LL, 0LL);
    }
  }
  return v3;
}
