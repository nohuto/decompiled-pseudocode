/*
 * XREFs of VfUtilSynchronizationObjectSanityChecks @ 0x1407654D0
 * Callers:
 *     VerifierKeInitializeEvent @ 0x140777100 (VerifierKeInitializeEvent.c)
 *     VerifierKeInitializeSemaphore @ 0x140777200 (VerifierKeInitializeSemaphore.c)
 *     VerifierKeInitializeTimerEx @ 0x140777260 (VerifierKeInitializeTimerEx.c)
 *     ViKeInitializeMutantCommon @ 0x14077835C (ViKeInitializeMutantCommon.c)
 *     ViKeInitializeMutexCommon @ 0x140778398 (ViKeInitializeMutexCommon.c)
 *     ViKeWaitSanityChecks @ 0x140778910 (ViKeWaitSanityChecks.c)
 *     VerifierExInitializeLookasideListEx @ 0x14077C990 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x14077CAE0 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x14077CC00 (VerifierExInitializePagedLookasideList.c)
 *     VerifierExInitializeResourceLite @ 0x14077D900 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140112130 (MmIsSessionAddress.c)
 *     MmIsNonPagedSystemAddressValid @ 0x140211F20 (MmIsNonPagedSystemAddressValid.c)
 *     VfUtilCheckKernelAddress @ 0x140765068 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

BOOLEAN __fastcall VfUtilSynchronizationObjectSanityChecks(PVOID VirtualAddress, __int64 a2)
{
  BOOLEAN result; // al

  VfUtilCheckKernelAddress((unsigned __int64)VirtualAddress, a2);
  if ( MmIsSessionAddress((unsigned __int64)VirtualAddress) )
    VerifierBugCheckIfAppropriate(0xC4u, 0LL);
  result = MmVerifierData;
  if ( (MmVerifierData & 2) != 0 )
  {
    result = MmIsNonPagedSystemAddressValid(VirtualAddress);
    if ( !result )
      return VerifierBugCheckIfAppropriate(0xC4u, 0LL);
  }
  return result;
}
