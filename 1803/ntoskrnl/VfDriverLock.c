/*
 * XREFs of VfDriverLock @ 0x14080F570
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x1402A97FC (VfIsVerificationEnabledForImage.c)
 *     MmIsDriverSuspectForVerifier @ 0x14080F4E0 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x140815C38 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140815DC0 (VfDriverEnableVerifierForAll.c)
 *     ViDriverReApplyVerifierForAll @ 0x140816010 (ViDriverReApplyVerifierForAll.c)
 *     VfThunkAddDriverThunks @ 0x1408239EC (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x140823A70 (VfThunkAddSpecialDriverThunks.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x14082A7B0 (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x14082A9EC (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x14082AD78 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x14082AE04 (VfSuspectDriversUnloadCallback.c)
 *     VfAddVerifierEntry @ 0x140837854 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140837A60 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x140837B68 (VfSetVerifierInformationEx.c)
 *     VfTriageAddDrivers @ 0x1408E160C (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x1408E1A64 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x1408E1C34 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *VfDriverLock()
{
  struct _KTHREAD *result; // rax

  KeWaitForSingleObject(&ViDriversLoadLock, WrVirtualMemory, 0, 0, 0LL);
  result = KeGetCurrentThread();
  ViDriversLoadLockOwner = (__int64)result;
  return result;
}
