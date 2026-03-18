/*
 * XREFs of VfDriverLock @ 0x140762550
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x14024FED8 (VfIsVerificationEnabledForImage.c)
 *     MmIsDriverSuspectForVerifier @ 0x1407624C0 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x140767064 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x1407671E4 (VfDriverEnableVerifierForAll.c)
 *     ViDriverReApplyVerifierForAll @ 0x14076742C (ViDriverReApplyVerifierForAll.c)
 *     VfThunkAddDriverThunks @ 0x140773F3C (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x140773FC0 (VfThunkAddSpecialDriverThunks.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x14077B4F8 (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x14077B740 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x14077BABC (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x14077BB48 (VfSuspectDriversUnloadCallback.c)
 *     VfAddVerifierEntry @ 0x140787E8C (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x14078808C (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x14078818C (VfSetVerifierInformationEx.c)
 *     VfTriageAddDrivers @ 0x14083568C (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140835AE4 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140835CA4 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *VfDriverLock()
{
  struct _KTHREAD *result; // rax

  KeWaitForSingleObject(&ViDriversLoadLock, WrVirtualMemory, 0, 0, 0LL);
  result = KeGetCurrentThread();
  ViDriversLoadLockOwner = (__int64)result;
  return result;
}
