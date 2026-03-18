/*
 * XREFs of VfUtilCheckKernelAddress @ 0x140813F1C
 * Callers:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140814224 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoFreeMdl @ 0x140816970 (VerifierIoFreeMdl.c)
 *     VerifierIoInitializeWorkItem @ 0x1408169D0 (VerifierIoInitializeWorkItem.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x140825C04 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140825CDC (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x140825DC4 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon @ 0x140825EC4 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon.c)
 *     VerifierKeReleaseMutant @ 0x140826870 (VerifierKeReleaseMutant.c)
 *     VerifierKeReleaseMutantNoReboot @ 0x1408268F0 (VerifierKeReleaseMutantNoReboot.c)
 *     VerifierKeReleaseMutex @ 0x140826950 (VerifierKeReleaseMutex.c)
 *     VerifierKeReleaseMutexNoReboot @ 0x1408269B0 (VerifierKeReleaseMutexNoReboot.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x140826A80 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x140826B10 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKeSetEvent @ 0x140826C00 (VerifierKeSetEvent.c)
 *     VerifierPortKeAcquireSpinLock @ 0x140827120 (VerifierPortKeAcquireSpinLock.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x1408271B0 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     VfKeInsertQueueDpc @ 0x1408273C0 (VfKeInsertQueueDpc.c)
 *     VfKeRemoveQueueDpc @ 0x140827480 (VfKeRemoveQueueDpc.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1408274B0 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeAcquireSpinLockRaiseToDpcCommon @ 0x140827544 (ViKeAcquireSpinLockRaiseToDpcCommon.c)
 *     ViKeReleaseSpinLockCommon @ 0x140827910 (ViKeReleaseSpinLockCommon.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x140827980 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     VerifierObGetObjectSecurity @ 0x140832990 (VerifierObGetObjectSecurity.c)
 *     VerifierObReferenceObjectByPointer @ 0x140832B00 (VerifierObReferenceObjectByPointer.c)
 *     VerifierObReferenceObjectByPointerWithTag @ 0x140832B90 (VerifierObReferenceObjectByPointerWithTag.c)
 *     VerifierObfDereferenceObject @ 0x140832C20 (VerifierObfDereferenceObject.c)
 *     VerifierObfDereferenceObjectWithTag @ 0x140832C50 (VerifierObfDereferenceObjectWithTag.c)
 *     VerifierObfReferenceObject @ 0x140832C90 (VerifierObfReferenceObject.c)
 *     VerifierObfReferenceObjectWithTag @ 0x140832D00 (VerifierObfReferenceObjectWithTag.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14081D3A4 (VerifierBugCheckIfAppropriate.c)
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
