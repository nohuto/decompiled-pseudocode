/*
 * XREFs of VfDriverLock @ 0x1407A2530
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x1402766D8 (VfIsVerificationEnabledForImage.c)
 *     MmIsDriverSuspectForVerifier @ 0x1407A24A0 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x1407A8C08 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x1407A8D88 (VfDriverEnableVerifierForAll.c)
 *     ViDriverReApplyVerifierForAll @ 0x1407A8FD8 (ViDriverReApplyVerifierForAll.c)
 *     VfThunkAddDriverThunks @ 0x1407B5CF8 (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x1407B5D7C (VfThunkAddSpecialDriverThunks.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x1407BD404 (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x1407BD64C (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x1407BD9C8 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x1407BDA54 (VfSuspectDriversUnloadCallback.c)
 *     VfAddVerifierEntry @ 0x1407CA2F4 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x1407CA500 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x1407CA600 (VfSetVerifierInformationEx.c)
 *     VfTriageAddDrivers @ 0x14086C8C4 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x14086CD1C (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x14086CEDC (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *VfDriverLock()
{
  struct _KTHREAD *result; // rax

  KeWaitForSingleObject(&ViDriversLoadLock, WrVirtualMemory, 0, 0, 0LL);
  result = KeGetCurrentThread();
  ViDriversLoadLockOwner = (__int64)result;
  return result;
}
