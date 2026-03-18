/*
 * XREFs of VfAvlInitializeLockContext @ 0x1402AB23C
 * Callers:
 *     VfDevObjIsDeviceRemoved @ 0x140821298 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x140821304 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjAdd @ 0x140821610 (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x140821688 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1408217F0 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockDeleteMemoryRange @ 0x140821A38 (VfRemLockDeleteMemoryRange.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140821B24 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140821BC8 (ViRemLockFindSurrogate.c)
 *     VfTargetDriversEnableVerifier @ 0x140821C14 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x140821DD4 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140821EC0 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x140822108 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x140822230 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x14082234C (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x1408224E8 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x140822618 (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x1408226D4 (ViTargetWMIRegister.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x14082A7B0 (VfSuspectDriversGetVerifierInformation.c)
 *     VfCheckForLookaside @ 0x14082C0A8 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x14082C13C (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x14082C25C (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x14082C990 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x14082CD70 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x14082CFFC (VfCheckForResource.c)
 *     VerifierIoWMIRegistrationControl @ 0x140832E00 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfAvlInitializeLockContext(__int64 a1, int a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( !a2 )
    *(_BYTE *)(a1 + 9) = 4;
  return result;
}
