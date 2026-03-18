/*
 * XREFs of VfUtilCheckKernelAddress @ 0x1407A6D9C
 * Callers:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1407A70A4 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoFreeMdl @ 0x1407A9910 (VerifierIoFreeMdl.c)
 *     VerifierIoInitializeWorkItem @ 0x1407A9970 (VerifierIoInitializeWorkItem.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x1407B8974 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x1407B8A3C (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x1407B8B24 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon @ 0x1407B8C24 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon.c)
 *     VerifierKeReleaseMutant @ 0x1407B9590 (VerifierKeReleaseMutant.c)
 *     VerifierKeReleaseMutantNoReboot @ 0x1407B9610 (VerifierKeReleaseMutantNoReboot.c)
 *     VerifierKeReleaseMutex @ 0x1407B9670 (VerifierKeReleaseMutex.c)
 *     VerifierKeReleaseMutexNoReboot @ 0x1407B96D0 (VerifierKeReleaseMutexNoReboot.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x1407B97A0 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x1407B9830 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKeSetEvent @ 0x1407B98C0 (VerifierKeSetEvent.c)
 *     VerifierPortKeAcquireSpinLock @ 0x1407B9D70 (VerifierPortKeAcquireSpinLock.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x1407B9E00 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     VfKeInsertQueueDpc @ 0x1407BA060 (VfKeInsertQueueDpc.c)
 *     VfKeRemoveQueueDpc @ 0x1407BA120 (VfKeRemoveQueueDpc.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1407BA150 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeAcquireSpinLockRaiseToDpcCommon @ 0x1407BA1DC (ViKeAcquireSpinLockRaiseToDpcCommon.c)
 *     ViKeReleaseSpinLockCommon @ 0x1407BA570 (ViKeReleaseSpinLockCommon.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1407BA5E0 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     VerifierObGetObjectSecurity @ 0x1407C5430 (VerifierObGetObjectSecurity.c)
 *     VerifierObReferenceObjectByPointer @ 0x1407C55A0 (VerifierObReferenceObjectByPointer.c)
 *     VerifierObReferenceObjectByPointerWithTag @ 0x1407C5630 (VerifierObReferenceObjectByPointerWithTag.c)
 *     VerifierObfDereferenceObject @ 0x1407C56C0 (VerifierObfDereferenceObject.c)
 *     VerifierObfDereferenceObjectWithTag @ 0x1407C56F0 (VerifierObfDereferenceObjectWithTag.c)
 *     VerifierObfReferenceObject @ 0x1407C5730 (VerifierObfReferenceObject.c)
 *     VerifierObfReferenceObjectWithTag @ 0x1407C57A0 (VerifierObfReferenceObjectWithTag.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfUtilCheckKernelAddress(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  __int64 result; // rax

  if ( (MmVerifierData & 0x800) != 0 )
  {
    if ( BugCheckParameter2 < 0x7FFFFFFEFFFFLL )
      return VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
    result = BugCheckParameter2 + BugCheckParameter3;
    if ( BugCheckParameter2 + BugCheckParameter3 < BugCheckParameter2 )
      return VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  }
  return result;
}
